 #ifndef __dice__
 #define __dice__
 #include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <math.h>

int RollDice( int numDice , int numSides ) ;
int percentChance (int chance ) ;
int CoinToss();
int rnd_range (int first , int last);


#endif
