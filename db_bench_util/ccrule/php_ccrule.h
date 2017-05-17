#ifndef PHP_CCRULE_H
#define PHP_CCRULE_H

extern zend_module_entry ccrule_module_entry;
#define phpext_ccrule_ptr &ccrule_module_entry

PHP_MINIT_FUNCTION(ccrule);
PHP_FUNCTION(ccrulecheck);
PHP_FUNCTION(ccruleischase);

#endif
