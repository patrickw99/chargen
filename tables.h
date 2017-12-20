#ifndef __tables__
#define __tables__
// *************************************************** attack Table **********************
int attackhead [41] = {20,19,18,17,16,15,14,13,12,11,10, 9, 8,7,6,5,4,3,2,1,0,-1,-2,-3,-4,-5,-6,-7,-8,-9,-10,-11,-12,-13,-14,-15,-16,-17,-18,-19,-20};
//int  attackdefault [41] As Integer = {,,,,,,,,,,, ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,},
int  fighterattack  [13][ 43]  =
{{0,0,2,2,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,20,20,20,20,21,22,23,24,25,26,27,28,29,30,30,30,30,30,31,32},
{1,3,2,2,2,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,20,20,20,20,21,22,23,24,25,26,27,28,29,30,30,30,30,30,30},
{4,6,1,2,2,2,2,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,20,20,20,20,21,22,23,24,25,26,27,28,29,30,30,30,30},
{7,9,-1,0,1,2,2,2,2,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,20,20,20,20,21,22,23,24,25,26,27,28,29,30,30},
{10,12,-3,-2,-1,0,1,2,2,2,2,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,20,20,20,20,21,22,23,24,25,26,27,28,29},
{13,15,-5,-4,-3,-2,-1,0,1,2,2,2,2,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,20,20,20,20,21,22,23,24,25,26,27},
{16,18,-7,-6,-5,-4,-3,-2,-1,0,1,2,2,2,2,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,20,20,20,20,21,22,23,24,25},
{19,21,-9,-8,-7,-6,-5,-4,-3,-2,-1,0,1,2,2,2,2,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,20,20,20,20,21,22,23},
{22,24,-11,-10,-9,-8,-7,-6,-5,-4,-3,-2,-1,0,1,2,2,2,2,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,20,20,20,20,21},
{25,27,-13,-12,-11,-10,-9,-8,-7,-6,-5,-4,-3,-2,-1,0,1,2,2,2,2,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,20,20,20},
{28,30,-15,-14,-13,-12,-11,-10,-9,-8,-7,-6,-5,-4,-3,-2,-1,0,1,2,2,2,2,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,20},
{31,33,-17,-16,-15,-14,-13,-12,-11,-10,-9,-8,-7,-6,-5,-4,-3,-2,-1,0,1,2,2,2,2,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19},
{34,36,-19,-18,-17,-16,-15,-14,-13,-12,-11,-10,-9,-8,-7,-6,-5,-4,-3,-2,-1,0,1,2,2,2,2,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17}};

int  ctdattack [10][ 43] = 
{{1,4,2,2,2,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,20,20,20,20,21,22,23,24,25,26,27,28,29,30,30,30,30,30,30},
{5,8,1,2,2,2,2,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,20,20,20,20,21,22,23,24,25,26,27,28,29,30,30,30,30},
{9,12,-1,0,1,2,2,2,2,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,20,20,20,20,21,22,23,24,25,26,27,28,29,30,30},
{13,16,-3,-2,-1,0,1,2,2,2,2,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,20,20,20,20,21,22,23,24,25,26,27,28,29},
{17,20,-5,-4,-3,-2,-1,0,1,2,2,2,2,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,20,20,20,20,21,22,23,24,25,26,27},
{21,24,-7,-6,-5,-4,-3,-2,-1,0,1,2,2,2,2,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,20,20,20,20,21,22,23,24,25},
{25,28,-9,-8,-7,-6,-5,-4,-3,-2,-1,0,1,2,2,2,2,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,20,20,20,20,21,22,23},
{29,32,-11,-10,-9,-8,-7,-6,-5,-4,-3,-2,-1,0,1,2,2,2,2,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,20,20,20,20,21},
{33,35,-13,-12,-11,-10,-9,-8,-7,-6,-5,-4,-3,-2,-1,0,1,2,2,2,2,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,20,20,20},
{36,36,-15,-14,-13,-12,-11,-10,-9,-8,-7,-6,-5,-4,-3,-2,-1,0,1,2,2,2,2,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,20}};


