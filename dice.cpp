#include "cgen.h"

//'' Function to a random number in the range [first, last), or {first <= x < last}.
int  rnd_range (int first , int last ){
	srand (time(NULL));
   int range;
   //rnd_range = Rnd * (last - first +1) + first
   range = round(rand() % ((last - first +1) + first));
   return (range);
}




/* boolean convenience functions */
int CoinToss() {
    return RollDice(1,2);
}

int  percentChance (int chance  ) {

	if  (RollDice(1,100) <= chance) {
		return 1;
	}else{
		return -1;
	}
}

/*'Function:
'   getRandomNumber
'
'Inputs:
'   int numSides    // Range limit of 1..N inclusive
'
'Outputs:
'   int result
'
'Assumptions:
'   System randomizer has already been initialized because
'   it should not be initilized here since it will be reinitialized
'   every time this function is called.
'
'Notes:
'   The standard VB random number generation code is unfair to endpoint
'   numbers in the range.  My own analysis has deteremined that d20 (1..20)
'   that numbers 2..19 are greater than their theoretical occurance of 5%
'   and numbers 1 & 20 are below their theoretical occurance usually 2.5%
'
'   Analysis:
'   # Of dice:      500,000
'   # Of sides:     20
'
    'Side    #      %
    '1      13204   2.6408
    '2      26357   5.2714
    '3      26120   5.224
    '4      26198   5.2396
    '5      26033   5.2066
    '6      26257   5.2514
    '7      26378   5.2756
    '8      26365   5.273
    '9      26515   5.303
    '10     26362   5.2724
    '11     26231   5.2462
    '12     26334   5.2668
    '13     26297   5.2594
    '14     26337   5.2674
    '15     26655   5.331
    '16     26121   5.2242
    '17     26498   5.2996
    '18     26243   5.2486
    '19     26373   5.2746
    '20     13122   2.6244
' This algorithm will attempt to correct the unfairness of
' the random number generation using the hypothesis that the endpoint values
' are less likely.  The solution will be to add an extra 2 numbers to the
' number range (ex> 1..20 becomes 1..23) These numbers will be the "new"
' endpoints.  When an endpoint roll occurs, it is ignored and re-rolled.
'' The resulting number range would be 2..21
' 1 is then subtracted from the result, yielding the proper range of 1..20
*/
int RollDice(int numDice ,int numSides )
{
    const int RANGE_PADDING = 2;
    int ROLL_ADJUSTMENT ;
    int modifiedRange ;
    int rollTotal ;  // ' Sum of the dice rolls
    int rollValue ;  // ' Value of one die roll
    int lcv;       // ' Loop control variable
    srand (time(NULL));
    //' Explicitly initialize variables (unnecessary, but good style)
    ROLL_ADJUSTMENT = round(pow(RANGE_PADDING , 0.5));
    rollTotal = 0;
    rollValue = 0;
    modifiedRange = numSides + RANGE_PADDING;
    //' For every roll...
    for ( lcv = 1 ; lcv <= numDice; ++lcv)
    {
      // ' Get a random number from 1..numSides
        rollValue = round(rand() % modifiedRange -1 ) + 1;
        do{
               rollValue = round(rand() % modifiedRange -1) + 1;
          } while (rollValue >= 1 || rollValue <= modifiedRange);
        //' Adjust the rollValue to remove the padding
        rollValue = rollValue - ROLL_ADJUSTMENT;
        //' Add this number to the current total
        rollTotal = rollTotal + rollValue;
    }


    //' Set return value and exit
    return (rollTotal);
}
