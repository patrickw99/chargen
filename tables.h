#ifndef __tables__
#define __tables__
// *************************************************** attack Table **********************
extern int attackhead [];
//int  attackdefault [41] As Integer = {,,,,,,,,,,, ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,},
extern int  fighterattack  [][43];
extern int  ctdattack [][43] ;
extern int  mageattack [][43];
extern int  dhattack  [][43];
//******************************************************************************
extern std::string  saveshead [];
//int  savesdefault = {,,,,,,}
extern int  fightersaves  [][7];
extern int  magesaves  [][7] ;
extern int  theifsaves  [][7];
extern int  clericsaves [][7] ;
extern int  elfsaves [][7] ;
extern int  dwarfsaves[][7];
extern int  halflingsaves [][7];
// *****************************************************************************
extern int  cspellshead [];
extern int  clericspells [][9];
extern int  espellshead [];
extern int  elfspells [][5];
extern int  mspellshead [];
extern int  magespells [][9];
// *****************************************************************************
#define clSkeleton 0
#define clZombie  1
#define clGhoul 2
#define clWight 3
#define clWraith 4
#define clMummy 5
#define clSpectre 6
#define clVampire 7
#define clPhantom 8
#define clHaunt 9
#define clSpirit 10
#define clNightshade 11
#define clLich 12
#define clSpecial 13

extern std::string  turnhead [] ;
extern std::string turnsdefault [];
extern int turns  [][14] ;
// *****************************************************************************
extern std::string  theifhead [] ;
//int  theifdefault = {0,0,0,0,0,0,0,0,0,0']
extern int  theifskills  [][8] ;
//***************************************************************************************/
extern int  fighterXP [ ];
extern int  clericXP [];
extern int  theifXP[ ] ;
extern int  mageXP [] ;
extern int  elfXP [] ;
extern int  dwarfXP [];
extern int  halfingXP [];

//**************************************************************************************************
extern std::string  clericlvl1[];
extern std::string  clericlvl2[];
extern std::string  clericlvl3[];
extern std::string  clericlvl4[];
extern std::string  clericlvl5[];
extern std::string  clericlvl6[];
extern std::string  clericlvl7[];


extern std::string  druidlvl1[];
extern std::string  druidlvl2[];
extern std::string  druidlvl3[];
extern std::string  druidlvl4[];
extern std::string  druidlvl5[];
extern std::string  druidlvl6[];
extern std::string  druidlvl7[];


extern std::string magelvl1[];
extern std::string magelvl2[];
extern std::string magelvl3[];
extern std::string magelvl4[];
extern std::string magelvl5[];
extern std::string magelvl6[];
extern std::string magelvl7[];
extern std::string magelvl8[];
extern std::string magelvl9[];

// Height
#define FourTen 0
#define Five	1
#define FiveTwo	2
#define FiveFour	3
#define FiveSix	4
#define FiveEight	5
#define FiveTen	6
#define	Six	7
#define SixTwo	8
#define SixFour	9

//string chHeight[10]= {"4 ft 10 in","5 ft 0 in","5 ft 2 in","5 ft 4 in","5 ft 6 in","5 ft 8 in","5 ft 10 in","6 ft 0 in","6 ft 2 in","6 ft 4 in"};
// hair color

#define BlackHair	0
#define GrayHair	1
#define PlatinumHair	2
#define WhiteHair	3
#define DarkBlondeHair	4
#define BlondeHair	5
#define BleachBlondeHair	6
#define DarkRedHair	7
#define RedHair    8
#define LightRedHair	9
#define BrunetteHair	10
#define AuburnHair	11
//char chHair[12][20] = {"Black","Gray","Platinum","White","Dark Blonde","Blonde","Bleach Blonde", "Dark Redhead","Redhead","Light Redhead","Brunette","Auburn"};
// Eye color
#define amberEyes	0
#define brownEyes	1
#define hazelEyes	2
#define greenEyes	3
#define blueEyes	4
#define greyEyes	5
//char chEyes[6][20] ={"Amber","Brown","Hazel","Green","Blue" , "Gray"};
// Skin Color

#define PaleSkin	0
#define FairSkin	1
#define LightSkin	2
#define LightTanSkin	3
#define TanSkin	4
#define DarkTanSkin	5
#define BrownSkin	6
#define DarkBrownSkin	7
#define BlackSkin	8
extern std::string chSkinColor [] ;

#define Fighter 0
#define Cleric 1
#define Mage 2
#define Thief  3
#define Druid 4
#define Mystic 5
#define Human 6
#define Elf 7
#define Dwarf 8
#define Halfling 9

extern std::string  chclass [];

#define Lawful 0
#define Neutral 1
#define Chaotic 2
extern std::string  chalignment [];

#define Male 0
#define Female 1
extern std::string  chsex [];

#endif
