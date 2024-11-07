#!/bin/bash
flex --outfile lex_sql.cpp --header-file=lex_sql.h lex_sql.l
`which bison` -d --output yacc_sql.cpp yacc_sql.y
<<<<<<< HEAD
  dk
=======
>>>>>>> 9172074180a6beef223828077dd35ad072f73a10
