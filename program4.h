#ifndef _PROGRAM4_H_
#define _PROGRAM4_H_
/*
 * Filename  program4.h
 * Date      03/20/2020
 * Author    Jerry Huynh
 * Email     jsh170830@utdallas.edu
 * Course    CS 3377.501 Spring 2020
 * Version   1.0
 * Copyright 2020, All Rights Reserved
 * 
 * Description:
 *
 *	Call the yylex() function generated by flex.
 */


/* Enumerate the tokens we will try to match.  Make sure to NOT have a token with value 0 */

enum {NAME_INITIAL_TOKEN=1, ROMANTOKEN, SRTOKEN, JRTOKEN, HASHTOKEN, COMMATOKEN, EOLTOKEN, DASHTOKEN, INTTOKEN, NAMETOKEN, IDENTIFIERTOKEN};


#endif /* _PROGRAM4_H_ */