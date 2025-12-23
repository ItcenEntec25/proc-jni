
/* Result Sets Interface */
#ifndef SQL_CRSR
#  define SQL_CRSR
  struct sql_cursor
  {
    unsigned int curocn;
    void *ptr1;
    void *ptr2;
    unsigned int magic;
  };
  typedef struct sql_cursor sql_cursor;
  typedef struct sql_cursor SQL_CURSOR;
#endif /* SQL_CRSR */

/* Thread Safety */
typedef void * sql_context;
typedef void * SQL_CONTEXT;

/* Object support */
struct sqltvn
{
  unsigned char *tvnvsn; 
  unsigned short tvnvsnl; 
  unsigned char *tvnnm;
  unsigned short tvnnml; 
  unsigned char *tvnsnm;
  unsigned short tvnsnml;
};
typedef struct sqltvn sqltvn;

struct sqladts
{
  unsigned int adtvsn; 
  unsigned short adtmode; 
  unsigned short adtnum;  
  sqltvn adttvn[1];       
};
typedef struct sqladts sqladts;

static struct sqladts sqladt = {
  1,1,0,
};

/* Binding to PL/SQL Records */
struct sqltdss
{
  unsigned int tdsvsn; 
  unsigned short tdsnum; 
  unsigned char *tdsval[1]; 
};
typedef struct sqltdss sqltdss;
static struct sqltdss sqltds =
{
  1,
  0,
};

/* File name & Package Name */
struct sqlcxp
{
  unsigned short fillen;
           char  filnam[9];
};
static const struct sqlcxp sqlfpn =
{
    8,
    "pc/t3.pc"
};


static unsigned int sqlctx = 18195;


static struct sqlexd {
   unsigned int   sqlvsn;
   unsigned int   arrsiz;
   unsigned int   iters;
   unsigned int   offset;
   unsigned short selerr;
   unsigned short sqlety;
   unsigned int   occurs;
      const short *cud;
   unsigned char  *sqlest;
      const char  *stmt;
   sqladts *sqladtp;
   sqltdss *sqltdsp;
            void  **sqphsv;
   unsigned int   *sqphsl;
            int   *sqphss;
            void  **sqpind;
            int   *sqpins;
   unsigned int   *sqparm;
   unsigned int   **sqparc;
   unsigned short  *sqpadto;
   unsigned short  *sqptdso;
   unsigned int   sqlcmax;
   unsigned int   sqlcmin;
   unsigned int   sqlcincr;
   unsigned int   sqlctimeout;
   unsigned int   sqlcnowait;
              int   sqfoff;
   unsigned int   sqcmod;
   unsigned int   sqfmod;
   unsigned int   sqlpfmem;
            void  *sqhstv[4];
   unsigned int   sqhstl[4];
            int   sqhsts[4];
            void  *sqindv[4];
            int   sqinds[4];
   unsigned int   sqharm[4];
   unsigned int   *sqharc[4];
   unsigned short  sqadto[4];
   unsigned short  sqtdso[4];
} sqlstm = {13,4};

