#include "cgen.h"
#include "dice.h"
#include "tables.h"
#include <string.h>
class charclass {
// Private :
	int  cAbility [7] ;
	int  cadjust[7];
	int  cprebonus  ;

	char  cRace [20];
	int   cSex ;
	char  cHeight[20] ;
	int	  chrHeight;
	int   cWeight;
	int   cAge;
	int   cHair  ;
	int   cEyes ;
	char  cFullName[20] ;
	char  cAlignment [20];

	int   cattack [42] ;

	int   cXPAdj  ;
	int   cXPTotal;
	int   cPrimeReq ;

	int   cAC;
	int   cHitPoint;
	int   cDamage;

	int   cEnc;
	int   cMoveNor;
	int   cMoveEnc;
	int   cMoveRun;
	int   cMoveOther;

	int   cMoneyPP [3] ;
	int   cMoneyGP [3];
	int   cMoneyEP [3];
	int   cMoneySP [3]  ;
	int   cMoneyCP [3];

	int   cClass ;
	int   cLevel ;

	int   csaves [10] ;
	char  cturns [17][20] ;
	int   cCspell [10] ;
	int   cmespell[12] ;
	int   ctskill [11]  ;

	void chooseSex ();
	void chooseHeight() ;
	void chooseHair()  ;
	void chooseWeight( );
	void charMovement();
	void chooseEye () ;
	int abilitiesadj (int ability) ;
	void abilities () ;
	int chooseclass ( ) ;
	void chooseSpells();
	void TheifSkill();
	void ClericTurn();
	void attackroll() ;
	void savingthrows();
public :

//// ******************character attributs***********************'
	int  AC ();
	int  HitPoint ();
	int  Damage ();
	int  MoveNor ();
	int  MoveEnc ();
	int  MoveRun ();
	int  MoveOther ();
	char *Race () ;
	int  Sex  ();
	char *Height () ;
	int  Weight  ();
	int  Age  ();
	int Hair  ();
	int  Eyes () ;
	char *FullName  ();
	int  CharacterClass ();
	int  Level ();

//// ***************************Abilities************************
	int  Strength ();
	int  Intellegence ();
	int  Wisdom ();
	int  Dexterity ();
	int  Constitution ();
	int  Charisma ();

// ************************Ability Adjustments********************
	int  StrengthAdjustment ();
	int  IntellegenceAdjustment ();
	int  WisdomAdjustment ();
	int  DexterityAdjustment ();
	int  ConstitutionAdjustment ();
	int  CharismaAdjustment ();

//// ******************saving throws ***********************'
	int  cMagicWands ();
	int  cParalysisStone ();
	int  cBreathAttack ();
	int  cRodStaffSpell ();
	int  cDeathRayPoison ();
//// ***************cleric/druid turns****************************'
	int  cSkeleton ();
	int  cZombie ();
	int  cGhoul ();
	int  cWight ();
	int  cWraith ();
	int  cMummy ();
	int  cSpectre ();
	int  cVampire ();
	int  cPhantom ();
	int  cHaunt ();
	int  cSpirit ();
	int  cNightshade ();
	int  cLich ();
	int  cSpecial ();

 //// ******************************Theif Skills*****************'
	int  cOpenLocks ();
	int  cFindTraps ();
	int  cRemoveTraps ();
	int  cClimbWalls ();
	int  cMoveSilently ();
	int  cHideinShadows ();
	int  cPickPockets ();
	int  cHearNoise ();






//'public function
void   rollchar();




};

// ***************************Abilities************************
int charclass::Strength () {
	return charclass::cAbility[1];
}
int charclass::Intellegence () {
	return charclass::cAbility[2];
}
int charclass::Wisdom () {
	return charclass::cAbility[3];
}
int charclass::Dexterity () {
	return charclass::cAbility[4];
}
int charclass::Constitution () {
	return charclass::cAbility[5];
}
int charclass::Charisma () {
	return charclass::cAbility[6];
}

