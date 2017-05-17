PHP_ARG_ENABLE(ccboard, whether to enable CCBoard,
[  --enable-ccboard        Enable CCBoard extension])

if test "$PHP_CCBOARD" != "no"; then
  AC_DEFINE(HAVE_CCBOARD,1,[ ])
  PHP_REQUIRE_CXX()
  PHP_NEW_EXTENSION(ccboard, ccboard.cpp board.cpp data.cpp move.cpp piece.cpp square.cpp zobrist.cpp, $ext_shared)
fi