int  mageattack [8][43] = 
{{1,5,2,2,2,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,20,20,20,20,21,22,23,24,25,26,27,28,29,30,30,30,30,30,30},
{6,10,1,2,2,2,2,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,20,20,20,20,21,22,23,24,25,26,27,28,29,30,30,30,30},
{11,15,-1,0,1,2,2,2,2,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,20,20,20,20,21,22,23,24,25,26,27,28,29,30,30},
{16,20,-3,-2,-1,0,1,2,2,2,2,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,20,20,20,20,21,22,23,24,25,26,27,28,29},
{21,25,-5,-4,-3,-2,-1,0,1,2,2,2,2,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,20,20,20,20,21,22,23,24,25,26,27},
{26,30,-7,-6,-5,-4,-3,-2,-1,0,1,2,2,2,2,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,20,20,20,20,21,22,23,24,25},
{31,35,-9,-8,-7,-6,-5,-4,-3,-2,-1,0,1,2,2,2,2,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,20,20,20,20,21,22,23},
{36,36,-11,-10,-9,-8,-7,-6,-5,-4,-3,-2,-1,0,1,2,2,2,2,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,20,20,20,20,21}};


int  dhattack  [15][ 43] = 
{{1,3,2,2,2,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,20,20,20,20,21,22,23,24,25,26,27,28,29,30,30,30,30,30,30},
{4,6,1,2,2,2,2,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,20,20,20,20,21,22,23,24,25,26,27,28,29,30,30,30,30},
{7,9,-1,0,1,2,2,2,2,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,20,20,20,20,21,22,23,24,25,26,27,28,29,30,30},
{10,10,-2,-1,0,1,2,2,2,2,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,20,20,20,20,21,22,23,24,25,26,27,28,29,30},
{11,11,-3,-2,-1,0,1,2,2,2,2,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,20,20,20,20,21,22,23,24,25,26,27,28,29},
{12,12,-4,-3,-2,-1,0,1,2,2,2,2,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,20,20,20,20,21,22,23,24,25,26,27,28},
{13,13,-5,-4,-3,-2,-1,0,1,2,2,2,2,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,20,20,20,20,21,22,23,24,25,26,27},
{14,14,-6,-5,-4,-3,-2,-1,0,1,2,2,2,2,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,20,20,20,20,21,22,23,24,25,26},
{15,15,-7,-6,-5,-4,-3,-2,-1,0,1,2,2,2,2,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,20,20,20,20,21,22,23,24,25},
{16,16,-8,-7,-6,-5,-4,-3,-2,-1,0,1,2,2,2,2,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,20,20,20,20,21,22,23,24},
{17,17,-9,-8,-7,-6,-5,-4,-3,-2,-1,0,1,2,2,2,2,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,20,20,20,20,21,22,23},
{18,18,-10,-9,-8,-7,-6,-5,-4,-3,-2,-1,0,1,2,2,2,2,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,20,20,20,20,21,22},
{19,19,-11,-10,-9,-8,-7,-6,-5,-4,-3,-2,-1,0,1,2,2,2,2,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,20,20,20,20,21},
{20,20 ,-12,-11,-10,-9,-8,-7,-6,-5,-4,-3,-2,-1,0,1,2,2,2,2,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,20,20,20,20},
{21,36,-13,-12,-11,-10,-9,-8,-7,-6,-5,-4,-3,-2,-1,0,1,2,2,2,2,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,20,20,20}};
//******************************************************************************
char  saveshead [5][25]  =  {"Death Ray/Poison","Magic Wands","Paralysis/Turn to Stone","Breath Attack","Rod/Staff/Spell"};
//int  savesdefault = {,,,,,,}
int  fightersaves  [13][7] = 
{{0,0,14,15,16,17,17},
{1,3,12,13,14,15,16},
{4,6,10,11,12,13,14},
{7,9,8,9,10,11,12},
{10,12,6,7,8,8,10},
{13,15,6,6,7,8,9},
{16,18,5,6,6,7,8},
{19,21,5,5,6,6,7},
{22,24,4,5,5,5,6},
{25,27,4,4,5,4,5},
{28,30,3,4,4,3,4},
{31,33,3,3,3,2,3},
{34,36,2,2,2,2,2}};