// ************************Ability Adjustments********************
int charclass::StrengthAdjustment () {
	return charclass::cadjust[1];
}
int charclass::IntellegenceAdjustment () {
	return charclass::cadjust[2];
}
int charclass::WisdomAdjustment () {
	return charclass::cadjust[3];
}
int charclass::DexterityAdjustment () {
	return charclass::cadjust[4];
}
int charclass::ConstitutionAdjustment () {
	return charclass::cadjust[5];
}
int charclass::CharismaAdjustment () {
	return charclass::cadjust[6];
}
// *****************character attributes. '
int charclass::AC (){
	return charclass::cAC;
}
int charclass::HitPoint() {
	return charclass::cHitPoint;
}
int charclass::Damage() {
	return charclass::cDamage;
}
int charclass::MoveNor() {
	return charclass::cMoveNor;
}
int charclass::MoveEnc() {
	return charclass::cMoveEnc;
}
int charclass::MoveRun() {
	return charclass::cMoveRun;
}
int charclass::MoveOther() {
	return charclass::cMoveOther;
}
char *charclass::Race (){
	return charclass::cRace;//[];
}
int charclass::Sex()  {
	return charclass::cSex;
}
char *charclass::Height(){
	return charclass::cHeight;
}
int charclass::Weight()  {
	return charclass::cWeight;
}
int charclass::Age()  {
	return charclass::cAge;
}
int charclass::Hair(){
	return charclass::cHair;
}
int charclass::Eyes() {
	return charclass::cEyes;
}
char *charclass::FullName(){
	return charclass::cFullName;
}
int charclass::CharacterClass() {
	return charclass::cClass;
}
int charclass::Level() {
	return charclass::cLevel;
}
 // ******************************Theif Skills*****************'
int charclass::cOpenLocks() {
	return charclass::ctskill [1];
}
int charclass::cFindTraps() {
	return charclass::ctskill [2];
}
int charclass::cRemoveTraps() {
	return charclass::ctskill [3];
}
int charclass::cClimbWalls() {
	return charclass::ctskill [4];
}
int charclass::cMoveSilently() {
	return charclass::ctskill [5];
}
int charclass::cHideinShadows() {
	return charclass::ctskill [6];
}
int charclass::cPickPockets() {
	return charclass::ctskill [7];
}
int charclass::cHearNoise() {
	return charclass::ctskill [8];
}
// ******************saving throws ***********************'
int charclass::cDeathRayPoison () {
	return charclass::csaves[2];
}

int charclass::cMagicWands () {
	return charclass::csaves[3];
}
int charclass::cParalysisStone () {
	return charclass::csaves[4];
}
int charclass::cBreathAttack () {
	return charclass::csaves[5];
}
int charclass::cRodStaffSpell () {
	return charclass::csaves[6];
};

// ***************cleric/druid turns****************************'
int charclass::cSkeleton () {
	return charclass::cturns[3];
}
int charclass::cZombie () {
	return charclass::cturns[4];
}
int charclass::cGhoul () {
	return charclass::cturns[5];
}
int charclass::cWight () {
	return charclass::cturns[6];
}
int charclass::cWraith () {
	return charclass::cturns[7];
}
int charclass::cMummy () {
	return charclass::cturns[8];
}
int charclass::cSpectre () {
	return charclass::cturns[9];
}
int charclass::cVampire () {
	return charclass::cturns[10];
}
int charclass::cPhantom () {
	return charclass::cturns[11];
}
int charclass::cHaunt () {
	return charclass::cturns[12];
}
int charclass::cSpirit () {
	return charclass::cturns[13];
}
int charclass::cNightshade () {
	return charclass::cturns[14];
}
int charclass::cLich () {
	return charclass::cturns[15];
}
int charclass::cSpecial () {
	return charclass::cturns[16];
}

//'Private functions and sub's
void charclass::chooseSex(){
	charclass::cSex = RollDice(1,2);

}

