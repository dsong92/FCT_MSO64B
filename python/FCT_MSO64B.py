import socket
#import struct
import sys
import pyvisa as visa
import numpy as np
from struct import unpack
from matplotlib import pyplot as plt
import time

# Ethernet setting
# Utility-I/O-LAN - DHCP (auto set) or TCP/IP

#start = time.time() # 시작시간
rm = visa.ResourceManager()
Scope = rm.open_resource('TCPIP0::192.168.0.31::inst0::INSTR')

# S( write ) : only send commend
def S(commend):
    return Scope.write(commend)

# Q ( query ) : send commend and read the response
def Q(commend):
    return Scope.query(commend)

#S('HORizontal:SAMPLERate 6.25e+9') # defalut setting is 50 GS/s ( 50e+9 )
S('HORizontal:SCAle 4e-9')

FCT_VERTICAL_CALI = 1/32000 # might be changed when oscilloscope is installed at linac
FCT_CURR_CALI = 1.276 # from original code
FCT_AREA_CALI = 0.8 # from original code

# Cacl_Sigma : find the area of signal
def Calc_Sigma(np_array):
    maxarg = np.argmax(np_array)
    left = maxarg
    right = maxarg
    
    while left != 0:
        if np_array[left] < 0 : # find the index when voltage turns positive to negative, from center to left
            break
        left -= 1

    np_size = len(np_array)
    while right < np_size:
        if np_array[right] < 0 : # find the index when voltage turns postivie to negative, from center to right
            break
        right += 1
    return FCT_AREA_CALI * 1e+9 * 2e-11 * np.sum(np_array[left:right+1]) * 2e-11 * 0.5



def Get_PeakV_CH1():
    S('CH1:BANdwidth: 1e+9')
    S('CH1:OFFSet 0')
    S('CH1:SCAle 0.2')
    S('CH1:RESISTANCE 50')

    S('DATa:SOUrce CH1')
    S('DATa:START 1')
    S('DATa:STOP 6000')
    S('DATa:ENCdg ASCIi')
    
    S('TRIGGER:A:LEVEL:CH1 0.25')
    
    S('WFMOutpre:ENCdg ASCii')
    #S('WFMOutpre:BIT_Nr 16')
    S('WFMOutpre:BYT_Nr 4')
    S('HEADer 0')
    
    ch1_np = np.array((Q('CURVe?')).split(','))
    ch1_np = ch1_np.astype(int)
    ch1_np = ch1_np + 10000 # up the offset line
    ch1_np_calib = ch1_np * FCT_VERTICAL_CALI

    ch1_peakV = max(ch1_np_calib)
    ch1_peakC = ch1_peakV * FCT_CURR_CALI
    ch1_sigma = Calc_Sigma(ch1_np_calib)

    pydev.iointr('CH1_PeakV', ch1_peakV)
    pydev.iointr('CH1_PeakC', ch1_peakC)
    pydev.iointr('CH1_Sigma', ch1_sigma)
    return 1


def Get_PeakV_CH3():
    S('CH3:BANdwidth: 1e+9')
    S('CH3:OFFSet 0')
    S('CH3:SCAle 0.2')
    S('CH3:RESISTANCE 50')

    S('DATa:SOUrce CH3')
    S('DATa:START 1')
    S('DATa:STOP 6000')
    S('DATa:ENCdg ASCIi')
    
    S('TRIGGER:A:LEVEL:CH3 0.25')
    
    S('WFMOutpre:ENCdg ASCii')
    S('WFMOutpre:BIT_Nr 16')
    S('WFMOutpre:BYT_Nr 4')
    S('HEADer 0')

    ch3_np = np.array((Q('CURVe?')).split(','))
    ch3_np = ch3_np.astype(int)
    ch3_np = ch3_np + 10000
    ch3_np_calib = ch3_np * FCT_VERTICAL_CALI 

    ch3_peakV = max(ch3_np_calib)
    ch3_peakC = ch3_peakV * FCT_CURR_CALI
    ch3_sigma = Calc_Sigma(ch3_np_calib)

    pydev.iointr('CH3_PeakV', ch3_peakV)
    pydev.iointr('CH3_PeakC', ch3_peakC)
    pydev.iointr('CH3_Sigma', ch3_sigma)
    return 1
