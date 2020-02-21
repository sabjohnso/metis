/*
 * defs.h
 *
 * This file contains various constant definitions
 *
 * Started 8/9/02
 * George
 *
 */

#define CMD_PTYPE               1
#define CMD_OTYPE               2
#define CMD_CTYPE               5
#define CMD_ITYPE               6
#define CMD_RTYPE               7

#define CMD_BALANCE             10
#define CMD_CONTIG              11
#define CMD_MINCONN             12
#define CMD_MINVOL              13

#define CMD_NITER               20
#define CMD_NTRIALS             21
#define CMD_NSEPS               22

#define CMD_TPWGTS              30
#define CMD_SDIFF               31

#define CMD_DEGREE              40
#define CMD_COMPRESS            41

#define CMD_SEED                50

#define CMD_OUTPUT              100
#define CMD_NOOUTPUT            101

#define CMD_DBGLVL              1000
#define CMD_HELP                1001




/* The text labels for PTypes */
extern char ptypenames[][15];

/* The text labels for ObjTypes */
extern char objtypenames[][15];

/* The text labels for CTypes */
extern char ctypenames[][15];

/* The text labels for RTypes */
extern char rtypenames[][15];

/* The text labels for ITypes */
extern char iptypenames[][15];

/* The text labels for GTypes */
extern char gtypenames[][15];
