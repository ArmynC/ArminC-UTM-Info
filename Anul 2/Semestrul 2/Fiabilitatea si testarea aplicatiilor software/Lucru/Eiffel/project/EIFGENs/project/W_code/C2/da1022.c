/*
 * Code for class DATE_TIME_CODE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1022_8020(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1022_8021(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1022_8022(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1022_8023(EIF_REFERENCE);
extern void F1022_8024(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1022_8025(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1022_8026(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1022_8027(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1022_8028(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1022_8029(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1022_8030(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1022_8031(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1022_8032(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1022_8033(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1022_8034(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1022_8035(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1022_8036(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1022_8037(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1022_8038(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1022_8039(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1022_8040(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1022_8041(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1022_8042(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1022_8043(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1022_8044(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1022_8045(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1022_8046(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1022_8047(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1022_8048(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1022_8049(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1022_8050(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1022_8051(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1022_8052(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1022_8053(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1022_8054(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1022_8055(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1022_8056(EIF_REFERENCE);
extern void EIF_Minit1022(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {DATE_TIME_CODE}.make */
void F1022_8020 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1021, Current, 0, 1, 13949);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1021, Current, 13949);
	RTCC(arg1, 1021, l_feature_name, 1, eif_new_type(234, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("v_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("v_is_code", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5321, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5710, dtype))(Current, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("value_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5711, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4759, "same_string", tr1))(tr1, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {DATE_TIME_CODE}.is_separator_code */
EIF_TYPED_VALUE F1022_8021 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_separator_code";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1021, Current, 0, 0, 13950);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1021, Current, 13950);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5717, dtype));
	switch (ti4_1) {
		case 18L:
		case 19L:
		case 20L:
		case 21L:
		case 22L:
		case 23L:
			RTHOOK(2);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {DATE_TIME_CODE}.is_text */
EIF_TYPED_VALUE F1022_8022 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5708,Dtype(Current)));
	return r;
}


/* {DATE_TIME_CODE}.is_numeric */
EIF_TYPED_VALUE F1022_8023 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5709,Dtype(Current)));
	return r;
}


