#include "eif_eiffel.h"
#include "eif_rout_obj.h"
#include "eaddress.h"

#ifdef __cplusplus
extern "C" {
#endif

	/* TRACING_HANDLER per_thread_trace */
void A39_36 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4, EIF_BOOLEAN arg5)
{
	EIF_TYPED_VALUE u [5];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(958, "per_thread_trace", Current))(Current, ((u [0].type = SK_INT32), (u [0].it_i4 = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]), ((u [2].type = SK_POINTER), (u [2].it_p = arg3), u [2]), ((u [3].type = SK_INT32), (u [3].it_i4 = arg4), u [3]), ((u [4].type = SK_BOOL), (u [4].it_b = arg5), u [4]));
}

	/* RT_DBG_CALL_RECORD inline-agent#1 of record_fields */
void _A144_159_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) F144_7304)(closed [1].it_r, open [1]);
}

	/* MISMATCH_INFORMATION wipe_out */
void A164_98 (EIF_REFERENCE Current)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2212, "wipe_out", Current))(Current);
}

	/* MISMATCH_INFORMATION internal_put */
void A164_162 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	EIF_TYPED_VALUE u [2];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3032, "internal_put", Current))(Current, ((u [0].type = SK_REF), (u [0].it_r = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]));
}

	/* MISMATCH_INFORMATION set_string_versions */
void A164_163 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	EIF_TYPED_VALUE u [2];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3033, "set_string_versions", Current))(Current, ((u [0].type = SK_POINTER), (u [0].it_p = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]));
}

	/* EQA_SYSTEM_PATH extend */
void _A979_43_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5213, "extend", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EQA_TEST_EVALUATOR [G#1] inline-agent#1 of execute */
EIF_TYPED_VALUE _A1047_271 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) F1047_8652)(closed [1].it_r);
}

	/* PROCEDURE [G#1] call */
void _A259_140 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4615, "call", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EQA_TEST_SET clean */
void _A984_39 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5263, "clean", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EQA_EVALUATOR invoke_routine */
void _A1021_208_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5465, "invoke_routine", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}


static fnptr feif_address_table[] = {
(fnptr)0,
(fnptr)A39_36,
(fnptr)A164_98,
(fnptr)A164_162,
(fnptr)A164_163,
};

fnptr *egc_address_table_init = feif_address_table;



#ifdef __cplusplus
}
#endif
