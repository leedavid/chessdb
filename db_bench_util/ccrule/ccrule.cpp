#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

extern "C" {
#include "php.h"
}
#include "php_ccrule.h"

#include <cctype>
#include <string>
#include <stdlib.h>
//#include "xiangqi.h"

zend_function_entry ccrule_functions[] = {
	PHP_FE(ccrulecheck, NULL)
	PHP_FE(ccruleischase, NULL)
	{NULL, NULL, NULL}
};

zend_module_entry ccrule_module_entry = {
#if ZEND_MODULE_API_NO >= 20010901
	STANDARD_MODULE_HEADER,
#endif
	"ccrule",
	ccrule_functions,
	PHP_MINIT(ccrule),
	NULL,
	NULL,
	NULL,
	NULL,
#if ZEND_MODULE_API_NO >= 20010901
	"0.1",
#endif
	STANDARD_MODULE_PROPERTIES
};

#ifdef COMPILE_DL_CCRULE
extern "C" {
ZEND_GET_MODULE(ccrule)
}
#endif

PHP_MINIT_FUNCTION(ccrule)
{
	init();
	return SUCCESS;
}

PHP_FUNCTION(ccrulecheck)
{
	char* fenstr;
	int fenstr_len;
	zval* arr;
	zend_bool verify = 0;
	long check_times = 1;
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "sa|bl", &fenstr, &fenstr_len, &arr, &verify, &check_times) != FAILURE) {
/*
		Position pos;
		pos.from_fen(fenstr);
		HashTable* arr_hash = Z_ARRVAL_P(arr);
		HashPosition pointer;
		zval** data;
		for(zend_hash_internal_pointer_reset_ex(arr_hash, &pointer); zend_hash_get_current_data_ex(arr_hash, (void**) &data, &pointer) == SUCCESS; zend_hash_move_forward_ex(arr_hash, &pointer)) {
			if (Z_TYPE_PP(data) == IS_STRING) {
				int move = move_from_string(Z_STRVAL_PP(data));
				if(!verify || (pos.move_is_pseudo(move) && pos.move_is_legal(move)))
					pos.move_do(move);
				else
					RETURN_NULL();
			}
			else
				RETURN_NULL();
		}
		RETURN_LONG(pos.rep_check(check_times));
*/
		RETURN_LONG(0);
	}
	RETURN_NULL();
}

PHP_FUNCTION(ccruleischase)
{
	char* fenstr;
	int fenstr_len;
	char* movestr;
	int movestr_len;
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "ss", &fenstr, &fenstr_len, &movestr, &movestr_len) != FAILURE) {
/*
		Position pos;
		pos.from_fen(fenstr);
		int move = move_from_string(movestr);
		RETURN_LONG(pos.is_chase(move));
*/
		RETURN_LONG(0);
	}
	RETURN_NULL();
}
