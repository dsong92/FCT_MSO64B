#!../../bin/linux-x86_64/pydevioc

< envPaths

# PYTHONPATH points to folders where Python modules are.
epicsEnvSet("PYTHONPATH","$(TOP)/python")

cd ${TOP}

## Register all support components
dbLoadDatabase "${TOP}/dbd/pydevioc.dbd"
pydevioc_registerRecordDeviceDriver pdbbase

## Load record instances
dbLoadRecords("${TOP}/db/fctdev.db")
dbLoadRecords("${TOP}/db/pycalcrectest.db")

cd ${TOP}/iocBoot/${IOC}

pydev("import numpy")

#pydev("import FCT_MSO64B")
#pydev("FCT01 = FCT_MSO64B.FCT_MSO64B_Client()")
pydev("from FCT_MSO64B import Get_PeakV_CH1")
pydev("from FCT_MSO64B import Get_PeakV_CH3")



iocInit