/* SQLLIB Prototypes */
extern void sqlcxt (void **, unsigned int *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlcx2t(void **, unsigned int *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlbuft(void **, char *);
extern void sqlgs2t(void **, char *);
extern void sqlorat(void **, unsigned int *, void *);

/* Forms Interface */
static const int IAPSUCC = 0;
static const int IAPFAIL = 1403;
static const int IAPFTL  = 535;
extern void sqliem(unsigned char *, signed int *);

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{13,4130,1,0,0,
5,0,0,1,210,0,3,76,0,0,0,0,0,1,0,
20,0,0,2,0,0,32,160,0,0,0,0,0,1,0,
35,0,0,0,0,0,27,183,0,0,4,4,0,1,0,1,97,0,0,1,10,0,0,1,10,0,0,1,10,0,0,
66,0,0,4,202,0,4,185,0,0,3,0,0,1,0,2,97,0,0,2,97,0,0,2,97,0,0,
93,0,0,5,0,0,30,217,0,0,0,0,0,1,0,
};


#include <stdio.h>
#include <stdlib.h>

#include <string.h>

//#ifdef __CDT_PARSER__
//#include <sqlca.h>
extern struct sqlca sqlca;
//#endif

//EXEC SQL INCLUDE sqlca;

//int t_insert(void);
//
//int t_select(void);

//int main(void) {
//
//	puts("!!!Hello World!!! SWAT-");
//
//	EXEC SQL CONNECT: "com/com01@192.168.212.150:1521/ORCLPDB1";
//
////	if (sqlca.sqlcode != 0) {
////		fprintf(stderr, "Error: ORA-%d %.*s\n", sqlca.sqlcode,
////				(int) sqlca.sqlerrm.sqlerrml, sqlca.sqlerrm.sqlerrmc);
////		return 1;
////	}
//
//	printf("Connected successfully!\n");
//
////	int result = t_insert();
////	printf("result=%d\n", result);
//
//	int result = t_select();
//	printf("result=%d\n", result);
//
//	EXEC SQL COMMIT WORK RELEASE;
//
//	return EXIT_SUCCESS;
//}

int t3_insert() {

//	printf("CODE_ID=%s\n", com_tc_cmmn_detail_code_vo->CODE_ID);
//	printf("CODE=%s\n", com_tc_cmmn_detail_code_vo->CODE);
//	printf("CODE_NM=%s\n", com_tc_cmmn_detail_code_vo->CODE_NM);
//	printf("CODE_DC=%s\n", com_tc_cmmn_detail_code_vo->CODE_DC);
//	printf("USE_AT=%s\n", com_tc_cmmn_detail_code_vo->USE_AT);
//	printf("FRST_REGISTER_ID=%s\n",
//			com_tc_cmmn_detail_code_vo->FRST_REGISTER_ID);
//	printf("LAST_UPDUSR_ID=%s\n", com_tc_cmmn_detail_code_vo->LAST_UPDUSR_ID);

	/* EXEC SQL BEGIN DECLARE SECTION; */ 


	char uid[50];

	char input_code_id[7];
	char input_code[16];
	char input_code_nm[61];
	char input_code_dc[201];
	char input_use_at[2];
	char input_frst_register_id[21];
	char input_last_updusr_id[21];

	char full_errmsg[512];

	/* EXEC SQL END DECLARE SECTION; */ 


//	strcpy(uid, com_tc_cmmn_detail_code_vo->CODE_ID);

	/*
	 printf("CODE_ID=%s\n", com_tc_cmmn_detail_code_vo->CODE_ID);
	 printf("CODE_ID=%s\n", uid);
	 */

	/* EXEC SQL

	INSERT INTO COMTCCMMNDETAILCODE
	(
			CODE_ID
			, CODE
			, CODE_NM
			, CODE_DC
			, USE_AT
			, FRST_REGIST_PNTTM
			, FRST_REGISTER_ID
			, LAST_UPDT_PNTTM
			, LAST_UPDUSR_ID
	)
//VALUES(
//:com_tc_cmmn_detail_code_vo->CODE_ID
//, :com_tc_cmmn_detail_code_vo->CODE
//, :com_tc_cmmn_detail_code_vo->CODE_NM
//, :com_tc_cmmn_detail_code_vo->CODE_DC
//, :com_tc_cmmn_detail_code_vo->USE_AT
//, SYSDATE
//, :com_tc_cmmn_detail_code_vo->FRST_REGISTER_ID
//, SYSDATE
//, :com_tc_cmmn_detail_code_vo->LAST_UPDUSR_ID
//VALUES(
//:input_code_id
//, :input_code
//, :input_code_nm
//, :input_code_dc
//, :input_use_at
//, 'Y'
//, SYSDATE
//, :input_frst_register_id
//, SYSDATE
//, :input_last_updusr_id
	VALUES(
			'COM001'
//			:com_tc_cmmn_detail_code_vo->CODE_ID
//:input_code_id

			, 'TEST02'
//			, :com_tc_cmmn_detail_code_vo->CODE

			, 'test'
//			, :com_tc_cmmn_detail_code_vo->CODE_NM

			, 'test'
//			, :com_tc_cmmn_detail_code_vo->CODE_DC

			, 'Y'
//			, :com_tc_cmmn_detail_code_vo->USE_AT

			, SYSDATE

			, 'TEST'
//			, :com_tc_cmmn_detail_code_vo->FRST_REGISTER_ID

			, SYSDATE

			, 'TEST'
//			, :com_tc_cmmn_detail_code_vo->LAST_UPDUSR_ID

	); */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 0;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "insert into COMTCCMMNDETAILCODE (CODE_ID,CODE,CODE_NM,CODE_D\
C,USE_AT,FRST_REGIST_PNTTM,FRST_REGISTER_ID,LAST_UPDT_PNTTM,LAST_UPDUSR_ID) va\
lues ('COM001','TEST02','test','test','Y',SYSDATE,'TEST',SYSDATE,'TEST')";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )5;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



	/*
	 printf("test 이백행 2025-12-16 Employee Name: %s\n", uid);
	 printf("test 이백행 2025-12-16 Employee Name: %d\n", sqlca.sqlcode);
	 */

//	if (sqlca.sqlcode != 0) {
//		printf("SQL ERROR: %ld\n", sqlca.sqlcode);
//		printf("SQLERRM: %.700s\n", sqlca.sqlerrm.sqlerrmc);
//	}
	/*
	 printf("CODE_ID=[%s], len=%zu\n", com_tc_cmmn_detail_code_vo->CODE_ID, strlen(com_tc_cmmn_detail_code_vo->CODE_ID));
	 printf("CODE=[%s], len=%zu\n", com_tc_cmmn_detail_code_vo->CODE, strlen(com_tc_cmmn_detail_code_vo->CODE));
	 printf("CODE_NM=[%s], len=%zu\n", com_tc_cmmn_detail_code_vo->CODE_NM, strlen(com_tc_cmmn_detail_code_vo->CODE_NM));
	 printf("CODE_DC=[%s], len=%zu\n", com_tc_cmmn_detail_code_vo->CODE_DC, strlen(com_tc_cmmn_detail_code_vo->CODE_DC));
	 printf("USE_AT=[%s], len=%zu\n", com_tc_cmmn_detail_code_vo->USE_AT, strlen(com_tc_cmmn_detail_code_vo->USE_AT));
	 printf("FRST_REGISTER_ID=[%s], len=%zu\n", com_tc_cmmn_detail_code_vo->FRST_REGISTER_ID, strlen(com_tc_cmmn_detail_code_vo->FRST_REGISTER_ID));
	 printf("LAST_UPDUSR_ID=[%s], len=%zu\n", com_tc_cmmn_detail_code_vo->LAST_UPDUSR_ID, strlen(com_tc_cmmn_detail_code_vo->LAST_UPDUSR_ID));
	 */

//	EXEC SQL COMMIT WORK RELEASE;
	/* EXEC SQL ROLLBACK WORK RELEASE; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 0;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )20;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


//    EXEC SQL COMMIT;

//	return sqlca.sqlcode;
	return 0;
}

int t3_select(void) {

	puts("t3_select");

	/* EXEC SQL BEGIN DECLARE SECTION; */ 


	char CODE_ID[7];
	char CODE[16];
	char CODE_NM[61];
	char CODE_DC[201];
	char USE_AT[2];
	char FRST_REGISTER_ID[21];
	char LAST_UPDUSR_ID[21];

	/* EXEC SQL END DECLARE SECTION; */ 


	/* EXEC SQL CONNECT: "com/com01@192.168.212.150:1521/ORCLPDB1"; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )10;
 sqlstm.offset = (unsigned int  )35;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)"com/com01@192.168.212.150:1521/ORCLPDB1";
 sqlstm.sqhstl[0] = (unsigned int  )0;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlstm.sqlcmax = (unsigned int )100;
 sqlstm.sqlcmin = (unsigned int )2;
 sqlstm.sqlcincr = (unsigned int )1;
 sqlstm.sqlctimeout = (unsigned int )0;
 sqlstm.sqlcnowait = (unsigned int )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



	/* EXEC SQL

	SELECT
	CODE_ID
	, CODE
	, CODE_NM

	, CODE_DC, USE_AT, FRST_REGIST_PNTTM,
	FRST_REGISTER_ID, LAST_UPDT_PNTTM, LAST_UPDUSR_ID

	INTO
	:CODE_ID
	, :CODE
	, :CODE_NM

	FROM COMTCCMMNDETAILCODE
	WHERE CODE_ID = 'COM001'
//	AND CODE = 'REGC01'
//	AND CODE = 'REGC02'
	AND CODE = 'REGC03'
//	AND CODE = 'REGC04'
//	AND CODE = 'REGC05'
//	AND CODE = 'REGC06'
//	AND CODE = 'REGC07'
//
//	AND CODE = 'REGC08'
	; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "select CODE_ID ,CODE ,CODE_NM ,CODE_DC ,USE_AT ,FRST_REGIST_\
PNTTM ,FRST_REGISTER_ID ,LAST_UPDT_PNTTM ,LAST_UPDUSR_ID into :b0,:b1,:b2  fro\
m COMTCCMMNDETAILCODE where (CODE_ID='COM001' and CODE='REGC03')";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )66;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.sqlpfmem = (unsigned int  )0;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (         void  *)CODE_ID;
 sqlstm.sqhstl[0] = (unsigned int  )7;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         void  *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned int  )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqhstv[1] = (         void  *)CODE;
 sqlstm.sqhstl[1] = (unsigned int  )16;
 sqlstm.sqhsts[1] = (         int  )0;
 sqlstm.sqindv[1] = (         void  *)0;
 sqlstm.sqinds[1] = (         int  )0;
 sqlstm.sqharm[1] = (unsigned int  )0;
 sqlstm.sqadto[1] = (unsigned short )0;
 sqlstm.sqtdso[1] = (unsigned short )0;
 sqlstm.sqhstv[2] = (         void  *)CODE_NM;
 sqlstm.sqhstl[2] = (unsigned int  )61;
 sqlstm.sqhsts[2] = (         int  )0;
 sqlstm.sqindv[2] = (         void  *)0;
 sqlstm.sqinds[2] = (         int  )0;
 sqlstm.sqharm[2] = (unsigned int  )0;
 sqlstm.sqadto[2] = (unsigned short )0;
 sqlstm.sqtdso[2] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



	printf("CODE_ID=%s\n", CODE_ID);
	printf("CODE=%s\n", CODE);
	printf("CODE_NM=%s\n", CODE_NM);

	/* EXEC SQL COMMIT WORK RELEASE; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )93;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



	return EXIT_FAILURE;
}
