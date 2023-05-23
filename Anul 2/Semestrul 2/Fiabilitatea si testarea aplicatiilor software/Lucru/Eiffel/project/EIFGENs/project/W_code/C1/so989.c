/*
 * Code for class SOCKET_TIMEOUT_UTILITIES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F989_7527(EIF_REFERENCE);
extern EIF_TYPED_VALUE F989_7528(EIF_REFERENCE);
extern EIF_TYPED_VALUE F989_7529(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F989_7530(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F989_7531(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit989(void);

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

/* {SOCKET_TIMEOUT_UTILITIES}.one_second_in_nanoseconds */
EIF_TYPED_VALUE F989_7527 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT64;
	r.it_n8 = (EIF_NATURAL_64) ((EIF_NATURAL_64) RTU64C(1000000000));
	return r;
}

/* {SOCKET_TIMEOUT_UTILITIES}.max_timeout_ns_value */
EIF_TYPED_VALUE F989_7528 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT64;
	r.it_n8 = (EIF_NATURAL_64) ((EIF_NATURAL_64) RTU64C(2147483647999999999));
	return r;
}

/* {SOCKET_TIMEOUT_UTILITIES}.nanoseconds_to_seconds */
EIF_TYPED_VALUE F989_7529 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "nanoseconds_to_seconds";
	RTEX;
	EIF_NATURAL_64 loc1 = (EIF_NATURAL_64) 0;
#define arg1 arg1x.it_n8
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n8 = * (EIF_NATURAL_64 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU(SK_UINT64,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT64, &loc1);
	
	RTEAA(l_feature_name, 988, Current, 1, 1, 13469);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(988, Current, 13469);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x3C000000, 1, 0); /* loc1 */
	tu8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5299, dtype))(Current)).it_n8);
	loc1 = (EIF_NATURAL_64) (EIF_NATURAL_64) (arg1 / tu8_1);
	RTHOOK(2);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4418, 222))(Current)).it_i4);
	tu8_1 = (EIF_NATURAL_64) ti4_1;
	if ((EIF_BOOLEAN) (loc1 > tu8_1)) {
		RTHOOK(3);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4418, 222))(Current)).it_i4);
		Result = (EIF_INTEGER_32) ti4_1;
	} else {
		RTHOOK(4);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		ti4_1 = (EIF_INTEGER_32) loc1;
		Result = (EIF_INTEGER_32) ti4_1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("non_negative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("coherent", EX_POST);
		tu8_1 = (EIF_NATURAL_64) Result;
		tu8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5299, dtype))(Current)).it_n8);
		if ((EIF_BOOLEAN) ((EIF_NATURAL_64) (tu8_1 * tu8_2) <= arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {SOCKET_TIMEOUT_UTILITIES}.seconds_to_nanoseconds */
EIF_TYPED_VALUE F989_7530 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "seconds_to_nanoseconds";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT64, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 988, Current, 0, 1, 13470);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(988, Current, 13470);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x3C000000, 1,0); /* Result */
	tu8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5299, dtype))(Current)).it_n8);
	tu8_2 = (EIF_NATURAL_64) arg1;
	Result = (EIF_NATURAL_64) (EIF_NATURAL_64) (tu8_1 * tu8_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT64; r.it_n8 = Result; return r; }
#undef arg1
}

/* {SOCKET_TIMEOUT_UTILITIES}.is_valid_timeout_ns */
EIF_TYPED_VALUE F989_7531 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_valid_timeout_ns";
	RTEX;
#define arg1 arg1x.it_n8
	EIF_NATURAL_64 tu8_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n8 = * (EIF_NATURAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_UINT64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 988, Current, 0, 1, 13471);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(988, Current, 13471);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tu8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5300, dtype))(Current)).it_n8);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_NATURAL_64) ((EIF_INTEGER_32) 0L) <= arg1) && (EIF_BOOLEAN) (arg1 <= tu8_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

void EIF_Minit989 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