/* {DATE_TIME_CODE}.set_value */
void F1022_8024 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_value";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLR(5,tr2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1021, Current, 1, 1, 13916);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1021, Current, 13916);
	RTCC(arg1, 1021, l_feature_name, 1, eif_new_type(234, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("v_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("v_is_code", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5321, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 5711, 0xF80000EA, 0); /* value */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5711, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5711, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5322, dtype))(Current, ur1x)).it_b);
	if (tb1) {
		RTHOOK(5);
		RTDBGAA(Current, dtype, 5712, 0x10000000, 1); /* count_max */
		*(EIF_INTEGER_32 *)(Current + RTWA(5712, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		RTHOOK(6);
		RTDBGAA(Current, dtype, 5713, 0x10000000, 1); /* count_min */
		*(EIF_INTEGER_32 *)(Current + RTWA(5713, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		RTHOOK(7);
		RTDBGAL(1, 0xF80000EC, 0, 0); /* loc1 */
		tr1 = RTMS_EX_H("day-numeric",11,781450083);
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(8);
		RTDBGAA(Current, dtype, 5715, 0x10000000, 1); /* value_max */
		*(EIF_INTEGER_32 *)(Current + RTWA(5715, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 31L);
		RTHOOK(9);
		RTDBGAA(Current, dtype, 5716, 0x10000000, 1); /* value_min */
		*(EIF_INTEGER_32 *)(Current + RTWA(5716, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		RTHOOK(10);
		RTDBGAA(Current, dtype, 5708, 0x04000000, 1); /* is_text */
		*(EIF_BOOLEAN *)(Current + RTWA(5708, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		RTHOOK(11);
		RTDBGAA(Current, dtype, 5709, 0x04000000, 1); /* is_numeric */
		*(EIF_BOOLEAN *)(Current + RTWA(5709, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(12);
		RTDBGAA(Current, dtype, 5717, 0x10000000, 1); /* type */
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5718, dtype))(Current)).it_n1);
		ti4_1 = (EIF_INTEGER_32) tu1_1;
		*(EIF_INTEGER_32 *)(Current + RTWA(5717, dtype)) = (EIF_INTEGER_32) ti4_1;
	} else {
		RTHOOK(13);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5711, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5323, dtype))(Current, ur1x)).it_b);
		if (tb1) {
			RTHOOK(14);
			RTDBGAA(Current, dtype, 5712, 0x10000000, 1); /* count_max */
			*(EIF_INTEGER_32 *)(Current + RTWA(5712, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
			RTHOOK(15);
			RTDBGAA(Current, dtype, 5713, 0x10000000, 1); /* count_min */
			*(EIF_INTEGER_32 *)(Current + RTWA(5713, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
			RTHOOK(16);
			RTDBGAL(1, 0xF80000EC, 0, 0); /* loc1 */
			tr1 = RTMS_EX_H("day-numeric-on-2-digits",23,1405532275);
			loc1 = (EIF_REFERENCE) tr1;
			RTHOOK(17);
			RTDBGAA(Current, dtype, 5715, 0x10000000, 1); /* value_max */
			*(EIF_INTEGER_32 *)(Current + RTWA(5715, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 31L);
			RTHOOK(18);
			RTDBGAA(Current, dtype, 5716, 0x10000000, 1); /* value_min */
			*(EIF_INTEGER_32 *)(Current + RTWA(5716, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			RTHOOK(19);
			RTDBGAA(Current, dtype, 5708, 0x04000000, 1); /* is_text */
			*(EIF_BOOLEAN *)(Current + RTWA(5708, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(20);
			RTDBGAA(Current, dtype, 5709, 0x04000000, 1); /* is_numeric */
			*(EIF_BOOLEAN *)(Current + RTWA(5709, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(21);
			RTDBGAA(Current, dtype, 5717, 0x10000000, 1); /* type */
			tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5719, dtype))(Current)).it_n1);
			ti4_1 = (EIF_INTEGER_32) tu1_1;
			*(EIF_INTEGER_32 *)(Current + RTWA(5717, dtype)) = (EIF_INTEGER_32) ti4_1;
		} else {
			RTHOOK(22);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5711, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5324, dtype))(Current, ur1x)).it_b);
			if (tb1) {
				RTHOOK(23);
				RTDBGAA(Current, dtype, 5712, 0x10000000, 1); /* count_max */
				*(EIF_INTEGER_32 *)(Current + RTWA(5712, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
				RTHOOK(24);
				RTDBGAA(Current, dtype, 5713, 0x10000000, 1); /* count_min */
				*(EIF_INTEGER_32 *)(Current + RTWA(5713, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
				RTHOOK(25);
				RTDBGAL(1, 0xF80000EC, 0, 0); /* loc1 */
				tr1 = RTMS_EX_H("day-text",8,1643751284);
				loc1 = (EIF_REFERENCE) tr1;
				RTHOOK(26);
				RTDBGAA(Current, dtype, 5715, 0x10000000, 1); /* value_max */
				*(EIF_INTEGER_32 *)(Current + RTWA(5715, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
				RTHOOK(27);
				RTDBGAA(Current, dtype, 5716, 0x10000000, 1); /* value_min */
				*(EIF_INTEGER_32 *)(Current + RTWA(5716, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				RTHOOK(28);
				RTDBGAA(Current, dtype, 5708, 0x04000000, 1); /* is_text */
				*(EIF_BOOLEAN *)(Current + RTWA(5708, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				RTHOOK(29);
				RTDBGAA(Current, dtype, 5709, 0x04000000, 1); /* is_numeric */
				*(EIF_BOOLEAN *)(Current + RTWA(5709, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				RTHOOK(30);
				RTDBGAA(Current, dtype, 5717, 0x10000000, 1); /* type */
				tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5720, dtype))(Current)).it_n1);
				ti4_1 = (EIF_INTEGER_32) tu1_1;
				*(EIF_INTEGER_32 *)(Current + RTWA(5717, dtype)) = (EIF_INTEGER_32) ti4_1;
			} else {
				RTHOOK(31);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5711, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr1);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5325, dtype))(Current, ur1x)).it_b);
				if (tb1) {
					RTHOOK(32);
					RTDBGAA(Current, dtype, 5712, 0x10000000, 1); /* count_max */
					*(EIF_INTEGER_32 *)(Current + RTWA(5712, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
					RTHOOK(33);
					RTDBGAA(Current, dtype, 5713, 0x10000000, 1); /* count_min */
					*(EIF_INTEGER_32 *)(Current + RTWA(5713, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
					RTHOOK(34);
					RTDBGAL(1, 0xF80000EC, 0, 0); /* loc1 */
					tr1 = RTMS_EX_H("year-on-4-digits",16,2124624499);
					loc1 = (EIF_REFERENCE) tr1;
					RTHOOK(35);
					RTDBGAA(Current, dtype, 5708, 0x04000000, 1); /* is_text */
					*(EIF_BOOLEAN *)(Current + RTWA(5708, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					RTHOOK(36);
					RTDBGAA(Current, dtype, 5709, 0x04000000, 1); /* is_numeric */
					*(EIF_BOOLEAN *)(Current + RTWA(5709, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					RTHOOK(37);
					RTDBGAA(Current, dtype, 5717, 0x10000000, 1); /* type */
					tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5721, dtype))(Current)).it_n1);
					ti4_1 = (EIF_INTEGER_32) tu1_1;
					*(EIF_INTEGER_32 *)(Current + RTWA(5717, dtype)) = (EIF_INTEGER_32) ti4_1;
					RTHOOK(38);
					RTDBGAA(Current, dtype, 5715, 0x10000000, 1); /* value_max */
					*(EIF_INTEGER_32 *)(Current + RTWA(5715, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
					RTHOOK(39);
					RTDBGAA(Current, dtype, 5716, 0x10000000, 1); /* value_min */
					*(EIF_INTEGER_32 *)(Current + RTWA(5716, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
				} else {
					RTHOOK(40);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5711, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur1 = RTCCL(tr1);
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5326, dtype))(Current, ur1x)).it_b);
					if (tb1) {
						RTHOOK(41);
						RTDBGAA(Current, dtype, 5712, 0x10000000, 1); /* count_max */
						*(EIF_INTEGER_32 *)(Current + RTWA(5712, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
						RTHOOK(42);
						RTDBGAA(Current, dtype, 5713, 0x10000000, 1); /* count_min */
						*(EIF_INTEGER_32 *)(Current + RTWA(5713, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
						RTHOOK(43);
						RTDBGAL(1, 0xF80000EC, 0, 0); /* loc1 */
						tr1 = RTMS_EX_H("year-on-2-digits",16,2124163699);
						loc1 = (EIF_REFERENCE) tr1;
						RTHOOK(44);
						RTDBGAA(Current, dtype, 5708, 0x04000000, 1); /* is_text */
						*(EIF_BOOLEAN *)(Current + RTWA(5708, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						RTHOOK(45);
						RTDBGAA(Current, dtype, 5709, 0x04000000, 1); /* is_numeric */
						*(EIF_BOOLEAN *)(Current + RTWA(5709, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						RTHOOK(46);
						RTDBGAA(Current, dtype, 5717, 0x10000000, 1); /* type */
						tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5722, dtype))(Current)).it_n1);
						ti4_1 = (EIF_INTEGER_32) tu1_1;
						*(EIF_INTEGER_32 *)(Current + RTWA(5717, dtype)) = (EIF_INTEGER_32) ti4_1;
						RTHOOK(47);
						RTDBGAA(Current, dtype, 5715, 0x10000000, 1); /* value_max */
						*(EIF_INTEGER_32 *)(Current + RTWA(5715, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
						RTHOOK(48);
						RTDBGAA(Current, dtype, 5716, 0x10000000, 1); /* value_min */
						*(EIF_INTEGER_32 *)(Current + RTWA(5716, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
					} else {
						RTHOOK(49);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5711, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur1 = RTCCL(tr1);
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5327, dtype))(Current, ur1x)).it_b);
						if (tb1) {
							RTHOOK(50);
							RTDBGAA(Current, dtype, 5712, 0x10000000, 1); /* count_max */
							*(EIF_INTEGER_32 *)(Current + RTWA(5712, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
							RTHOOK(51);
							RTDBGAA(Current, dtype, 5713, 0x10000000, 1); /* count_min */
							*(EIF_INTEGER_32 *)(Current + RTWA(5713, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
							RTHOOK(52);
							RTDBGAL(1, 0xF80000EC, 0, 0); /* loc1 */
							tr1 = RTMS_EX_H("month-numeric",13,457640547);
							loc1 = (EIF_REFERENCE) tr1;
							RTHOOK(53);
							RTDBGAA(Current, dtype, 5715, 0x10000000, 1); /* value_max */
							*(EIF_INTEGER_32 *)(Current + RTWA(5715, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
							RTHOOK(54);
							RTDBGAA(Current, dtype, 5716, 0x10000000, 1); /* value_min */
							*(EIF_INTEGER_32 *)(Current + RTWA(5716, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
							RTHOOK(55);
							RTDBGAA(Current, dtype, 5708, 0x04000000, 1); /* is_text */
							*(EIF_BOOLEAN *)(Current + RTWA(5708, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
							RTHOOK(56);
							RTDBGAA(Current, dtype, 5709, 0x04000000, 1); /* is_numeric */
							*(EIF_BOOLEAN *)(Current + RTWA(5709, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							RTHOOK(57);
							RTDBGAA(Current, dtype, 5717, 0x10000000, 1); /* type */
							tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5723, dtype))(Current)).it_n1);
							ti4_1 = (EIF_INTEGER_32) tu1_1;
							*(EIF_INTEGER_32 *)(Current + RTWA(5717, dtype)) = (EIF_INTEGER_32) ti4_1;
						} else {
							RTHOOK(58);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5711, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							ur1 = RTCCL(tr1);
							tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5328, dtype))(Current, ur1x)).it_b);
							if (tb1) {
								RTHOOK(59);
								RTDBGAA(Current, dtype, 5712, 0x10000000, 1); /* count_max */
								*(EIF_INTEGER_32 *)(Current + RTWA(5712, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
								RTHOOK(60);
								RTDBGAA(Current, dtype, 5713, 0x10000000, 1); /* count_min */
								*(EIF_INTEGER_32 *)(Current + RTWA(5713, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
								RTHOOK(61);
								RTDBGAL(1, 0xF80000EC, 0, 0); /* loc1 */
								tr1 = RTMS_EX_H("month-numeric-on-2-digits",25,275202163);
								loc1 = (EIF_REFERENCE) tr1;
								RTHOOK(62);
								RTDBGAA(Current, dtype, 5715, 0x10000000, 1); /* value_max */
								*(EIF_INTEGER_32 *)(Current + RTWA(5715, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
								RTHOOK(63);
								RTDBGAA(Current, dtype, 5716, 0x10000000, 1); /* value_min */
								*(EIF_INTEGER_32 *)(Current + RTWA(5716, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
								RTHOOK(64);
								RTDBGAA(Current, dtype, 5708, 0x04000000, 1); /* is_text */
								*(EIF_BOOLEAN *)(Current + RTWA(5708, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
								RTHOOK(65);
								RTDBGAA(Current, dtype, 5709, 0x04000000, 1); /* is_numeric */
								*(EIF_BOOLEAN *)(Current + RTWA(5709, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
								RTHOOK(66);
								RTDBGAA(Current, dtype, 5717, 0x10000000, 1); /* type */
								tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5724, dtype))(Current)).it_n1);
								ti4_1 = (EIF_INTEGER_32) tu1_1;
								*(EIF_INTEGER_32 *)(Current + RTWA(5717, dtype)) = (EIF_INTEGER_32) ti4_1;
							} else {
								RTHOOK(67);
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5711, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								ur1 = RTCCL(tr1);
								tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5329, dtype))(Current, ur1x)).it_b);
								if (tb1) {
									RTHOOK(68);
									RTDBGAA(Current, dtype, 5712, 0x10000000, 1); /* count_max */
									*(EIF_INTEGER_32 *)(Current + RTWA(5712, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
									RTHOOK(69);
									RTDBGAA(Current, dtype, 5713, 0x10000000, 1); /* count_min */
									*(EIF_INTEGER_32 *)(Current + RTWA(5713, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
									RTHOOK(70);
									RTDBGAL(1, 0xF80000EC, 0, 0); /* loc1 */
									tr1 = RTMS_EX_H("month-text",10,1418209652);
									loc1 = (EIF_REFERENCE) tr1;
									RTHOOK(71);
									RTDBGAA(Current, dtype, 5715, 0x10000000, 1); /* value_max */
									*(EIF_INTEGER_32 *)(Current + RTWA(5715, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
									RTHOOK(72);
									RTDBGAA(Current, dtype, 5716, 0x10000000, 1); /* value_min */
									*(EIF_INTEGER_32 *)(Current + RTWA(5716, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
									RTHOOK(73);
									RTDBGAA(Current, dtype, 5708, 0x04000000, 1); /* is_text */
									*(EIF_BOOLEAN *)(Current + RTWA(5708, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
									RTHOOK(74);
									RTDBGAA(Current, dtype, 5709, 0x04000000, 1); /* is_numeric */
									*(EIF_BOOLEAN *)(Current + RTWA(5709, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
									RTHOOK(75);
									RTDBGAA(Current, dtype, 5717, 0x10000000, 1); /* type */
									tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5725, dtype))(Current)).it_n1);
									ti4_1 = (EIF_INTEGER_32) tu1_1;
									*(EIF_INTEGER_32 *)(Current + RTWA(5717, dtype)) = (EIF_INTEGER_32) ti4_1;
								} else {
									RTHOOK(76);
									tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5711, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									ur1 = RTCCL(tr1);
									tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5330, dtype))(Current, ur1x)).it_b);
									if (tb1) {
										RTHOOK(77);
										RTDBGAA(Current, dtype, 5712, 0x10000000, 1); /* count_max */
										*(EIF_INTEGER_32 *)(Current + RTWA(5712, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
										RTHOOK(78);
										RTDBGAA(Current, dtype, 5713, 0x10000000, 1); /* count_min */
										*(EIF_INTEGER_32 *)(Current + RTWA(5713, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
										RTHOOK(79);
										RTDBGAL(1, 0xF80000EC, 0, 0); /* loc1 */
										tr1 = RTMS_EX_H("hour-numeric",12,1129144675);
										loc1 = (EIF_REFERENCE) tr1;
										RTHOOK(80);
										RTDBGAA(Current, dtype, 5715, 0x10000000, 1); /* value_max */
										*(EIF_INTEGER_32 *)(Current + RTWA(5715, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 24L);
										RTHOOK(81);
										RTDBGAA(Current, dtype, 5716, 0x10000000, 1); /* value_min */
										*(EIF_INTEGER_32 *)(Current + RTWA(5716, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
										RTHOOK(82);
										RTDBGAA(Current, dtype, 5708, 0x04000000, 1); /* is_text */
										*(EIF_BOOLEAN *)(Current + RTWA(5708, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
										RTHOOK(83);
										RTDBGAA(Current, dtype, 5709, 0x04000000, 1); /* is_numeric */
										*(EIF_BOOLEAN *)(Current + RTWA(5709, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
										RTHOOK(84);
										RTDBGAA(Current, dtype, 5717, 0x10000000, 1); /* type */
										tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5726, dtype))(Current)).it_n1);
										ti4_1 = (EIF_INTEGER_32) tu1_1;
										*(EIF_INTEGER_32 *)(Current + RTWA(5717, dtype)) = (EIF_INTEGER_32) ti4_1;
									} else {
										RTHOOK(85);
										tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5711, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										ur1 = RTCCL(tr1);
										tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5331, dtype))(Current, ur1x)).it_b);
										if (tb1) {
											RTHOOK(86);
											RTDBGAA(Current, dtype, 5712, 0x10000000, 1); /* count_max */
											*(EIF_INTEGER_32 *)(Current + RTWA(5712, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
											RTHOOK(87);
											RTDBGAA(Current, dtype, 5713, 0x10000000, 1); /* count_min */
											*(EIF_INTEGER_32 *)(Current + RTWA(5713, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
											RTHOOK(88);
											RTDBGAL(1, 0xF80000EC, 0, 0); /* loc1 */
											tr1 = RTMS_EX_H("hour-numeric-on-2-digits",24,638152307);
											loc1 = (EIF_REFERENCE) tr1;
											RTHOOK(89);
											RTDBGAA(Current, dtype, 5715, 0x10000000, 1); /* value_max */
											*(EIF_INTEGER_32 *)(Current + RTWA(5715, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 24L);
											RTHOOK(90);
											RTDBGAA(Current, dtype, 5716, 0x10000000, 1); /* value_min */
											*(EIF_INTEGER_32 *)(Current + RTWA(5716, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
											RTHOOK(91);
											RTDBGAA(Current, dtype, 5708, 0x04000000, 1); /* is_text */
											*(EIF_BOOLEAN *)(Current + RTWA(5708, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
											RTHOOK(92);
											RTDBGAA(Current, dtype, 5709, 0x04000000, 1); /* is_numeric */
											*(EIF_BOOLEAN *)(Current + RTWA(5709, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
											RTHOOK(93);
											RTDBGAA(Current, dtype, 5717, 0x10000000, 1); /* type */
											tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5727, dtype))(Current)).it_n1);
											ti4_1 = (EIF_INTEGER_32) tu1_1;
											*(EIF_INTEGER_32 *)(Current + RTWA(5717, dtype)) = (EIF_INTEGER_32) ti4_1;
										} else {
											RTHOOK(94);
											tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5711, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											ur1 = RTCCL(tr1);
											tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5332, dtype))(Current, ur1x)).it_b);
											if (tb1) {
												RTHOOK(95);
												RTDBGAA(Current, dtype, 5712, 0x10000000, 1); /* count_max */
												*(EIF_INTEGER_32 *)(Current + RTWA(5712, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
												RTHOOK(96);
												RTDBGAA(Current, dtype, 5713, 0x10000000, 1); /* count_min */
												*(EIF_INTEGER_32 *)(Current + RTWA(5713, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
												RTHOOK(97);
												RTDBGAL(1, 0xF80000EC, 0, 0); /* loc1 */
												tr1 = RTMS_EX_H("hour-12-clock-scale",19,1508112997);
												loc1 = (EIF_REFERENCE) tr1;
												RTHOOK(98);
												RTDBGAA(Current, dtype, 5715, 0x10000000, 1); /* value_max */
												*(EIF_INTEGER_32 *)(Current + RTWA(5715, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
												RTHOOK(99);
												RTDBGAA(Current, dtype, 5716, 0x10000000, 1); /* value_min */
												*(EIF_INTEGER_32 *)(Current + RTWA(5716, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
												RTHOOK(100);
												RTDBGAA(Current, dtype, 5708, 0x04000000, 1); /* is_text */
												*(EIF_BOOLEAN *)(Current + RTWA(5708, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
												RTHOOK(101);
												RTDBGAA(Current, dtype, 5709, 0x04000000, 1); /* is_numeric */
												*(EIF_BOOLEAN *)(Current + RTWA(5709, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
												RTHOOK(102);
												RTDBGAA(Current, dtype, 5717, 0x10000000, 1); /* type */
												tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5728, dtype))(Current)).it_n1);
												ti4_1 = (EIF_INTEGER_32) tu1_1;
												*(EIF_INTEGER_32 *)(Current + RTWA(5717, dtype)) = (EIF_INTEGER_32) ti4_1;
											} else {
												RTHOOK(103);
												tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5711, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
												ur1 = RTCCL(tr1);
												tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5334, dtype))(Current, ur1x)).it_b);
												if (tb1) {
													RTHOOK(104);
													RTDBGAA(Current, dtype, 5712, 0x10000000, 1); /* count_max */
													*(EIF_INTEGER_32 *)(Current + RTWA(5712, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
													RTHOOK(105);
													RTDBGAA(Current, dtype, 5713, 0x10000000, 1); /* count_min */
													*(EIF_INTEGER_32 *)(Current + RTWA(5713, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
													RTHOOK(106);
													RTDBGAL(1, 0xF80000EC, 0, 0); /* loc1 */
													tr1 = RTMS_EX_H("minute-numeric",14,220677219);
													loc1 = (EIF_REFERENCE) tr1;
													RTHOOK(107);
													RTDBGAA(Current, dtype, 5715, 0x10000000, 1); /* value_max */
													*(EIF_INTEGER_32 *)(Current + RTWA(5715, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 59L);
													RTHOOK(108);
													RTDBGAA(Current, dtype, 5716, 0x10000000, 1); /* value_min */
													*(EIF_INTEGER_32 *)(Current + RTWA(5716, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
													RTHOOK(109);
													RTDBGAA(Current, dtype, 5708, 0x04000000, 1); /* is_text */
													*(EIF_BOOLEAN *)(Current + RTWA(5708, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
													RTHOOK(110);
													RTDBGAA(Current, dtype, 5709, 0x04000000, 1); /* is_numeric */
													*(EIF_BOOLEAN *)(Current + RTWA(5709, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
													RTHOOK(111);
													RTDBGAA(Current, dtype, 5717, 0x10000000, 1); /* type */
													tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5730, dtype))(Current)).it_n1);
													ti4_1 = (EIF_INTEGER_32) tu1_1;
													*(EIF_INTEGER_32 *)(Current + RTWA(5717, dtype)) = (EIF_INTEGER_32) ti4_1;
												} else {
													RTHOOK(112);
													tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5711, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
													ur1 = RTCCL(tr1);
													tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5335, dtype))(Current, ur1x)).it_b);
													if (tb1) {
														RTHOOK(113);
														RTDBGAA(Current, dtype, 5712, 0x10000000, 1); /* count_max */
														*(EIF_INTEGER_32 *)(Current + RTWA(5712, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
														RTHOOK(114);
														RTDBGAA(Current, dtype, 5713, 0x10000000, 1); /* count_min */
														*(EIF_INTEGER_32 *)(Current + RTWA(5713, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
														RTHOOK(115);
														RTDBGAL(1, 0xF80000EC, 0, 0); /* loc1 */
														tr1 = RTMS_EX_H("minute-numeric-on-2-digits",26,1724761203);
														loc1 = (EIF_REFERENCE) tr1;
														RTHOOK(116);
														RTDBGAA(Current, dtype, 5715, 0x10000000, 1); /* value_max */
														*(EIF_INTEGER_32 *)(Current + RTWA(5715, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 59L);
														RTHOOK(117);
														RTDBGAA(Current, dtype, 5716, 0x10000000, 1); /* value_min */
														*(EIF_INTEGER_32 *)(Current + RTWA(5716, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
														RTHOOK(118);
														RTDBGAA(Current, dtype, 5708, 0x04000000, 1); /* is_text */
														*(EIF_BOOLEAN *)(Current + RTWA(5708, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
														RTHOOK(119);
														RTDBGAA(Current, dtype, 5709, 0x04000000, 1); /* is_numeric */
														*(EIF_BOOLEAN *)(Current + RTWA(5709, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
														RTHOOK(120);
														RTDBGAA(Current, dtype, 5717, 0x10000000, 1); /* type */
														tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5731, dtype))(Current)).it_n1);
														ti4_1 = (EIF_INTEGER_32) tu1_1;
														*(EIF_INTEGER_32 *)(Current + RTWA(5717, dtype)) = (EIF_INTEGER_32) ti4_1;
													} else {
														RTHOOK(121);
														tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5711, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
														ur1 = RTCCL(tr1);
														tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5336, dtype))(Current, ur1x)).it_b);
														if (tb1) {
															RTHOOK(122);
															RTDBGAA(Current, dtype, 5712, 0x10000000, 1); /* count_max */
															*(EIF_INTEGER_32 *)(Current + RTWA(5712, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
															RTHOOK(123);
															RTDBGAA(Current, dtype, 5713, 0x10000000, 1); /* count_min */
															*(EIF_INTEGER_32 *)(Current + RTWA(5713, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
															RTHOOK(124);
															RTDBGAL(1, 0xF80000EC, 0, 0); /* loc1 */
															tr1 = RTMS_EX_H("second-numeric",14,1358324579);
															loc1 = (EIF_REFERENCE) tr1;
															RTHOOK(125);
															RTDBGAA(Current, dtype, 5715, 0x10000000, 1); /* value_max */
															*(EIF_INTEGER_32 *)(Current + RTWA(5715, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 59L);
															RTHOOK(126);
															RTDBGAA(Current, dtype, 5716, 0x10000000, 1); /* value_min */
															*(EIF_INTEGER_32 *)(Current + RTWA(5716, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
															RTHOOK(127);
															RTDBGAA(Current, dtype, 5708, 0x04000000, 1); /* is_text */
															*(EIF_BOOLEAN *)(Current + RTWA(5708, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
															RTHOOK(128);
															RTDBGAA(Current, dtype, 5709, 0x04000000, 1); /* is_numeric */
															*(EIF_BOOLEAN *)(Current + RTWA(5709, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
															RTHOOK(129);
															RTDBGAA(Current, dtype, 5717, 0x10000000, 1); /* type */
															tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5732, dtype))(Current)).it_n1);
															ti4_1 = (EIF_INTEGER_32) tu1_1;
															*(EIF_INTEGER_32 *)(Current + RTWA(5717, dtype)) = (EIF_INTEGER_32) ti4_1;
														} else {
															RTHOOK(130);
															tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5711, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
															ur1 = RTCCL(tr1);
															tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5337, dtype))(Current, ur1x)).it_b);
															if (tb1) {
																RTHOOK(131);
																RTDBGAA(Current, dtype, 5712, 0x10000000, 1); /* count_max */
																*(EIF_INTEGER_32 *)(Current + RTWA(5712, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
																RTHOOK(132);
																RTDBGAA(Current, dtype, 5713, 0x10000000, 1); /* count_min */
																*(EIF_INTEGER_32 *)(Current + RTWA(5713, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
																RTHOOK(133);
																RTDBGAL(1, 0xF80000EC, 0, 0); /* loc1 */
																tr1 = RTMS_EX_H("second-numeric-on-2-digits",26,1763349363);
																loc1 = (EIF_REFERENCE) tr1;
																RTHOOK(134);
																RTDBGAA(Current, dtype, 5715, 0x10000000, 1); /* value_max */
																*(EIF_INTEGER_32 *)(Current + RTWA(5715, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 59L);
																RTHOOK(135);
																RTDBGAA(Current, dtype, 5716, 0x10000000, 1); /* value_min */
																*(EIF_INTEGER_32 *)(Current + RTWA(5716, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
																RTHOOK(136);
																RTDBGAA(Current, dtype, 5708, 0x04000000, 1); /* is_text */
																*(EIF_BOOLEAN *)(Current + RTWA(5708, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
																RTHOOK(137);
																RTDBGAA(Current, dtype, 5709, 0x04000000, 1); /* is_numeric */
																*(EIF_BOOLEAN *)(Current + RTWA(5709, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
																RTHOOK(138);
																RTDBGAA(Current, dtype, 5717, 0x10000000, 1); /* type */
																tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5733, dtype))(Current)).it_n1);
																ti4_1 = (EIF_INTEGER_32) tu1_1;
																*(EIF_INTEGER_32 *)(Current + RTWA(5717, dtype)) = (EIF_INTEGER_32) ti4_1;
															} else {
																RTHOOK(139);
																tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5711, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																ur1 = RTCCL(tr1);
																tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5338, dtype))(Current, ur1x)).it_b);
																if (tb1) {
																	RTHOOK(140);
																	RTDBGAA(Current, dtype, 5712, 0x10000000, 1); /* count_max */
																	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5711, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																	RTNHOOK(140,1);
																	ui4_1 = ((EIF_INTEGER_32) 3L);
																	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5711, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
																	RTNHOOK(140,2);
																	ti4_1 = *(EIF_INTEGER_32 *)(tr2 + RTVA(4774, "count", tr2));
																	ui4_2 = ti4_1;
																	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4726, "substring", tr1))(tr1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
																	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4711, "to_integer", tr2))(tr2)).it_i4);
																	*(EIF_INTEGER_32 *)(Current + RTWA(5712, dtype)) = (EIF_INTEGER_32) ti4_1;
																	RTHOOK(141);
																	RTDBGAA(Current, dtype, 5713, 0x10000000, 1); /* count_min */
																	*(EIF_INTEGER_32 *)(Current + RTWA(5713, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
																	RTHOOK(142);
																	RTDBGAL(1, 0xF80000EC, 0, 0); /* loc1 */
																	tr1 = RTMS_EX_H("fractional-second-numeric",25,941051235);
																	loc1 = (EIF_REFERENCE) tr1;
																	RTHOOK(143);
																	RTDBGAA(Current, dtype, 5708, 0x04000000, 1); /* is_text */
																	*(EIF_BOOLEAN *)(Current + RTWA(5708, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
																	RTHOOK(144);
																	RTDBGAA(Current, dtype, 5709, 0x04000000, 1); /* is_numeric */
																	*(EIF_BOOLEAN *)(Current + RTWA(5709, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
																	RTHOOK(145);
																	RTDBGAA(Current, dtype, 5717, 0x10000000, 1); /* type */
																	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5734, dtype))(Current)).it_n1);
																	ti4_1 = (EIF_INTEGER_32) tu1_1;
																	*(EIF_INTEGER_32 *)(Current + RTWA(5717, dtype)) = (EIF_INTEGER_32) ti4_1;
																	RTHOOK(146);
																	RTDBGAA(Current, dtype, 5715, 0x10000000, 1); /* value_max */
																	*(EIF_INTEGER_32 *)(Current + RTWA(5715, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
																	RTHOOK(147);
																	RTDBGAA(Current, dtype, 5716, 0x10000000, 1); /* value_min */
																	*(EIF_INTEGER_32 *)(Current + RTWA(5716, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
																} else {
																	RTHOOK(148);
																	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5711, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																	ur1 = RTCCL(tr1);
																	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5339, dtype))(Current, ur1x)).it_b);
																	if (tb1) {
																		RTHOOK(149);
																		RTDBGAA(Current, dtype, 5712, 0x10000000, 1); /* count_max */
																		*(EIF_INTEGER_32 *)(Current + RTWA(5712, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
																		RTHOOK(150);
																		RTDBGAA(Current, dtype, 5713, 0x10000000, 1); /* count_min */
																		*(EIF_INTEGER_32 *)(Current + RTWA(5713, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
																		RTHOOK(151);
																		RTDBGAL(1, 0xF80000EC, 0, 0); /* loc1 */
																		tr1 = RTMS_EX_H("colon",5,1870137710);
																		loc1 = (EIF_REFERENCE) tr1;
																		RTHOOK(152);
																		RTDBGAA(Current, dtype, 5708, 0x04000000, 1); /* is_text */
																		*(EIF_BOOLEAN *)(Current + RTWA(5708, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
																		RTHOOK(153);
																		RTDBGAA(Current, dtype, 5709, 0x04000000, 1); /* is_numeric */
																		*(EIF_BOOLEAN *)(Current + RTWA(5709, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
																		RTHOOK(154);
																		RTDBGAA(Current, dtype, 5717, 0x10000000, 1); /* type */
																		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5735, dtype))(Current)).it_n1);
																		ti4_1 = (EIF_INTEGER_32) tu1_1;
																		*(EIF_INTEGER_32 *)(Current + RTWA(5717, dtype)) = (EIF_INTEGER_32) ti4_1;
																	} else {
																		RTHOOK(155);
																		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5711, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																		ur1 = RTCCL(tr1);
																		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5340, dtype))(Current, ur1x)).it_b);
																		if (tb1) {
																			RTHOOK(156);
																			RTDBGAA(Current, dtype, 5712, 0x10000000, 1); /* count_max */
																			*(EIF_INTEGER_32 *)(Current + RTWA(5712, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
																			RTHOOK(157);
																			RTDBGAA(Current, dtype, 5713, 0x10000000, 1); /* count_min */
																			*(EIF_INTEGER_32 *)(Current + RTWA(5713, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
																			RTHOOK(158);
																			RTDBGAL(1, 0xF80000EC, 0, 0); /* loc1 */
																			tr1 = RTMS_EX_H("slash",5,1819209064);
																			loc1 = (EIF_REFERENCE) tr1;
																			RTHOOK(159);
																			RTDBGAA(Current, dtype, 5708, 0x04000000, 1); /* is_text */
																			*(EIF_BOOLEAN *)(Current + RTWA(5708, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
																			RTHOOK(160);
																			RTDBGAA(Current, dtype, 5709, 0x04000000, 1); /* is_numeric */
																			*(EIF_BOOLEAN *)(Current + RTWA(5709, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
																			RTHOOK(161);
																			RTDBGAA(Current, dtype, 5717, 0x10000000, 1); /* type */
																			tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5736, dtype))(Current)).it_n1);
																			ti4_1 = (EIF_INTEGER_32) tu1_1;
																			*(EIF_INTEGER_32 *)(Current + RTWA(5717, dtype)) = (EIF_INTEGER_32) ti4_1;
																		} else {
																			RTHOOK(162);
																			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5711, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																			ur1 = RTCCL(tr1);
																			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5341, dtype))(Current, ur1x)).it_b);
																			if (tb1) {
																				RTHOOK(163);
																				RTDBGAA(Current, dtype, 5712, 0x10000000, 1); /* count_max */
																				*(EIF_INTEGER_32 *)(Current + RTWA(5712, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
																				RTHOOK(164);
																				RTDBGAA(Current, dtype, 5713, 0x10000000, 1); /* count_min */
																				*(EIF_INTEGER_32 *)(Current + RTWA(5713, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
																				RTHOOK(165);
																				RTDBGAL(1, 0xF80000EC, 0, 0); /* loc1 */
																				tr1 = RTMS_EX_H("minus",5,1769683827);
																				loc1 = (EIF_REFERENCE) tr1;
																				RTHOOK(166);
																				RTDBGAA(Current, dtype, 5708, 0x04000000, 1); /* is_text */
																				*(EIF_BOOLEAN *)(Current + RTWA(5708, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
																				RTHOOK(167);
																				RTDBGAA(Current, dtype, 5709, 0x04000000, 1); /* is_numeric */
																				*(EIF_BOOLEAN *)(Current + RTWA(5709, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
																				RTHOOK(168);
																				RTDBGAA(Current, dtype, 5717, 0x10000000, 1); /* type */
																				tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5737, dtype))(Current)).it_n1);
																				ti4_1 = (EIF_INTEGER_32) tu1_1;
																				*(EIF_INTEGER_32 *)(Current + RTWA(5717, dtype)) = (EIF_INTEGER_32) ti4_1;
																			} else {
																				RTHOOK(169);
																				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5711, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																				ur1 = RTCCL(tr1);
																				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5342, dtype))(Current, ur1x)).it_b);
																				if (tb1) {
																					RTHOOK(170);
																					RTDBGAA(Current, dtype, 5712, 0x10000000, 1); /* count_max */
																					*(EIF_INTEGER_32 *)(Current + RTWA(5712, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
																					RTHOOK(171);
																					RTDBGAA(Current, dtype, 5713, 0x10000000, 1); /* count_min */
																					*(EIF_INTEGER_32 *)(Current + RTWA(5713, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
																					RTHOOK(172);
																					RTDBGAL(1, 0xF80000EC, 0, 0); /* loc1 */
																					tr1 = RTMS_EX_H("comma",5,1870202721);
																					loc1 = (EIF_REFERENCE) tr1;
																					RTHOOK(173);
																					RTDBGAA(Current, dtype, 5708, 0x04000000, 1); /* is_text */
																					*(EIF_BOOLEAN *)(Current + RTWA(5708, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
																					RTHOOK(174);
																					RTDBGAA(Current, dtype, 5709, 0x04000000, 1); /* is_numeric */
																					*(EIF_BOOLEAN *)(Current + RTWA(5709, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
																					RTHOOK(175);
																					RTDBGAA(Current, dtype, 5717, 0x10000000, 1); /* type */
																					tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5738, dtype))(Current)).it_n1);
																					ti4_1 = (EIF_INTEGER_32) tu1_1;
																					*(EIF_INTEGER_32 *)(Current + RTWA(5717, dtype)) = (EIF_INTEGER_32) ti4_1;
																				} else {
																					RTHOOK(176);
																					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5711, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																					ur1 = RTCCL(tr1);
																					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5343, dtype))(Current, ur1x)).it_b);
																					if (tb1) {
																						RTHOOK(177);
																						RTDBGAA(Current, dtype, 5712, 0x10000000, 1); /* count_max */
																						*(EIF_INTEGER_32 *)(Current + RTWA(5712, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
																						RTHOOK(178);
																						RTDBGAA(Current, dtype, 5713, 0x10000000, 1); /* count_min */
																						*(EIF_INTEGER_32 *)(Current + RTWA(5713, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
																						RTHOOK(179);
																						RTDBGAL(1, 0xF80000EC, 0, 0); /* loc1 */
																						tr1 = RTMS_EX_H("space",5,1886313829);
																						loc1 = (EIF_REFERENCE) tr1;
																						RTHOOK(180);
																						RTDBGAA(Current, dtype, 5708, 0x04000000, 1); /* is_text */
																						*(EIF_BOOLEAN *)(Current + RTWA(5708, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
																						RTHOOK(181);
																						RTDBGAA(Current, dtype, 5709, 0x04000000, 1); /* is_numeric */
																						*(EIF_BOOLEAN *)(Current + RTWA(5709, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
																						RTHOOK(182);
																						RTDBGAA(Current, dtype, 5717, 0x10000000, 1); /* type */
																						tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5739, dtype))(Current)).it_n1);
																						ti4_1 = (EIF_INTEGER_32) tu1_1;
																						*(EIF_INTEGER_32 *)(Current + RTWA(5717, dtype)) = (EIF_INTEGER_32) ti4_1;
																					} else {
																						RTHOOK(183);
																						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5711, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																						ur1 = RTCCL(tr1);
																						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5344, dtype))(Current, ur1x)).it_b);
																						if (tb1) {
																							RTHOOK(184);
																							RTDBGAA(Current, dtype, 5712, 0x10000000, 1); /* count_max */
																							*(EIF_INTEGER_32 *)(Current + RTWA(5712, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
																							RTHOOK(185);
																							RTDBGAA(Current, dtype, 5713, 0x10000000, 1); /* count_min */
																							*(EIF_INTEGER_32 *)(Current + RTWA(5713, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
																							RTHOOK(186);
																							RTDBGAL(1, 0xF80000EC, 0, 0); /* loc1 */
																							tr1 = RTMS_EX_H("dot",3,6582132);
																							loc1 = (EIF_REFERENCE) tr1;
																							RTHOOK(187);
																							RTDBGAA(Current, dtype, 5708, 0x04000000, 1); /* is_text */
																							*(EIF_BOOLEAN *)(Current + RTWA(5708, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
																							RTHOOK(188);
																							RTDBGAA(Current, dtype, 5709, 0x04000000, 1); /* is_numeric */
																							*(EIF_BOOLEAN *)(Current + RTWA(5709, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
																							RTHOOK(189);
																							RTDBGAA(Current, dtype, 5717, 0x10000000, 1); /* type */
																							tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5740, dtype))(Current)).it_n1);
																							ti4_1 = (EIF_INTEGER_32) tu1_1;
																							*(EIF_INTEGER_32 *)(Current + RTWA(5717, dtype)) = (EIF_INTEGER_32) ti4_1;
																						} else {
																							RTHOOK(190);
																							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5711, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																							ur1 = RTCCL(tr1);
																							tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5346, dtype))(Current, ur1x)).it_b);
																							if (tb1) {
																								RTHOOK(191);
																								RTDBGAA(Current, dtype, 5712, 0x10000000, 1); /* count_max */
																								*(EIF_INTEGER_32 *)(Current + RTWA(5712, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
																								RTHOOK(192);
																								RTDBGAA(Current, dtype, 5713, 0x10000000, 1); /* count_min */
																								*(EIF_INTEGER_32 *)(Current + RTWA(5713, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
																								RTHOOK(193);
																								RTDBGAL(1, 0xF80000EC, 0, 0); /* loc1 */
																								tr1 = RTMS_EX_H("meridiem",8,1230131053);
																								loc1 = (EIF_REFERENCE) tr1;
																								RTHOOK(194);
																								RTDBGAA(Current, dtype, 5708, 0x04000000, 1); /* is_text */
																								*(EIF_BOOLEAN *)(Current + RTWA(5708, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
																								RTHOOK(195);
																								RTDBGAA(Current, dtype, 5709, 0x04000000, 1); /* is_numeric */
																								*(EIF_BOOLEAN *)(Current + RTWA(5709, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
																								RTHOOK(196);
																								RTDBGAA(Current, dtype, 5717, 0x10000000, 1); /* type */
																								tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5741, dtype))(Current)).it_n1);
																								ti4_1 = (EIF_INTEGER_32) tu1_1;
																								*(EIF_INTEGER_32 *)(Current + RTWA(5717, dtype)) = (EIF_INTEGER_32) ti4_1;
																							} else {
																								if (RTAL & CK_CHECK) {
																									RTHOOK(197);
																									RTCT("is_hour12_0", EX_CHECK);
																									tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5711, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																									ur1 = RTCCL(tr1);
																									tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5333, dtype))(Current, ur1x)).it_b);
																									if (tb1) {
																										RTCK;
																									} else {
																										RTCF;
																									}
																								}
																								RTHOOK(198);
																								RTDBGAA(Current, dtype, 5712, 0x10000000, 1); /* count_max */
																								*(EIF_INTEGER_32 *)(Current + RTWA(5712, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
																								RTHOOK(199);
																								RTDBGAA(Current, dtype, 5713, 0x10000000, 1); /* count_min */
																								*(EIF_INTEGER_32 *)(Current + RTWA(5713, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
																								RTHOOK(200);
																								RTDBGAL(1, 0xF80000EC, 0, 0); /* loc1 */
																								tr1 = RTMS_EX_H("hour-12-clock-scale-on-2-digits",31,1799302003);
																								loc1 = (EIF_REFERENCE) tr1;
																								RTHOOK(201);
																								RTDBGAA(Current, dtype, 5715, 0x10000000, 1); /* value_max */
																								*(EIF_INTEGER_32 *)(Current + RTWA(5715, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
																								RTHOOK(202);
																								RTDBGAA(Current, dtype, 5716, 0x10000000, 1); /* value_min */
																								*(EIF_INTEGER_32 *)(Current + RTWA(5716, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
																								RTHOOK(203);
																								RTDBGAA(Current, dtype, 5708, 0x04000000, 1); /* is_text */
																								*(EIF_BOOLEAN *)(Current + RTWA(5708, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
																								RTHOOK(204);
																								RTDBGAA(Current, dtype, 5709, 0x04000000, 1); /* is_numeric */
																								*(EIF_BOOLEAN *)(Current + RTWA(5709, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
																								RTHOOK(205);
																								RTDBGAA(Current, dtype, 5717, 0x10000000, 1); /* type */
																								tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5729, dtype))(Current)).it_n1);
																								ti4_1 = (EIF_INTEGER_32) tu1_1;
																								*(EIF_INTEGER_32 *)(Current + RTWA(5717, dtype)) = (EIF_INTEGER_32) ti4_1;
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	RTHOOK(206);
	RTDBGAA(Current, dtype, 5714, 0xF80000EC, 0); /* name */
	tr1 = RTCCL(loc1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5714, dtype)) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(207);
		RTCT("value_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5711, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(207,1);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4759, "same_string", tr1))(tr1, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(208);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {DATE_TIME_CODE}.value */
EIF_TYPED_VALUE F1022_8025 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5711,Dtype(Current)));
	return r;
}


/* {DATE_TIME_CODE}.count_max */
EIF_TYPED_VALUE F1022_8026 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(5712,Dtype(Current)));
	return r;
}


/* {DATE_TIME_CODE}.count_min */
EIF_TYPED_VALUE F1022_8027 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(5713,Dtype(Current)));
	return r;
}


/* {DATE_TIME_CODE}.name */
EIF_TYPED_VALUE F1022_8028 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5714,Dtype(Current)));
	return r;
}


/* {DATE_TIME_CODE}.value_max */
EIF_TYPED_VALUE F1022_8029 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(5715,Dtype(Current)));
	return r;
}


/* {DATE_TIME_CODE}.value_min */
EIF_TYPED_VALUE F1022_8030 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(5716,Dtype(Current)));
	return r;
}


/* {DATE_TIME_CODE}.type */
EIF_TYPED_VALUE F1022_8031 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(5717,Dtype(Current)));
	return r;
}


/* {DATE_TIME_CODE}.debug_output */
EIF_TYPED_VALUE F1022_8032 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "debug_output";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1021, Current, 0, 0, 13924);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1021, Current, 13924);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80000EC, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(236, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4647, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5717, dtype));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4782, "append_integer", Result))(Result, ui4_1x);
	RTHOOK(3);
	tr1 = RTMS_EX_H(" -> ",4,539835936);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4827, "append", Result))(Result, ur1x);
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5714, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4827, "append", Result))(Result, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
}

/* {DATE_TIME_CODE}.day_numeric_type_code */
EIF_TYPED_VALUE F1022_8033 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 1U);
	return r;
}

/* {DATE_TIME_CODE}.day_numeric_on_2_digits_type_code */
EIF_TYPED_VALUE F1022_8034 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 2U);
	return r;
}

/* {DATE_TIME_CODE}.day_text_type_code */
EIF_TYPED_VALUE F1022_8035 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 3U);
	return r;
}

/* {DATE_TIME_CODE}.year_on_4_digits_type_code */
EIF_TYPED_VALUE F1022_8036 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 4U);
	return r;
}

/* {DATE_TIME_CODE}.year_on_2_digits_type_code */
EIF_TYPED_VALUE F1022_8037 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 5U);
	return r;
}

/* {DATE_TIME_CODE}.month_numeric_type_code */
EIF_TYPED_VALUE F1022_8038 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 6U);
	return r;
}

/* {DATE_TIME_CODE}.month_numeric_on_2_digits_type_code */
EIF_TYPED_VALUE F1022_8039 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 7U);
	return r;
}

/* {DATE_TIME_CODE}.month_text_type_code */
EIF_TYPED_VALUE F1022_8040 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 8U);
	return r;
}

/* {DATE_TIME_CODE}.hour_numeric_type_code */
EIF_TYPED_VALUE F1022_8041 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 9U);
	return r;
}

/* {DATE_TIME_CODE}.hour_numeric_on_2_digits_type_code */
EIF_TYPED_VALUE F1022_8042 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 10U);
	return r;
}

/* {DATE_TIME_CODE}.hour_12_clock_scale_type_code */
EIF_TYPED_VALUE F1022_8043 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 11U);
	return r;
}

/* {DATE_TIME_CODE}.hour_12_clock_scale_on_2_digits_type_code */
EIF_TYPED_VALUE F1022_8044 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 12U);
	return r;
}

/* {DATE_TIME_CODE}.minute_numeric_type_code */
EIF_TYPED_VALUE F1022_8045 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 13U);
	return r;
}

/* {DATE_TIME_CODE}.minute_numeric_on_2_digits_type_code */
EIF_TYPED_VALUE F1022_8046 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 14U);
	return r;
}

/* {DATE_TIME_CODE}.second_numeric_type_code */
EIF_TYPED_VALUE F1022_8047 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 15U);
	return r;
}

/* {DATE_TIME_CODE}.second_numeric_on_2_digits_type_code */
EIF_TYPED_VALUE F1022_8048 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 16U);
	return r;
}

/* {DATE_TIME_CODE}.fractional_second_numeric_type_code */
EIF_TYPED_VALUE F1022_8049 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 17U);
	return r;
}

/* {DATE_TIME_CODE}.colon_type_code */
EIF_TYPED_VALUE F1022_8050 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 18U);
	return r;
}

/* {DATE_TIME_CODE}.slash_type_code */
EIF_TYPED_VALUE F1022_8051 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 19U);
	return r;
}

/* {DATE_TIME_CODE}.minus_type_code */
EIF_TYPED_VALUE F1022_8052 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 20U);
	return r;
}

/* {DATE_TIME_CODE}.comma_type_code */
EIF_TYPED_VALUE F1022_8053 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 21U);
	return r;
}

/* {DATE_TIME_CODE}.space_type_code */
EIF_TYPED_VALUE F1022_8054 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 22U);
	return r;
}

/* {DATE_TIME_CODE}.dot_type_code */
EIF_TYPED_VALUE F1022_8055 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 23U);
	return r;
}

/* {DATE_TIME_CODE}.meridiem_type_code */
EIF_TYPED_VALUE F1022_8056 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 24U);
	return r;
}

void EIF_Minit1022 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