void charclass::chooseHeight (){
int height ;
 height = RollDice(1, 10);
 switch (height){
	case 1:		chrHeight = height; strncpy(cHeight ,chHeight[0],20); break;
	case 2:		chrHeight = height;strncpy(cHeight ,chHeight[1],20); break;
	case 3: 	chrHeight = height;strncpy(cHeight ,chHeight[2],20); break;
	case 4:		chrHeight = height;strncpy(cHeight ,chHeight[3],20); break;
	case 5:		chrHeight = height;strncpy(cHeight ,chHeight[4],20); break;
	case 6:		chrHeight = height;strncpy(cHeight ,chHeight[5],20); break;
	case 7:		chrHeight = height;strncpy(cHeight ,chHeight[6],20); break;
	case 8:		chrHeight = height;strncpy(cHeight ,chHeight[7],20); break;
	case 9:		chrHeight = height;strncpy(cHeight ,chHeight[8],20); break;
	case 10:	chrHeight = height;strncpy(cHeight ,chHeight[9],20); break;
}
}
void charclass::chooseWeight (){

switch (chrHeight){
	
    case 1:
        if (cSex == Male){ 
			cWeight = rnd_range (1100,1199);
        }else{
            cWeight = rnd_range (1050,1099);
        }break;

    case 2:

       if (cSex == Male ){ 
           cWeight = rnd_range (1200,1299);
         }else{
           cWeight = rnd_range (1100 , 1199);
        }break;
    case 3:

       if (cSex  == Male  ){
            cWeight = rnd_range (1300,1399);
         }else{
            cWeight = rnd_range (1200,1249);
       }break;
    case 4:
        if (cSex == Male ){
            cWeight = rnd_range (1400,1499);
        }else{
            cWeight = rnd_range (1250,1299);
        }break;
    case 5:
        if (cSex == Male  ){
           cWeight = rnd_range (1500,1549);
         }else{
           cWeight = rnd_range (1300,1399);
         }break;
    case 6:
       if (cSex  == Male  ){
            cWeight = rnd_range (1550, 1649);
         }else{
            cWeight = rnd_range ( 1400,1499);
         }break;
    case 7:
       if (cSex  == Male  ){
            cWeight = rnd_range (1650,1749);
         }else{
            cWeight = rnd_range (1500,1549);
        }break;
    case 8:
       if (cSex  == Male  ){
           cWeight = rnd_range (1750,1849);
         }else{
            cWeight = rnd_range (1550,1649);
        }break;
    case  9:
       if (cSex  == Male  ){
            cWeight = rnd_range (1850,1999);
         }else{
            cWeight = rnd_range (1650,1749);
         }
         break;
    case 10:
        if (cSex  == Male  ){
           cWeight = rnd_range ( 2000,2100);
         }else{
            cWeight = rnd_range (1750,1850);
         }
	 }

}
void charclass::charMovement(){
	
		if (cEnc >=0 && cEnc <= 400){
			cMoveNor = 120;
			cMoveEnc = 40;
			cMoveRun = 120;
		} else if ( cEnc >=401 && cEnc<= 800){
			cMoveNor = 90;
			cMoveEnc = 30;
			cMoveRun = 90;
		} else if ( cEnc >= 801 && cEnc<= 1200){
			cMoveNor = 60;
			cMoveEnc = 20;
			cMoveRun = 60;
		} else if ( cEnc >=1201 && cEnc<=1600){
			cMoveNor = 30;
			cMoveEnc = 10;
			cMoveRun = 30;
		} else if ( cEnc >= 1601 && cEnc<= 2400){
			cMoveNor = 15;
			cMoveEnc = 5;
			cMoveRun = 15;
		} else {
			cMoveNor = 0;
			cMoveEnc = 0;
			cMoveRun = 0;
		}

}
void charclass::chooseEye (){
	int   eye   = RollDice(1, 100);
	if (eye >= 1  && eye >= 16){
			cEyes = 1;
	} else if (eye >= 17 && eye >=36){
			cEyes = 2;
	} else if (eye >= 37 && eye >=52){
			cEyes = 3;
	} else if (eye >= 53 && eye >=68){
			cEyes = 4;
	} else if (eye >= 69 && eye >=4){
			cEyes =5;
	} else if (eye >=  85 && eye >=100){
			cEyes =6;
	}
	
}
void charclass::chooseHair (){
	int   hair   = RollDice(1, 100);

	if (hair >= 1 && hair >=  12){
	cHair = BlackHair;
	}else if  (hair >= 13 && hair >=   20){
	cHair = GrayHair;
	}else if  (hair >=  21 && hair >=   28){
	cHair = PlatinumHair;
	}else if  (hair >=  29 && hair >=   36){
	cHair = WhiteHair;
	}else if  (hair >=  37 && hair >=   44){
	cHair = DarkBlondeHair;
	}else if  (hair >=  45 && hair >=   52){
	cHair = BlondeHair;
	}else if  (hair >=  53 && hair >=   60){
	cHair = BleachBlondeHair;
	}else if  (hair >=  61 && hair >=   68){
	cHair =  DarkRedHair;
	}else if  (hair >=  69 && hair >=   76){
	cHair =  RedHair;
	}else if  (hair >=  77 && hair >=   84){
	cHair = LightRedHair;
	}else if  (hair >= 85 && hair >=   92){
	cHair =  BrunetteHair;
	}else if  (hair >=  93 && hair >=   100){
	cHair = AuburnHair;
 }
}
 int charclass::abilitiesadj (int ability) {
   int adjust;
   	 if (ability >= 3){
        adjust=-3;
   	 }else if (ability >= 4 && ability <= 5){
        adjust= -2;
   	 }else if (ability >= 6 && ability <= 8){
        adjust=-1;
   	} else if (ability >= 9 && ability <= 1){
       adjust=0;
   	} else if (ability >= 13 && ability <= 15){
       adjust=1;
   	} else if (ability >= 16 && ability <= 17){
        adjust=2;
   	} else if (ability >= 18){
        adjust= 3;
 }
 return (adjust);
}
void charclass::abilities(){
    
    int i; 
    for (i = 0 ; i<= 7 ; i++){
        cAbility[i] = RollDice(3,6);
        cadjust[i] = abilitiesadj(cAbility[i]);
   }
   
}

