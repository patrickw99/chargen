 #ifndef __cgen__
 #define __cgen__



class charclass
{

// Private :
    int cAbility[7];
    int cadjust[7];
    int cprebonus;
    int cRace;
    int cSex;
    std::string cHeight;
    int chrHeight;
    int cWeight;
    int cAge;
    int cHair;
    int cEyes;
    std::string cFullName;
    std::string cAlignment;
    int cattack[42];
    int cXPAdj;
    int cXPTotal;
    int cPrimeReq;
    int cAC;
    int cHitPoint;
    int cDamage;
    int cEnc;
    int cMoveNor;
    int cMoveEnc;
    int cMoveRun;
    int cMoveOther;
    int cMoneyPP[3];
    int cMoneyGP[3];
    int cMoneyEP[3];
    int cMoneySP[3];
    int cMoneyCP[3];
    int cClass;
    int cLevel;
    int csaves[10];
    int cturns[17];
    int cCspell[10];
    int cmespell[12];
    int ctskill[11];
// private functions
    void chooseSex ();
    void chooseHeight ();
    void chooseHair ();
    void chooseWeight ();
    void charMovement ();
    void chooseEye ();
    int abilitiesadj (int ability);
    void abilities ();
    int chooseclass ();
    void chooseSpells ();
    void TheifSkill ();
    void ClericTurn ();
    void attackroll ();
    void savingthrows ();
    void chooseAlignment ();
public:

//// ******************character attributs***********************'
    int AC ();
    int HitPoint ();
    int Damage ();
    int MoveNor ();
    int MoveEnc ();
    int MoveRun ();
    int MoveOther ();
    int Race ();
    int Sex ();
    std::string  Height ();
    int Weight ();
    int Age ();
    int Hair ();
    int Eyes ();
    std::string FullName ();
    int CharacterClass ();
    int Level ();


//// ***************************Abilities************************
    int Strength ();
    int Intellegence ();
    int Wisdom ();
    int Dexterity ();
    int Constitution ();
    int Charisma ();


// ************************Ability Adjustments********************
    int StrengthAdjustment ();
    int IntellegenceAdjustment ();
    int WisdomAdjustment ();
    int DexterityAdjustment ();
    int ConstitutionAdjustment ();
    int CharismaAdjustment ();


//// ******************saving throws ***********************'
    int MagicWands ();
    int ParalysisStone ();
    int BreathAttack ();
    int RodStaffSpell ();
    int DeathRayPoison ();

//// ***************cleric/druid turns****************************'
    int Skeleton ();
    int Zombie ();
    int Ghoul ();
    int Wight ();
    int Wraith ();
    int Mummy ();
    int Spectre ();
    int Vampire ();
    int Phantom ();
    int Haunt ();
    int Spirit ();
    int Nightshade ();
    int Lich ();
    int Special ();


    //// ******************************Theif Skills*****************'
    int OpenLocks ();
    int FindTraps ();
    int RemoveTraps ();
    int ClimbWalls ();
    int MoveSilently ();
    int HideinShadows ();
    int PickPockets ();
    int HearNoise ();
//'public function
    void rollchar ();
};


#endif
