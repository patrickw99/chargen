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
	char  cHair[20]  ;
	char  cEyes[20] ;
	char  cFullName[20] ;
	char  cAlignment [20];

	int   cattack [42] ;

	int   cXPAdj  ;
	int   cXPTotal;
	int   cPrimeReq ;

	int   cAC;
	int   cHitPoint;
	int   cDamage;

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
	char  cturns [17] ;
	int   cCspell [10] ;
	int   cmespell[12] ;
	int   ctskill [11]  ;

	void chooseSex ();
	void chooseHeight() ;
	void chooseHair()  ;
	void chooseWeight( );
	void charMovement();
	void chooseEye () ;
	void abilitiesadj () ;
	void abilities () ;
	void chooseclass ( ) ;
	
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
	char *Hair  ();
	char *Eyes () ;
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
	int  MagicWands ();
	int  ParalysisStone ();
	int  BreathAttack ();
	int  RodStaffSpell ();
	int  DeathRayPoison ();
//// ***************cleric/druid turns****************************'
	int  Skeleton ();
	int  Zombie ();
	int  Ghoul ();
	int  Wight ();
	int  Wraith ();
	int  Mummy ();
	int  Spectre ();
	int  Vampire ();
	int  Phantom ();
	int  Haunt ();
	int  Spirit ();
	int  Nightshade ();
	int  Lich ();
	int  Special ();

 //// ******************************Theif Skills*****************'
	int  OpenLocks ();
	int  FindTraps ();
	int  RemoveTraps ();
	int  ClimbWalls ();
	int  MoveSilently ();
	int  HideinShadows ();
	int  PickPockets ();
	int  HearNoise ();






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
char *charclass::Hair(){
	return charclass::cHair;
}
char *charclass::Eyes() {
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
int charclass::OpenLocks() {
	return charclass::ctskill [1];
}
int charclass::FindTraps() {
	return charclass::ctskill [2];
}
int charclass::RemoveTraps() {
	return charclass::ctskill [3];
}
int charclass::ClimbWalls() {
	return charclass::ctskill [4];
}
int charclass::MoveSilently() {
	return charclass::ctskill [5];
}
int charclass::HideinShadows() {
	return charclass::ctskill [6];
}
int charclass::PickPockets() {
	return charclass::ctskill [7];
}
int charclass::HearNoise() {
	return charclass::ctskill [8];
}
// ******************saving throws ***********************'
int charclass::DeathRayPoison () {
	return charclass::csaves[2];
}

int charclass::MagicWands () {
	return charclass::csaves[3];
}
int charclass::ParalysisStone () {
	return charclass::csaves[4];
}
int charclass::BreathAttack () {
	return charclass::csaves[5];
}
int charclass::RodStaffSpell () {
	return charclass::csaves[6];
};

// ***************cleric/druid turns****************************'
int charclass::Skeleton () {
	return charclass::cturns[3];
}
int charclass::Zombie () {
	return charclass::cturns[4];
}
int charclass::Ghoul () {
	return charclass::cturns[5];
}
int charclass::Wight () {
	return charclass::cturns[6];
}
int charclass::Wraith () {
	return charclass::cturns[7];
}
int charclass::Mummy () {
	return charclass::cturns[8];
}
int charclass::Spectre () {
	return charclass::cturns[9];
}
int charclass::Vampire () {
	return charclass::cturns[10];
}
int charclass::Phantom () {
	return charclass::cturns[11];
}
int charclass::Haunt () {
	return charclass::cturns[12];
}
int charclass::Spirit () {
	return charclass::cturns[13];
}
int charclass::Nightshade () {
	return charclass::cturns[14];
}
int charclass::Lich () {
	return charclass::cturns[15];
}
int charclass::Special () {
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
	
		if (cMoveEnc >=0 && cMoveEnc <= 400){
			cMoveNor = 120;
			cMoveEnc = 40;
			cMoveRun = 120;
		} else if ( cMoveEnc >=401 && cMoveEnc<= 800){
			cMoveNor = 90;
			cMoveEnc = 30;
			cMoveRun = 90;
		} else if ( cMoveEnc >= 801 && cMoveEnc<= 1200){
			cMoveNor = 60;
			cMoveEnc = 20;
			cMoveRun = 60;
		} else if ( cMoveEnc >=1201 && cMoveEnc<=1600){
			cMoveNor = 30;
			cMoveEnc = 10;
			cMoveRun = 30;
		} else if ( cMoveEnc >= 1601 && cMoveEnc<= 2400){
			cMoveNor = 15;
			cMoveEnc = 5;
			cMoveRun = 15;
		} else {
			cMoveNor = 0;
			cMoveEnc = 0;
			cMoveRun = 0;
		}

}
Sub int charclass::chooseEye ()
	dim  eye  { = rollDice(1, 100)
select case eye
		case 1 to 16
			cEyes = "Amber"
		case 17 to 36
			cEyes = "Brown"
		case 37 to 52
			cEyes = "Hazel"
		case 53 to 68
			cEyes = "Green"
		case 69 to 84
			cEyes = "Blue"
		case 85 to 100
			cEyes = "Gray"
	end select
end Sub
Sub int charclass::chooseHair ()
	dim  hair  { = rollDice(1, 100)
select case hair
	case 1 to 12
	cHair = "Black"
	case 13 to 20
	cHair = "Gray"
	case 21 to 28
	cHair = "Platinum"
	case 29 to 36
	cHair =  "White"
	case 37 to 44
	cHair = "Dark Blonde"
	case 45 to 52
	cHair = "Blonde"
	case 53 to 60
	cHair = "Bleach Blonde"
	case 61 to 68
	cHair =  "Dark Redhead"
	case 69 to 76
	cHair =  "Redhead"
	case 77 to 84
	cHair = "Light Redhead"
	case 85 to 92
	cHair =  "Brunette"
	case 93 to 100
	cHair = "Auburn"
end select
end Sub
Function int charclass::abilitiesadj (ability ) {

    if (ability = 3)
    {
          return(-3) ;
    }
    else if (abbility >=4 && ability <=5)
    {
       return (-2);
    }
     else if (abbility >=6 && ability <=8)
    {
        return (-1);
    }



   Select Case ability
   	Case 3
        abilitiesadj = -3
   	Case 4to 5
        abilitiesadj = -2
   	case 6 To 8
        abilitiesadj = -1
   	case 9 To 1
        abilitiesadj = 0
   	Case 13 To 15
       abilitiesadj = 1
   	Case 16 To 17
        abilitiesadj = 2
   	Case 18
        abilitiesadj = 3
 end Select
}
Sub int charclass::abilities()
    Dim x { = LBound (cAbility)
    Dim y {  = UBound (cAbility)
    Dim  i {
        for i = LBound(cAbility) To UBound (cAbility)
        cAbility(i) = RollDice(3,6);
        //'Print "cability: "; cability(i)
    Next
   for i = LBound(cadjust) To UBound (cadjust)
        cadjust(i) = abilitiesadj(cability(i));
        //'Print "CAdjust: "; cadjust(i)
    Next
End Sub
Function int charclass::chooseclass() {
	Dim ClassChoice(0 to 8) {
	Dim count { =1
	dim rclass {
	dim ccount {  = -1

	do
	If cAbility[1] >= 9 Then
		classChoice(count) = Fighter
		count += 1
		ccount=1
	EndIf

	If cAbility[2] >= 9 then
      classChoice(count) = Mage
    	count += 1
    	ccount=1
	EndIf

    if cAbility[3] >= 9 Then
    	classChoice(count) = cleric
    	count += 1
    	ccount=1
    EndIf

    if cAbility[4] >= 9 Then
    	classChoice(count) = theif
    	count += 1
    	ccount=1
    EndIf

    if cAbility[1] >= 9 And  cAbility[2] >= 9 then
        classChoice(count) = Elf
        count += 1
        ccount=1
    EndIf

    if cAbility[1] >= 9 And  cAbility[5] >= 9 Then
        classChoice(count) =dwarf
        count += 1
        ccount=1
    EndIf

    if cAbility[1] >= 9 And  cAbility[4] >= 9 and cAbility[5] >= 9 Then
        classChoice(count) = halfling
        count += 1
        ccount=1
    EndIf
    if ccount = -1 then
    abilities()
    endif
    loop while ccount = -1
    do
    rclass = pick(ClassChoice())
    loop while rclass = 0
    return rclass


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