int charclass::chooseclass() {
	int ClassChoice [8]= {0,0,0,0,0,0,0,0};
	int count  =1;
	int rclass =0;
	int ccount  = -1;

 while (ccount == -1){
	if (cAbility[1] >= 9 ){
		ClassChoice[count] = Fighter;
		count += 1;
		ccount=1;
	}

	if (cAbility[2] >= 9 ){
      ClassChoice[count] = Mage;
    	count += 1;
    	ccount=1;
	}

    if (cAbility[3] >= 9) {
    	ClassChoice[count] = Cleric;
    	count += 1;
    	ccount=1;
    }

    if (cAbility[4] >= 9) {
    	ClassChoice[count] = Theif;
    	count += 1;
    	ccount=1;
    }

    if (cAbility[1] >= 9 &&  cAbility[2] >= 9) {
        ClassChoice[count] = Elf;
        count += 1;
        ccount=1;
    }

    if (cAbility[1] >= 9 &&  cAbility[5] >= 9) {
        ClassChoice[count] =Dwarf;
        count += 1;
        ccount=1;
    }

    if (cAbility[1] >= 9 &&  cAbility[4] >= 9 && cAbility[5] >= 9 ){
        ClassChoice[count] = Halfling;
        count += 1;
        ccount=1;
    }
    if (ccount == -1) {
    abilities();
	}
}
   while (rclass == 0){
    rclass = ClassChoice [rnd_range(0, 8)];
}
    return rclass;


}

