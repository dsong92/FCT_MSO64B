/* pycalcRecord.h generated from pycalcRecord.dbd */

#ifndef INC_pycalcRecord_H
#define INC_pycalcRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "epicsTime.h"
#define PYCALCREC_NARGS 10

typedef struct pycalcRecord {
    char                name[61];   /* Record Name */
    char                desc[41];   /* Descriptor */
    char                asg[29];    /* Access Security Group */
    epicsEnum16         scan;       /* Scan Mechanism */
    epicsEnum16         pini;       /* Process at iocInit */
    epicsInt16          phas;       /* Scan Phase */
    char                evnt[40];   /* Event Name */
    epicsInt16          tse;        /* Time Stamp Event */
    DBLINK              tsel;       /* Time Stamp Link */
    epicsEnum16         dtyp;       /* Device Type */
    epicsInt16          disv;       /* Disable Value */
    epicsInt16          disa;       /* Disable */
    DBLINK              sdis;       /* Scanning Disable */
    epicsMutexId        mlok;       /* Monitor lock */
    ELLLIST             mlis;       /* Monitor List */
    epicsUInt8          disp;       /* Disable putField */
    epicsUInt8          proc;       /* Force Processing */
    epicsEnum16         stat;       /* Alarm Status */
    epicsEnum16         sevr;       /* Alarm Severity */
    epicsEnum16         nsta;       /* New Alarm Status */
    epicsEnum16         nsev;       /* New Alarm Severity */
    epicsEnum16         acks;       /* Alarm Ack Severity */
    epicsEnum16         ackt;       /* Alarm Ack Transient */
    epicsEnum16         diss;       /* Disable Alarm Sevrty */
    epicsUInt8          lcnt;       /* Lock Count */
    epicsUInt8          pact;       /* Record active */
    epicsUInt8          putf;       /* dbPutField process */
    epicsUInt8          rpro;       /* Reprocess  */
    struct asgMember    *asp;       /* Access Security Pvt */
    struct processNotify *ppn;      /* pprocessNotify */
    struct processNotifyRecord *ppnr; /* pprocessNotifyRecord */
    struct scan_element *spvt;      /* Scan Private */
    struct rset         *rset;      /* Address of RSET */
    struct dset         *dset;      /* DSET address */
    void                *dpvt;      /* Device Private */
    struct dbRecordType *rdes;      /* Address of dbRecordType */
    struct lockRecord   *lset;      /* Lock Set */
    epicsEnum16         prio;       /* Scheduling Priority */
    epicsUInt8          tpro;       /* Trace Processing */
    char                bkpt;       /* Break Point */
    epicsUInt8          udf;        /* Undefined */
    epicsEnum16         udfs;       /* Undefined Alarm Sevrty */
    epicsTimeStamp      time;       /* Time */
    DBLINK              flnk;       /* Forward Process Link */
    struct PyCalcRecordContext *ctx; /* Record Private */
    char                calc[255];  /* Python code to execute */
    void *val;                      /* Result of Python code */
    epicsEnum16         ftvl;       /* Type of VAL */
    DBLINK              out;        /* Output Specification */
    DBLINK              inpa;       /* Input Link A */
    DBLINK              inpb;       /* Input Link B */
    DBLINK              inpc;       /* Input Link C */
    DBLINK              inpd;       /* Input Link D */
    DBLINK              inpe;       /* Input Link E */
    DBLINK              inpf;       /* Input Link F */
    DBLINK              inpg;       /* Input Link G */
    DBLINK              inph;       /* Input Link H */
    DBLINK              inpi;       /* Input Link I */
    DBLINK              inpj;       /* Input Link J */
    void *a;                        /* Value A */
    void *b;                        /* Value B */
    void *c;                        /* Value C */
    void *d;                        /* Value D */
    void *e;                        /* Value E */
    void *f;                        /* Value F */
    void *g;                        /* Value G */
    void *h;                        /* Value H */
    void *i;                        /* Value I */
    void *j;                        /* Value J */
    epicsEnum16         fta;        /* Type of value A */
    epicsEnum16         ftb;        /* Type of value B */
    epicsEnum16         ftc;        /* Type of value C */
    epicsEnum16         ftd;        /* Type of value D */
    epicsEnum16         fte;        /* Type of value E */
    epicsEnum16         ftf;        /* Type of value F */
    epicsEnum16         ftg;        /* Type of value G */
    epicsEnum16         fth;        /* Type of value H */
    epicsEnum16         fti;        /* Type of value I */
    epicsEnum16         ftj;        /* Type of value J */
    epicsUInt32         siza;       /* Size of buffer for value A */
    epicsUInt32         sizb;       /* Size of buffer for value B */
    epicsUInt32         sizc;       /* Size of buffer for value C */
    epicsUInt32         sizd;       /* Size of buffer for value D */
    epicsUInt32         size;       /* Size of buffer for value E */
    epicsUInt32         sizf;       /* Size of buffer for value F */
    epicsUInt32         sizg;       /* Size of buffer for value G */
    epicsUInt32         sizh;       /* Size of buffer for value H */
    epicsUInt32         sizi;       /* Size of buffer for value I */
    epicsUInt32         sizj;       /* Size of buffer for value J */
} pycalcRecord;