int  magesaves  [8][7] = 
{{1,5,13,14,13,16,15},
{6,10,11,12,11,14,12},
{11,15,9,10,9,12,9},
{16,20,7,8,7,10,6},
{21,24,5,6,5,8,4},
{25,28,4,4,4,6,3},
{29,32,3,3,3,4,2},
{33,36,2,2,2,2,2}};

int  theifsaves  [9][7]  =
{{1,4,13,14,13,16,15},
{5,8,11,12,11,14,13},
{9,12,9,10,9,12,11},
{13,16,7,8,7,10,9},
{17,20,5,6,6,8,7},
{21,24,5,6,5,8,7},
{25,28,3,4,3,4,4},
{29,32,2,3,2,3,3},
{33,36,2,2,2,2,2}};

int  clericsaves [9][7]  =
{{1,4,11,12,14,16,15},
{5,8,9,10,12,14,13},
{9,12,7,8,10,12,11},
{13,16,6,7,8,10,9},
{17,20,5,6,6,8,7},
{21,24,4,5,5,6,5},
{25,28,3,4,4,4,4},
{29,32,2,3,3,3,3},
{33,36,2,2,2,2,2}};

int  elfsaves [4][7] =
{{1,3,12,13,13,15,15},
{4,6,8,10,10,11,11},
{7,9,4,7,7,7,7},
{10,36,2,4,4,3,3}};

int  dwarfsaves[4][7] =
{{1,3,8,9,10,13,12},
{4,6,6,7,8,10,9},
{7,9,4,5,6,7,6},
{10,36,2,3,4,4,3}};

int  halflingsaves [4][7] =
{{1,3,8,9,10,13,12},
{4,6,5,6,7,9,8},
{7,36,2,3,4,5,4}};
// *****************************************************************************
int  cspellshead [7]= { 1, 2, 3, 4, 5, 6, 7};
int  clericspells [37][ 9]  =
{{0,0,0,0,0,0,0},
{0,0,0,0,0,0,0},
{1,0,0,0,0,0,0},
{2,0,0,0,0,0,0},
{2,1,0,0,0,0,0},
{2,2,0,0,0,0,0},
{2,2,1,0,0,0,0},
{3,2,2,0,0,0,0},
{3,3,2,1,0,0,0},
{3,3,3,2,0,0,0},
{4,4,3,2,1,0,0},
{4,4,3,3,2,0,0},
{4,4,4,3,2,1,0},
{5,5,4,3,2,2,0},
{5,5,5,3,3,2,0},
{6,5,5,3,3,3,0},
{6,5,5,4,4,3,0},
{6,6,5,4,4,3,1},
{6,6,5,4,4,3,2},
{7,6,5,4,4,4,2},
{7,6,5,4,4,4,3},
{7,6,5,5,5,4,3},
{7,6,5,5,5,4,4},
{7,7,6,6,5,4,4},
{8,7,6,6,5,5,4},
{8,7,6,6,5,5,5},
{8,7,7,6,6,5,5},
{8,8,7,6,6,6,5},
{8,8,7,7,7,6,5},
{8,8,7,7,7,6,6},
{8,8,8,7,7,7,6},
{8,8,8,8,8,7,6},
{9,8,8,8,8,7,7},
{9,9,8,8,8,8,7},
{9,9,9,8,8,8,8},
{9,9,9,9,9,8,8},
{9,9,9,9,9,9,9}};
int  espellshead [5]  = { 1, 2, 3, 4, 5};
int  elfspells [10 ][ 5] =
{{0,0,0,0,0},
{1,0,0,0,0},
{2,0,0,0,0},
{2,1,0,0,0},
{2,2,0,0,0},
{2,2,1,0,0},
{2,2,2,0,0},
{3,2,2,1,0},
{3,3,2,2,0},
{3,3,3,2,1}};

