PHP_ARG_ENABLE(ccrule, whether to enable CCRule,
[  --enable-ccrule        Enable CCRule extension])

if test "$PHP_CCRULE" != "no"; then
  AC_DEFINE(HAVE_CCRULE,1,[ ])
  PHP_REQUIRE_CXX()
  PHP_NEW_EXTENSION(ccrule, ccrule.cpp, $ext_shared)
fi
