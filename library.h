#ifndef __library__
 #define __library__

#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
 #include <time.h>    /* time */
#include <math.h>

#define ubound(T)(sizeof((T))/sizeof((T[0]))-1)


void    randomize ();

#endif