int  mspellshead [9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9};
int  magespells [37 ][ 9]  =
{{0,0,0,0,0,0,0,0,0},
{1,0,0,0,0,0,0,0,0},
{2,0,0,0,0,0,0,0,0},
{2,1,0,0,0,0,0,0,0},
{2,2,0,0,0,0,0,0,0},
{2,2,1,0,0,0,0,0,0},
{2,2,2,0,0,0,0,0,0},
{3,2,2,1,0,0,0,0,0},
{3,3,2,2,0,0,0,0,0},
{3,3,3,2,1,0,0,0,0},
{3,3,3,3,2,0,0,0,0},
{4,3,3,3,2,1,0,0,0},
{4,4,4,3,2,1,0,0,0},
{4,4,4,3,2,2,0,0,0},
{4,4,4,4,3,2,0,0,0},
{5,4,4,4,3,2,1,0,0},
{5,5,5,4,3,2,2,0,0},
{6,5,5,4,4,3,2,0,0},
{6,5,5,4,4,3,2,1,0},
{6,5,5,5,4,3,2,2,0},
{6,5,5,5,4,4,3,2,0},
{6,5,5,5,4,4,3,2,1},
{6,6,5,5,5,4,3,2,2},
{6,6,6,6,5,4,3,3,2},
{7,7,6,6,5,5,4,3,2},
{7,7,6,6,5,5,4,4,3},
{7,7,7,6,6,5,5,4,3},
{7,7,7,6,6,5,5,5,4},
{8,8,7,6,6,6,6,5,4},
{8,8,7,7,7,6,6,5,5},
{8,8,8,7,7,7,6,6,5},
{8,8,8,7,7,7,7,6,6},
{9,8,8,8,8,7,7,7,6},
{9,9,9,8,8,8,7,7,7},
{9,9,9,9,8,8,8,8,7},
{9,9,9,9,9,9,8,8,8},
{9,9,9,9,9,9,9,9,9}};
// *****************************************************************************
char  turnhead [14][20]  = {"Skeleton","Zombie","Ghoul","Wight","Wraith","Mummy","Spectre","Vampire","Phantom","Haunt","Spirit","Nightshade","Lich","Special"};
char turnsdefault [15][5]  = {"-","-","-","-","-","-","-","-","-","-","-","-","-","-"};
char  turns  [37 ][15] [20]  =
{{"-","-","-","-","-","-","-","-","-","-","-","-","-","-"},
{"7","9","11","-","-","-","-","-","-","-","-","-","-","-"},
{"T ","7","9","11","-","-","-","-","-","-","-","-","-","-"},
{"T","T","7","9","11","","-","-","-","-","-","-","-","-"},
{"D","T","T","7","9","11","-","-","-","-","-","-","-","-"},
{"D","D","T","T","7","9","11","-","-","-","-","-","-","-"},
{"D","D","D","T","T","7","9","11","-","-","-","-","-","-"},
{"D","D","D","D","T","T","7","9","11","-","-","-","-","-"},
{"D","D","D","D","D","T","T","7","9","11","-","-","-","-"},
{"D","D","D","D","D","D","T","T","7","9","11","-","-","-"},
{"D","D","D","D","D","D","T","T","7","9","11","-","-","-"},
{"D+","D","D","D","D","D","D","T","T","7","9","11","-","-"},
{"D+","D","D","D","D","D","D","T","T","7","9","11","-","-"},
{"D+","D+","D","D","D","D","D","D","T","T","7","9","11","-"},
{"D+","D+","D","D","D","D","D","D","T","T","7","9","11","-"},
{"D+","D+","D+","D","D","D","D","D","D","T","T","7","9","11"},
{"D+","D+","D+","D","D","D","D","D","D","T","T","7","9","11"},
{"D+","D+","D+","D+","D+","D+","D","D","D","D","T","T","7","9"},
{"D+","D+","D+","D+","D+","D+","D","D","D","D","T","T","7","9"},
{"D+","D+","D+","D+","D+","D+","D","D","D","D","T","T","7","9"},
{"D+","D+","D+","D+","D+","D+","D","D","D","D","T","T","7","9"},
{"D+","D+","D+","D+","D+","D+","D","D","D","D","D","T","T","7"},
{"D+","D+","D+","D+","D+","D+","D","D","D","D","D","T","T","7"},
{"D+","D+","D+","D+","D+","D+","D","D","D","D","D","D","T","7"},
{"D+","D+","D+","D+","D+","D+","D","D","D","D","D","D","T","7"},
{"D#","D+","D+","D+","D+","D+","D","D","D","D","D","D","T","T"},
{"D#","D+","D+","D+","D+","D+","D","D","D","D","D","D","T","T"},
{"D#","D+","D+","D+","D+","D+","D","D","D","D","D","D","T","T"},
{"D#","D+","D+","D+","D+","D+","D","D","D","D","D","D","T","T"},
{"D#","D#","D+","D+","D+","D+","D+","D","D","D","D","D","T","T"},
{"D#","D#","D+","D+","D+","D+","D+","D","D","D","D","D","T","T"},
{"D#","D#","D+","D+","D+","D+","D+","D","D","D","D","D","T","T"},
{"D#","D#","D+","D+","D+","D+","D+","D","D","D","D","D","T","T"},
{"D#","D#","D#","D+","D+","D+","D+","D+","D","D","D","D","T","T"},
{"D#","D#","D#","D+","D+","D+","D+","D+","D","D","D","D","T","T"},
{"D#","D#","D#","D+","D+","D+","D+","D+","D","D","D","D","T","T"},
{"D#","D#","D#","D+","D+","D+","D+","D+","D","D","D","D","T","T"}};
// *****************************************************************************
char  theifhead [8][20]  = {"Open Locks","Find Traps","Remove Traps","Climb Walls","Move Silently","Hide in Shadows","Pick Pockets","Hear Noise"};
//int  theifdefault = {0,0,0,0,0,0,0,0,0,0']
int  theifskills  [37][8]  = 
{{15,10,10,87,20,10,20,30},
{15,10,10,87,20,10,20,30},
{20,15,15,88,25,15,25,35},
{25,20,20,89,30,20,30,40},
{30,25,25,90,35,24,35,45},
{35,30,30,91,40,28,40,50},
{40,35,34,92,44,32,45,54},
{45,40,38,93,48,35,50,58},
{50,45,42,94,52,38,55,62},
{54,50,46,95,55,41,60,66},
{58,54,50,96,58,44,65,70},
{62,58,54,97,61,47,70,74},
{66,62,58,98,64,50,75,78},
{69,66,61,99,66,53,80,81},
{72,70,64,100,68,56,85,84},
{75,73,67,101,70,58,90,87},
{78,76,70,102,72,60,95,90},
{81,80,73,103,74,62,100,92},
{84,83,76,104,76,64,105,94},
{86,86,79,105,78,66,110,96},
{88,89,82,106,80,68,115,98},
{90,92,85,107,82,70,120,100},
{92,94,88,108,84,72,125,102},
{94,96,91,109,86,74,130,104},
{96,98,94,110,88,76,135,106},
{98,99,97,111,89,78,140,108},
{100,100,100,112,90,80,145,110},
{102,101,103,113,91,82,150,112},
{104,102,106,114,92,84,155,114},
{106,103,109,115,93,86,160,116},
{108,104,112,116,94,88,165,118},
{110,105,115,117,95,90,170,120},
{112,106,118,118,96,92,175,122},
{114,107,121,118,97,94,180,124},
{116,108,124,119,98,96,185,126},
{118,109,127,119,99,98,190,128},
{120,110,130,120,100,100,195,130}};
//***************************************************************************************/
int  fighterXP [36 ]={0, 2000, 4000, 8000, 16000, 32000, 64000, 120000, 240000, 360000, 480000, 600000, 720000, 840000, 960000, 1080000, 1200000, 1320000, 1440000, 1560000, 1680000, 1800000, 1920000, 2040000, 2160000, 2280000, 2400000, 2520000, 2640000, 2760000, 2880000, 3000000, 3120000, 3240000, 3360000, 3480000};
int  clericXP [36] = {0, 1500, 3000, 6000, 12000, 25000, 50000, 100000, 200000, 300000, 400000, 500000, 600000, 700000, 800000, 900000, 1000000, 1100000, 1200000, 1300000, 1400000, 1500000, 1600000, 1700000, 1800000, 1900000, 2000000, 2100000, 2200000, 2300000, 2400000, 2500000, 2600000, 2700000, 2800000, 2900000};
int  theifXP[36 ] = {0, 1200, 2400, 4800, 9600, 20000, 40000, 80000, 160000, 280000, 400000, 520000, 640000, 760000, 880000, 1000000, 1120000, 1240000, 1360000, 1480000, 1600000, 1720000, 1840000, 1960000, 2080000, 2200000, 2320000, 2440000, 2560000, 2680000, 2800000, 2920000, 3040000, 3160000, 3280000, 3400000};
int  mageXP [36] = {0, 2500, 5000, 10000, 20000, 40000, 80000, 150000, 300000, 450000, 600000, 750000, 900000, 1050000, 1200000, 1350000, 1500000, 1650000, 1800000, 1950000, 2100000, 2250000, 2400000, 2550000, 2700000, 2850000, 3000000, 3150000, 3300000, 3450000, 3600000, 3750000, 3900000, 4050000, 4200000, 4350000};
int  elfXP [20] = {0, 4000, 8000, 16000, 32000, 64000, 120000, 250000, 400000, 600000, 850000, 1100000, 1350000, 1600000, 1850000, 2100000, 2350000, 2600000, 2850000, 3100000};
int  dwarfXP [22] = {0, 2200, 4400, 8800, 17000, 35000, 70000, 140000, 270000, 400000, 530000, 660000, 800000, 1000000, 1200000, 1400000, 1600000, 1800000, 2000000, 2200000, 2400000, 2600000};
int  halfingXP [18] = {0, 2000, 4000, 8000, 16000, 32000, 64000, 120000, 300000, 600000, 900000, 1200000, 1500000, 1800000, 2100000, 2400000, 2700000, 3000000};