void charclass::savingthrows(){
int i;
	int b;
	
	switch (cClass){
	case	Fighter:
		for (i = 0 ; i<= 13 ; i++){
			if (cLevel >= fightersaves  [i][0] && cLevel <= fightersaves  [i][1]){
				for (b=2 ; b>= 7; b++){
					csaves[b-2]= fightersaves  [i][b];
				}
			}
		}
	 break;
	case	Cleric:
	for (i = 0 ; i<= 9 ; i++){
			if (cLevel >= clericsaves  [i][0] && cLevel <= clericsaves  [i][1]){
				for (b=2 ; b>= 7; b++){
					csaves[b-2]= clericsaves  [i][b];
				}
			}
		}
	 break;
	
	case	Theif:
	 for (i = 0 ; i<= 9; i++){
			if (cLevel >= theifsaves  [i][0] && cLevel <= theifsaves  [i][1]){
				for (b=2 ; b>= 7; b++){
					csaves[b-2]= theifsaves  [i][b];
				}
			}
		}
	 
	 break;
	case	Mage:
	for (i = 0 ; i<=8 ; i++){
			if (cLevel >= magesaves  [i][0] && cLevel <= magesaves  [i][1]){
				for (b=2 ; b>= 7; b++){
					csaves[b-2]= magesaves  [i][b];
				}
			}
		}
	 break;
	case	Elf:
	for (i = 0 ; i<= 4 ; i++){
			if (cLevel >= elfsaves  [i][0] && cLevel <= elfsaves  [i][1]){
				for (b=2 ; b>= 7; b++){
					csaves[b-2]= elfsaves  [i][b];
				}
			}
		}
	 break;
	case	Dwarf:
	for (i = 0 ; i<= 4; i++){
			if (cLevel >= dwarfsaves  [i][0] && cLevel <= dwarfsaves  [i][1]){
				for (b=2 ; b>= 7; b++){
					csaves[b-2]= dwarfsaves  [i][b];
				}
			}
		}
	 break;
	case	Halfling:
	 for (i = 0 ; i<= 3 ; i++){
			if (cLevel >= halflingsaves  [i][0] && cLevel <= halflingsaves  [i][1]){
				for (b=2 ; b>= 7; b++){
					csaves[b-2]= halflingsaves  [i][b];
				}
			}
		}
	 
	 break;
	
	
		
	}	
}
void charclass::attackroll() {

int i; 
int b;
	
	switch (cClass){
	case	Fighter:
		for (i = 0 ; i<= 13 ; i++){
			if (cLevel >= fighterattack  [i][0] && cLevel <= fighterattack  [i][1]){
				for (b=2 ; b>= 43; b++){
					cattack[b-2]= fighterattack  [i][b];
				}
			}
		}
	 break;
	case	Cleric:
	case	Theif:
	 for (i = 0 ; i<= 10 ; i++){
			if (cLevel >= ctdattack  [i][0] && cLevel <= ctdattack  [i][1]){
				for (b=2 ; b>= 43; b++){
					cattack[b-2]= ctdattack  [i][b];
				}
			}
		}
	 
	 break;
	case	Mage:
	for (i = 0 ; i<= 15 ; i++){
			if (cLevel >= mageattack  [i][0] && cLevel <= mageattack  [i][1]){
				for (b=2 ; b>= 43; b++){
					cattack[b-2]= mageattack  [i][b];
				}
			}
		}
	 break;
	case	Elf:
	case	Dwarf:
	case	Halfling:
	 for (i = 0 ; i<= 15 ; i++){
			if (cLevel >= dhattack  [i][0] && cLevel <= dhattack  [i][1]){
				for (b=2 ; b>= 43; b++){
					cattack[b-2]= dhattack  [i][b];
				}
			}
		}
	 
	 break;
	
	
		
	}
}

void charclass::chooseSpells(){
	
}
void charclass::TheifSkill(){

int b;
			
				for (b=0 ; b>= 8; b++){
					ctskill[b]= theifskills  [cLevel][b];
				}
		
		
}

void charclass::ClericTurn(){
	int b;
	for (b=0 ; b>=14;  b++){
		strncpy(cturns [b], turns[cLevel][b],20);
	}
}

	
	
	
	
	
	
	
	
	
	
	
	
	

//driver / test
//#ifdef test
//Dim charclass As CbaseClass
//Dim x {

//For x=0 To 5

//charclass.rollchar()
//Print "str: ";charclass.cAbility[1],"int: ";charclass.cAbility[2],"wis: ";charclass.cAbility[3],"dex: ";charclass.cAbility[4],"con: ";charclass.cAbility[5],"chr: ";charclass.cAbility[6]
//Print "stradj: ";charclass.cadjust[1],"intadj: ";charclass.cadjust[2],"wisadj: ";charclass.cadjust[3],"dexadj: ";charclass.cadjust[4],"conadj: ";charclass.cadjust[5],"chradj: ";charclass.cadjust[6]
//Print "sex: ";charclass.cSex,"Height:"; charclass.cHeight, "Weight: ";  charclass.cWeight, "hair:";  charclass.cHair, "eyes: ";  charclass.ceyes

//select case charclass.cclass
	//case 1
	//Print "class: Fighter"
	//case 2
	//Print "class: Cleric"
	//case 3
	//Print "class: Mage"
	//case 4
	//Print "class: Theif"
	//case 5
	//Print "class: Elf"
	//c//ase 6
	//Print "class: Dwarf"
	//case 7
	//Print "class: Halfling"

//end select

//Print "class: "; charclass.cclass
//Next x
//Sleep
//#endif