typedef enum {
	pycalcRecordNAME = 0,
	pycalcRecordDESC = 1,
	pycalcRecordASG = 2,
	pycalcRecordSCAN = 3,
	pycalcRecordPINI = 4,
	pycalcRecordPHAS = 5,
	pycalcRecordEVNT = 6,
	pycalcRecordTSE = 7,
	pycalcRecordTSEL = 8,
	pycalcRecordDTYP = 9,
	pycalcRecordDISV = 10,
	pycalcRecordDISA = 11,
	pycalcRecordSDIS = 12,
	pycalcRecordMLOK = 13,
	pycalcRecordMLIS = 14,
	pycalcRecordDISP = 15,
	pycalcRecordPROC = 16,
	pycalcRecordSTAT = 17,
	pycalcRecordSEVR = 18,
	pycalcRecordNSTA = 19,
	pycalcRecordNSEV = 20,
	pycalcRecordACKS = 21,
	pycalcRecordACKT = 22,
	pycalcRecordDISS = 23,
	pycalcRecordLCNT = 24,
	pycalcRecordPACT = 25,
	pycalcRecordPUTF = 26,
	pycalcRecordRPRO = 27,
	pycalcRecordASP = 28,
	pycalcRecordPPN = 29,
	pycalcRecordPPNR = 30,
	pycalcRecordSPVT = 31,
	pycalcRecordRSET = 32,
	pycalcRecordDSET = 33,
	pycalcRecordDPVT = 34,
	pycalcRecordRDES = 35,
	pycalcRecordLSET = 36,
	pycalcRecordPRIO = 37,
	pycalcRecordTPRO = 38,
	pycalcRecordBKPT = 39,
	pycalcRecordUDF = 40,
	pycalcRecordUDFS = 41,
	pycalcRecordTIME = 42,
	pycalcRecordFLNK = 43,
	pycalcRecordCTX = 44,
	pycalcRecordCALC = 45,
	pycalcRecordVAL = 46,
	pycalcRecordFTVL = 47,
	pycalcRecordOUT = 48,
	pycalcRecordINPA = 49,
	pycalcRecordINPB = 50,
	pycalcRecordINPC = 51,
	pycalcRecordINPD = 52,
	pycalcRecordINPE = 53,
	pycalcRecordINPF = 54,
	pycalcRecordINPG = 55,
	pycalcRecordINPH = 56,
	pycalcRecordINPI = 57,
	pycalcRecordINPJ = 58,
	pycalcRecordA = 59,
	pycalcRecordB = 60,
	pycalcRecordC = 61,
	pycalcRecordD = 62,
	pycalcRecordE = 63,
	pycalcRecordF = 64,
	pycalcRecordG = 65,
	pycalcRecordH = 66,
	pycalcRecordI = 67,
	pycalcRecordJ = 68,
	pycalcRecordFTA = 69,
	pycalcRecordFTB = 70,
	pycalcRecordFTC = 71,
	pycalcRecordFTD = 72,
	pycalcRecordFTE = 73,
	pycalcRecordFTF = 74,
	pycalcRecordFTG = 75,
	pycalcRecordFTH = 76,
	pycalcRecordFTI = 77,
	pycalcRecordFTJ = 78,
	pycalcRecordSIZA = 79,
	pycalcRecordSIZB = 80,
	pycalcRecordSIZC = 81,
	pycalcRecordSIZD = 82,
	pycalcRecordSIZE = 83,
	pycalcRecordSIZF = 84,
	pycalcRecordSIZG = 85,
	pycalcRecordSIZH = 86,
	pycalcRecordSIZI = 87,
	pycalcRecordSIZJ = 88
} pycalcFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsAssert.h>
#include <epicsExport.h>
#ifdef __cplusplus
extern "C" {
#endif
static int pycalcRecordSizeOffset(dbRecordType *prt)
{
    pycalcRecord *prec = 0;

    assert(prt->no_fields == 89);
    prt->papFldDes[pycalcRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[pycalcRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[pycalcRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[pycalcRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[pycalcRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[pycalcRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[pycalcRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[pycalcRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[pycalcRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[pycalcRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[pycalcRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[pycalcRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[pycalcRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[pycalcRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[pycalcRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[pycalcRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[pycalcRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[pycalcRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[pycalcRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[pycalcRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[pycalcRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[pycalcRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[pycalcRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[pycalcRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[pycalcRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[pycalcRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[pycalcRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[pycalcRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[pycalcRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[pycalcRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[pycalcRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[pycalcRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[pycalcRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[pycalcRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[pycalcRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[pycalcRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[pycalcRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[pycalcRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[pycalcRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[pycalcRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[pycalcRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[pycalcRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[pycalcRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[pycalcRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[pycalcRecordCTX]->size = sizeof(prec->ctx);
    prt->papFldDes[pycalcRecordCALC]->size = sizeof(prec->calc);
    prt->papFldDes[pycalcRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[pycalcRecordFTVL]->size = sizeof(prec->ftvl);
    prt->papFldDes[pycalcRecordOUT]->size = sizeof(prec->out);
    prt->papFldDes[pycalcRecordINPA]->size = sizeof(prec->inpa);
    prt->papFldDes[pycalcRecordINPB]->size = sizeof(prec->inpb);
    prt->papFldDes[pycalcRecordINPC]->size = sizeof(prec->inpc);
    prt->papFldDes[pycalcRecordINPD]->size = sizeof(prec->inpd);
    prt->papFldDes[pycalcRecordINPE]->size = sizeof(prec->inpe);
    prt->papFldDes[pycalcRecordINPF]->size = sizeof(prec->inpf);
    prt->papFldDes[pycalcRecordINPG]->size = sizeof(prec->inpg);
    prt->papFldDes[pycalcRecordINPH]->size = sizeof(prec->inph);
    prt->papFldDes[pycalcRecordINPI]->size = sizeof(prec->inpi);
    prt->papFldDes[pycalcRecordINPJ]->size = sizeof(prec->inpj);
    prt->papFldDes[pycalcRecordA]->size = sizeof(prec->a);
    prt->papFldDes[pycalcRecordB]->size = sizeof(prec->b);
    prt->papFldDes[pycalcRecordC]->size = sizeof(prec->c);
    prt->papFldDes[pycalcRecordD]->size = sizeof(prec->d);
    prt->papFldDes[pycalcRecordE]->size = sizeof(prec->e);
    prt->papFldDes[pycalcRecordF]->size = sizeof(prec->f);
    prt->papFldDes[pycalcRecordG]->size = sizeof(prec->g);
    prt->papFldDes[pycalcRecordH]->size = sizeof(prec->h);
    prt->papFldDes[pycalcRecordI]->size = sizeof(prec->i);
    prt->papFldDes[pycalcRecordJ]->size = sizeof(prec->j);
    prt->papFldDes[pycalcRecordFTA]->size = sizeof(prec->fta);
    prt->papFldDes[pycalcRecordFTB]->size = sizeof(prec->ftb);
    prt->papFldDes[pycalcRecordFTC]->size = sizeof(prec->ftc);
    prt->papFldDes[pycalcRecordFTD]->size = sizeof(prec->ftd);
    prt->papFldDes[pycalcRecordFTE]->size = sizeof(prec->fte);
    prt->papFldDes[pycalcRecordFTF]->size = sizeof(prec->ftf);
    prt->papFldDes[pycalcRecordFTG]->size = sizeof(prec->ftg);
    prt->papFldDes[pycalcRecordFTH]->size = sizeof(prec->fth);
    prt->papFldDes[pycalcRecordFTI]->size = sizeof(prec->fti);
    prt->papFldDes[pycalcRecordFTJ]->size = sizeof(prec->ftj);
    prt->papFldDes[pycalcRecordSIZA]->size = sizeof(prec->siza);
    prt->papFldDes[pycalcRecordSIZB]->size = sizeof(prec->sizb);
    prt->papFldDes[pycalcRecordSIZC]->size = sizeof(prec->sizc);
    prt->papFldDes[pycalcRecordSIZD]->size = sizeof(prec->sizd);
    prt->papFldDes[pycalcRecordSIZE]->size = sizeof(prec->size);
    prt->papFldDes[pycalcRecordSIZF]->size = sizeof(prec->sizf);
    prt->papFldDes[pycalcRecordSIZG]->size = sizeof(prec->sizg);
    prt->papFldDes[pycalcRecordSIZH]->size = sizeof(prec->sizh);
    prt->papFldDes[pycalcRecordSIZI]->size = sizeof(prec->sizi);
    prt->papFldDes[pycalcRecordSIZJ]->size = sizeof(prec->sizj);
    prt->papFldDes[pycalcRecordNAME]->offset = (unsigned short)((char *)&prec->name - (char *)prec);
    prt->papFldDes[pycalcRecordDESC]->offset = (unsigned short)((char *)&prec->desc - (char *)prec);
    prt->papFldDes[pycalcRecordASG]->offset = (unsigned short)((char *)&prec->asg - (char *)prec);
    prt->papFldDes[pycalcRecordSCAN]->offset = (unsigned short)((char *)&prec->scan - (char *)prec);
    prt->papFldDes[pycalcRecordPINI]->offset = (unsigned short)((char *)&prec->pini - (char *)prec);
    prt->papFldDes[pycalcRecordPHAS]->offset = (unsigned short)((char *)&prec->phas - (char *)prec);
    prt->papFldDes[pycalcRecordEVNT]->offset = (unsigned short)((char *)&prec->evnt - (char *)prec);
    prt->papFldDes[pycalcRecordTSE]->offset = (unsigned short)((char *)&prec->tse - (char *)prec);
    prt->papFldDes[pycalcRecordTSEL]->offset = (unsigned short)((char *)&prec->tsel - (char *)prec);
    prt->papFldDes[pycalcRecordDTYP]->offset = (unsigned short)((char *)&prec->dtyp - (char *)prec);
    prt->papFldDes[pycalcRecordDISV]->offset = (unsigned short)((char *)&prec->disv - (char *)prec);
    prt->papFldDes[pycalcRecordDISA]->offset = (unsigned short)((char *)&prec->disa - (char *)prec);
    prt->papFldDes[pycalcRecordSDIS]->offset = (unsigned short)((char *)&prec->sdis - (char *)prec);
    prt->papFldDes[pycalcRecordMLOK]->offset = (unsigned short)((char *)&prec->mlok - (char *)prec);
    prt->papFldDes[pycalcRecordMLIS]->offset = (unsigned short)((char *)&prec->mlis - (char *)prec);
    prt->papFldDes[pycalcRecordDISP]->offset = (unsigned short)((char *)&prec->disp - (char *)prec);
    prt->papFldDes[pycalcRecordPROC]->offset = (unsigned short)((char *)&prec->proc - (char *)prec);
    prt->papFldDes[pycalcRecordSTAT]->offset = (unsigned short)((char *)&prec->stat - (char *)prec);
    prt->papFldDes[pycalcRecordSEVR]->offset = (unsigned short)((char *)&prec->sevr - (char *)prec);
    prt->papFldDes[pycalcRecordNSTA]->offset = (unsigned short)((char *)&prec->nsta - (char *)prec);
    prt->papFldDes[pycalcRecordNSEV]->offset = (unsigned short)((char *)&prec->nsev - (char *)prec);
    prt->papFldDes[pycalcRecordACKS]->offset = (unsigned short)((char *)&prec->acks - (char *)prec);
    prt->papFldDes[pycalcRecordACKT]->offset = (unsigned short)((char *)&prec->ackt - (char *)prec);
    prt->papFldDes[pycalcRecordDISS]->offset = (unsigned short)((char *)&prec->diss - (char *)prec);
    prt->papFldDes[pycalcRecordLCNT]->offset = (unsigned short)((char *)&prec->lcnt - (char *)prec);
    prt->papFldDes[pycalcRecordPACT]->offset = (unsigned short)((char *)&prec->pact - (char *)prec);
    prt->papFldDes[pycalcRecordPUTF]->offset = (unsigned short)((char *)&prec->putf - (char *)prec);
    prt->papFldDes[pycalcRecordRPRO]->offset = (unsigned short)((char *)&prec->rpro - (char *)prec);
    prt->papFldDes[pycalcRecordASP]->offset = (unsigned short)((char *)&prec->asp - (char *)prec);
    prt->papFldDes[pycalcRecordPPN]->offset = (unsigned short)((char *)&prec->ppn - (char *)prec);
    prt->papFldDes[pycalcRecordPPNR]->offset = (unsigned short)((char *)&prec->ppnr - (char *)prec);
    prt->papFldDes[pycalcRecordSPVT]->offset = (unsigned short)((char *)&prec->spvt - (char *)prec);
    prt->papFldDes[pycalcRecordRSET]->offset = (unsigned short)((char *)&prec->rset - (char *)prec);
    prt->papFldDes[pycalcRecordDSET]->offset = (unsigned short)((char *)&prec->dset - (char *)prec);
    prt->papFldDes[pycalcRecordDPVT]->offset = (unsigned short)((char *)&prec->dpvt - (char *)prec);
    prt->papFldDes[pycalcRecordRDES]->offset = (unsigned short)((char *)&prec->rdes - (char *)prec);
    prt->papFldDes[pycalcRecordLSET]->offset = (unsigned short)((char *)&prec->lset - (char *)prec);
    prt->papFldDes[pycalcRecordPRIO]->offset = (unsigned short)((char *)&prec->prio - (char *)prec);
    prt->papFldDes[pycalcRecordTPRO]->offset = (unsigned short)((char *)&prec->tpro - (char *)prec);
    prt->papFldDes[pycalcRecordBKPT]->offset = (unsigned short)((char *)&prec->bkpt - (char *)prec);
    prt->papFldDes[pycalcRecordUDF]->offset = (unsigned short)((char *)&prec->udf - (char *)prec);
    prt->papFldDes[pycalcRecordUDFS]->offset = (unsigned short)((char *)&prec->udfs - (char *)prec);
    prt->papFldDes[pycalcRecordTIME]->offset = (unsigned short)((char *)&prec->time - (char *)prec);
    prt->papFldDes[pycalcRecordFLNK]->offset = (unsigned short)((char *)&prec->flnk - (char *)prec);
    prt->papFldDes[pycalcRecordCTX]->offset = (unsigned short)((char *)&prec->ctx - (char *)prec);
    prt->papFldDes[pycalcRecordCALC]->offset = (unsigned short)((char *)&prec->calc - (char *)prec);
    prt->papFldDes[pycalcRecordVAL]->offset = (unsigned short)((char *)&prec->val - (char *)prec);
    prt->papFldDes[pycalcRecordFTVL]->offset = (unsigned short)((char *)&prec->ftvl - (char *)prec);
    prt->papFldDes[pycalcRecordOUT]->offset = (unsigned short)((char *)&prec->out - (char *)prec);
    prt->papFldDes[pycalcRecordINPA]->offset = (unsigned short)((char *)&prec->inpa - (char *)prec);
    prt->papFldDes[pycalcRecordINPB]->offset = (unsigned short)((char *)&prec->inpb - (char *)prec);
    prt->papFldDes[pycalcRecordINPC]->offset = (unsigned short)((char *)&prec->inpc - (char *)prec);
    prt->papFldDes[pycalcRecordINPD]->offset = (unsigned short)((char *)&prec->inpd - (char *)prec);
    prt->papFldDes[pycalcRecordINPE]->offset = (unsigned short)((char *)&prec->inpe - (char *)prec);
    prt->papFldDes[pycalcRecordINPF]->offset = (unsigned short)((char *)&prec->inpf - (char *)prec);
    prt->papFldDes[pycalcRecordINPG]->offset = (unsigned short)((char *)&prec->inpg - (char *)prec);
    prt->papFldDes[pycalcRecordINPH]->offset = (unsigned short)((char *)&prec->inph - (char *)prec);
    prt->papFldDes[pycalcRecordINPI]->offset = (unsigned short)((char *)&prec->inpi - (char *)prec);
    prt->papFldDes[pycalcRecordINPJ]->offset = (unsigned short)((char *)&prec->inpj - (char *)prec);
    prt->papFldDes[pycalcRecordA]->offset = (unsigned short)((char *)&prec->a - (char *)prec);
    prt->papFldDes[pycalcRecordB]->offset = (unsigned short)((char *)&prec->b - (char *)prec);
    prt->papFldDes[pycalcRecordC]->offset = (unsigned short)((char *)&prec->c - (char *)prec);
    prt->papFldDes[pycalcRecordD]->offset = (unsigned short)((char *)&prec->d - (char *)prec);
    prt->papFldDes[pycalcRecordE]->offset = (unsigned short)((char *)&prec->e - (char *)prec);
    prt->papFldDes[pycalcRecordF]->offset = (unsigned short)((char *)&prec->f - (char *)prec);
    prt->papFldDes[pycalcRecordG]->offset = (unsigned short)((char *)&prec->g - (char *)prec);
    prt->papFldDes[pycalcRecordH]->offset = (unsigned short)((char *)&prec->h - (char *)prec);
    prt->papFldDes[pycalcRecordI]->offset = (unsigned short)((char *)&prec->i - (char *)prec);
    prt->papFldDes[pycalcRecordJ]->offset = (unsigned short)((char *)&prec->j - (char *)prec);
    prt->papFldDes[pycalcRecordFTA]->offset = (unsigned short)((char *)&prec->fta - (char *)prec);
    prt->papFldDes[pycalcRecordFTB]->offset = (unsigned short)((char *)&prec->ftb - (char *)prec);
    prt->papFldDes[pycalcRecordFTC]->offset = (unsigned short)((char *)&prec->ftc - (char *)prec);
    prt->papFldDes[pycalcRecordFTD]->offset = (unsigned short)((char *)&prec->ftd - (char *)prec);
    prt->papFldDes[pycalcRecordFTE]->offset = (unsigned short)((char *)&prec->fte - (char *)prec);
    prt->papFldDes[pycalcRecordFTF]->offset = (unsigned short)((char *)&prec->ftf - (char *)prec);
    prt->papFldDes[pycalcRecordFTG]->offset = (unsigned short)((char *)&prec->ftg - (char *)prec);
    prt->papFldDes[pycalcRecordFTH]->offset = (unsigned short)((char *)&prec->fth - (char *)prec);
    prt->papFldDes[pycalcRecordFTI]->offset = (unsigned short)((char *)&prec->fti - (char *)prec);
    prt->papFldDes[pycalcRecordFTJ]->offset = (unsigned short)((char *)&prec->ftj - (char *)prec);
    prt->papFldDes[pycalcRecordSIZA]->offset = (unsigned short)((char *)&prec->siza - (char *)prec);
    prt->papFldDes[pycalcRecordSIZB]->offset = (unsigned short)((char *)&prec->sizb - (char *)prec);
    prt->papFldDes[pycalcRecordSIZC]->offset = (unsigned short)((char *)&prec->sizc - (char *)prec);
    prt->papFldDes[pycalcRecordSIZD]->offset = (unsigned short)((char *)&prec->sizd - (char *)prec);
    prt->papFldDes[pycalcRecordSIZE]->offset = (unsigned short)((char *)&prec->size - (char *)prec);
    prt->papFldDes[pycalcRecordSIZF]->offset = (unsigned short)((char *)&prec->sizf - (char *)prec);
    prt->papFldDes[pycalcRecordSIZG]->offset = (unsigned short)((char *)&prec->sizg - (char *)prec);
    prt->papFldDes[pycalcRecordSIZH]->offset = (unsigned short)((char *)&prec->sizh - (char *)prec);
    prt->papFldDes[pycalcRecordSIZI]->offset = (unsigned short)((char *)&prec->sizi - (char *)prec);
    prt->papFldDes[pycalcRecordSIZJ]->offset = (unsigned short)((char *)&prec->sizj - (char *)prec);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(pycalcRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_pycalcRecord_H */