//**************************************************************************************************
char clericlvl1[9][35]={"Cure Light Wounds*","Detect Evil","Detect Magic","Light*","Protection from Evil"," Purify Food and Water"," Remove Fear*","Resist Cold"};
char clericlvl2[9][35]={"Bless*","Find Traps","Find Traps","Hold Person*","Know Alignment*"," Resist Fire","Silence 15' Radius","Snake Charm","Speak with Animals"};
char clericlvl3[9][35]={"Continual Light*","Cure Blindness *","Cure Disease*","Growth of Animal","Locate Object","Remove Curse*","Speak with the Dead","Striking"};
char clericlvl4[9][35]={"Animate Dead","create Water","Cure Serious Wounds*","Dispel Magic","Neutralize Poison*","Protection from Evil 10' Radius","Speak with Plants","Sticks to Snakes"};
char clericlvl5[9][35]={"Commune","Create Food","Cure Critical Wounds*","Dispel Evil","Insect Plague","Quest*","Raise Dead*","Truesight"};
char clericlvl6[9][35]={"Aerial Servant","Animate Objects","Barrier*","Create Normal Animals","Cureall","Find the Path","Speak with Monsters*","Word of Recall"};
char clericlvl7[9][35]={"Earthquake","Holy Word","Raise Dead Fully*","Restore*","Survival","Travel","Wish","Wizardry "};


char druidlvl1[4][35]={"Detect Danger","Faerie Fire","Locate","Predict Weather"};
char druidlvl2[4][35]={"Heat Metal","Obscure","Produce Fire","Warp Wood"};
char druidlvl3[4][35]={"Call Lightning","Hold Animal","Protection from Poison","Water Breathing"};
char druidlvl4[4][35]={"Control Temperature 10' radius","Plant Door","Protection from Lightning","Summon Animals"};
char druidlvl5[4][35]={"Anti-Plant Shell","Control Winds","Dissolve","Pass Plant"};
char druidlvl6[4][35]={"Anti-Animal Shell","Summon Weather","Transport Through Plants","Turn Wood"};
char druidlvl7[4][35]={"Creeping Doom","Metal to Wood","Summon Elemental","Weather Control"};


char magelvl1[13][35]={"Analyze","Charm Person","Detect Magic","Floating Disc","Hold Portal","Light*","Magic Missile","Protection from Evil","Read Languages","Read Magic","Shield","Sleep","Ventriloquism "};
char magelvl2[13][35]={"Continual Light*","Detect Evil","Detect Invisible","Entangle","ESP*","Invisibility","Knock","Levitate","Locate Object","Mirror Image","Phantasmal Force","Web","Wizard Lock "};
char magelvl3[13][35]={"Clairvoyance","Create Air","Dispel Magic","Fireball","Fly","Haste*","Hold Person*","Infravision","Invisibility 10' radius","Lightning Bolt","Protection from Evil 10' Radius","Protection from Normal Missiles","Water Breathing "};
char magelvl4[13][35]={"Charm Monster","Clothform","Confusion","Dimension Door","Growth of Plants*","Hallucinatory Terrain","Ice Storm/Wall of Ice","Massmorph","Polymorph Other","Polymorph Self","Remove Curse*","Wall of Fire","Wizard Eye "};
char magelvl5[13][35]={"Animate Dead","Cloudkill","Conjure Elemental","Contact Outer Plane","Dissolve*","Feeblemind","Hold Monster*","Magic Jar","Passwall","Telekinesis","Teleport","Wall of Stone","Woodform "};
char magelvl6[13][35]={"Anti-Magic Shell","Death Spell","Disintegrate","Geas*","Invisible Stalker","Lower Water","Move Earth","Projected Image","Reincarnation","Stone to Flesh*","Stoneform","Wall of Iron","Weather Control "};
char magelvl7[13][35]={"Charm Plant","Create Normal Monsters","Delayed Blast Fireball","Ironform","Lore","Magic Door*","Mass Invisibility*","Power Word Stun","Reverse Gravity","Statue","Summon Object","Sword","Teleport Any Object "};
char magelvl8[13][35]={"Clone","Create Magical Monsters","Dance","Explosive Cloud","Force Field","Mass Charm*","Mind Barrier*","Permanence","Polymorph any Object","Power Word Blind","Steelform","Symbol","Travel "};
char magelvl9[13][35]={"Contingency","Create Any Monster","Gate*","Heal","Immunity","Maze","Meteor Swarm","Power Word Kill","Prismatic Wall","Shapechange","Survival","Timestop","Wish "};


char chHeight[10][12] = {"4 ft 10 in","5 ft 0 in","5 ft 2 in","5 ft 4 in","5 ft 6 in","5 ft 8 in","5 ft 10 in","6 ft 0 in","6 ft 2 in","6 ft 4 in"};

char chEyes[6][20] ={"Amber","Brown","Hazel","Green","Blue" , "Gray"};


#endif
