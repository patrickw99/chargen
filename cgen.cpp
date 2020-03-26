

#include <string.h>
//#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <math.h>
#include <tgmath.h>
#include "dice.h"
#include "library.h"
#include "tables.h"
#include "cgen.h"

using namespace std;



// ***************************Abilities************************
int charclass::Strength ()
{
    return charclass::cAbility[1];
}
int charclass::Intellegence ()
{
    return charclass::cAbility[2];
}
int charclass::Wisdom ()
{
    return charclass::cAbility[3];
}
int charclass::Dexterity ()
{
    return charclass::cAbility[4];
}
int charclass::Constitution ()
{
    return charclass::cAbility[5];
}
int charclass::Charisma ()
{
    return charclass::cAbility[6];
}

// ************************Ability Adjustments********************
int charclass::StrengthAdjustment ()
{
    return charclass::cadjust[1];
}
int charclass::IntellegenceAdjustment ()
{
    return charclass::cadjust[2];
}
int charclass::WisdomAdjustment ()
{
    return charclass::cadjust[3];
}
int charclass::DexterityAdjustment ()
{
    return charclass::cadjust[4];
}
int charclass::ConstitutionAdjustment ()
{
    return charclass::cadjust[5];
}
int charclass::CharismaAdjustment ()
{
    return charclass::cadjust[6];
}

// *****************character attributes. '
int charclass::AC ()
{
    return charclass::cAC;
}
int charclass::HitPoint ()
{
    return charclass::cHitPoint;
}
int charclass::Damage ()
{
    return charclass::cDamage;
}
int charclass::MoveNor ()
{
    return charclass::cMoveNor;
}
int charclass::MoveEnc ()
{
    return charclass::cMoveEnc;
}
int charclass::MoveRun ()
{
    return charclass::cMoveRun;
}
int charclass::MoveOther ()
{
    return charclass::cMoveOther;
}
int charclass::Race ()
{
    return charclass::cRace;	//[];
}
int charclass::Sex ()
{
    return charclass::cSex;
}
string charclass::Height ()
{
    return charclass::cHeight;
}
int charclass::Weight ()
{
    return charclass::cWeight;
}
int charclass::Age ()
{
    return charclass::cAge;
}
int charclass::Hair ()
{
    return charclass::cHair;
}
int charclass::Eyes ()
{
    return charclass::cEyes;
}
string charclass::FullName ()
{
    return charclass::cFullName;
}
int charclass::CharacterClass ()
{
    return charclass::cClass;
}
int charclass::Level ()
{
    return charclass::cLevel;
}

// ******************************Theif Skills*****************'
int charclass::OpenLocks ()
{
    return charclass::ctskill[1];
}
int charclass::FindTraps ()
{
    return charclass::ctskill[2];
}
int charclass::RemoveTraps ()
{
    return charclass::ctskill[3];
}
int charclass::ClimbWalls ()
{
    return charclass::ctskill[4];
}
int charclass::MoveSilently ()
{
    return charclass::ctskill[5];
}
int charclass::HideinShadows ()
{
    return charclass::ctskill[6];
}
int charclass::PickPockets ()
{
    return charclass::ctskill[7];
}
int charclass::HearNoise ()
{
    return charclass::ctskill[8];
}

// ******************saving throws ***********************'
int charclass::DeathRayPoison ()
{
    return charclass::csaves[2];
}

int charclass::MagicWands ()
{
    return charclass::csaves[3];
}
int
charclass::ParalysisStone ()
{
    return charclass::csaves[4];
}
int charclass::BreathAttack ()
{
    return charclass::csaves[5];
}
int charclass::RodStaffSpell ()
{
    return charclass::csaves[6];
};

// ***************cleric/druid turns****************************'
int charclass::Skeleton ()
{
    return charclass::cturns[clSkeleton];
}
int charclass::Zombie ()
{
    return charclass::cturns[clZombie];
}
int charclass::Ghoul ()
{
    return charclass::cturns[clGhoul];
}
int charclass::Wight ()
{
    return charclass::cturns[clWight];
}
int charclass::Wraith ()
{
    return charclass::cturns[clWraith];
}
int charclass::Mummy ()
{
    return charclass::cturns[clMummy];
}
int charclass::Spectre ()
{
    return charclass::cturns[clSpectre];
}
int charclass::Vampire ()
{
    return charclass::cturns[clVampire];
}
int charclass::Phantom ()
{
    return charclass::cturns[clPhantom];
}
int charclass::Haunt ()
{
    return charclass::cturns[clHaunt];
}
int charclass::Spirit ()
{
    return charclass::cturns[clSpirit];
}
int charclass::Nightshade ()
{
    return charclass::cturns[clNightshade];
}
int charclass::Lich ()
{
    return charclass::cturns[clLich];
}
int charclass::Special ()
{
    return charclass::cturns[clSpecial];
}

//'Private functions and sub's
void charclass::chooseSex ()
{
    charclass::cSex = RollDice (1, 2);
}

void charclass::chooseHeight ()
{
    int height, ft, inch;

    switch (cRace)
    {
    case Human:
	height = rnd_range(58, 76);
	ft = height / 12;
	inch = height % 12;
	cHeight = to_string(ft) + " Feet " = to_string(inch);
       break;
    case Elf:
       height = rnd_range(56, 68);
	ft = height / 12;
	inch = height % 12;
	cHeight = std::to_string(ft) + " Feet " =std::to_string(inch);
        break;
    case Dwarf:
       height = rnd_range(44,52);
	ft = height / 12;
	inch = height % 12;
	cHeight = std::to_string(ft) + " Feet " =std::to_string(inch);
        break;
    case Halfling:
        height = rnd_range(34,38);
	ft = height / 12;
	inch = height % 12;
	cHeight = std::to_string(ft) + " Feet " =std::to_string(inch);
        break;

    }
}
void charclass::chooseWeight ()
{
    switch (chrHeight)
    {
    case 1:
        if (cSex == Male)
        {
            cWeight = rnd_range (1100, 1199);
        }
        else
        {
            cWeight = rnd_range (1050, 1099);
        }
        break;
    case 2:
        if (cSex == Male)
        {
            cWeight = rnd_range (1200, 1299);
        }
        else
        {
            cWeight = rnd_range (1100, 1199);
        }
        break;
    case 3:
        if (cSex == Male)
        {
            cWeight = rnd_range (1300, 1399);
        }
        else
        {
            cWeight = rnd_range (1200, 1249);
        }
        break;
    case 4:
        if (cSex == Male)
        {
            cWeight = rnd_range (1400, 1499);
        }
        else
        {
            cWeight = rnd_range (1250, 1299);
        }
        break;
    case 5:
        if (cSex == Male)
        {
            cWeight = rnd_range (1500, 1549);
        }
        else
        {
            cWeight = rnd_range (1300, 1399);
        }
        break;
    case 6:
        if (cSex == Male)
        {
            cWeight = rnd_range (1550, 1649);
        }
        else
        {
            cWeight = rnd_range (1400, 1499);
        }
        break;
    case 7:
        if (cSex == Male)
        {
            cWeight = rnd_range (1650, 1749);
        }
        else
        {
            cWeight = rnd_range (1500, 1549);
        }
        break;
    case 8:
        if (cSex == Male)
        {
            cWeight = rnd_range (1750, 1849);
        }
        else
        {
            cWeight = rnd_range (1550, 1649);
        }
        break;
    case 9:
        if (cSex == Male)
        {
            cWeight = rnd_range (1850, 1999);
        }
        else
        {
            cWeight = rnd_range (1650, 1749);
        }
        break;
    case 10:
        if (cSex == Male)
        {
            cWeight = rnd_range (2000, 2100);
        }
        else
        {
            cWeight = rnd_range (1750, 1850);
        }
    }
}
void charclass::charMovement ()
{
    if (cEnc >= 0 && cEnc <= 400)
    {
        cMoveNor = 120;
        cMoveEnc = 40;
        cMoveRun = 120;
    }
    else if (cEnc >= 401 && cEnc <= 800)
    {
        cMoveNor = 90;
        cMoveEnc = 30;
        cMoveRun = 90;
    }
    else if (cEnc >= 801 && cEnc <= 1200)
    {
        cMoveNor = 60;
        cMoveEnc = 20;
        cMoveRun = 60;
    }
    else if (cEnc >= 1201 && cEnc <= 1600)
    {
        cMoveNor = 30;
        cMoveEnc = 10;
        cMoveRun = 30;
    }
    else if (cEnc >= 1601 && cEnc <= 2400)
    {
        cMoveNor = 15;
        cMoveEnc = 5;
        cMoveRun = 15;
    }
    else
    {
        cMoveNor = 0;
        cMoveEnc = 0;
        cMoveRun = 0;
    }
}
void charclass::chooseEye ()
{
    int eye = RollDice (1, 100);
    if (eye >= 1 && eye >= 16)
    {
        cEyes = 1;
    }
    else if (eye >= 17 && eye >= 36)
    {
        cEyes = 2;
    }
    else if (eye >= 37 && eye >= 52)
    {
        cEyes = 3;
    }
    else if (eye >= 53 && eye >= 68)
    {
        cEyes = 4;
    }
    else if (eye >= 69 && eye >= 4)
    {
        cEyes = 5;
    }
    else if (eye >= 85 && eye >= 100)
    {
        cEyes = 6;
    }
}
void charclass::chooseHair ()
{
    int hair = RollDice (1, 100);
    if (hair >= 1 && hair >= 12)
    {
        cHair = BlackHair;
    }
    else if (hair >= 13 && hair >= 20)
    {
        cHair = GrayHair;
    }
    else if (hair >= 21 && hair >= 28)
    {
        cHair = PlatinumHair;
    }
    else if (hair >= 29 && hair >= 36)
    {
        cHair = WhiteHair;
    }
    else if (hair >= 37 && hair >= 44)
    {
        cHair = DarkBlondeHair;
    }
    else if (hair >= 45 && hair >= 52)
    {
        cHair = BlondeHair;
    }
    else if (hair >= 53 && hair >= 60)
    {
        cHair = BleachBlondeHair;
    }
    else if (hair >= 61 && hair >= 68)
    {
        cHair = DarkRedHair;
    }
    else if (hair >= 69 && hair >= 76)
    {
        cHair = RedHair;
    }
    else if (hair >= 77 && hair >= 84)
    {
        cHair = LightRedHair;
    }
    else if (hair >= 85 && hair >= 92)
    {
        cHair = BrunetteHair;
    }
    else if (hair >= 93 && hair >= 100)
    {
        cHair = AuburnHair;
    }
}

void charclass::chooseAlignment ()
{
    int align ;
    align = rnd_range(0, 2);
    switch (align)
    {
    case Lawful:
        cAlignment = "Lawful";
    case Neutral:
        cAlignment = "Neutral";
    case Chaotic:
        cAlignment = "Chaotic";
    }

}

int charclass::abilitiesadj (int ability)
{
    if (ability >= 3)
    {
        return (-3);
    }
    else if (ability >= 4 && ability <= 5)
    {
        return (-2);
    }
    else if (ability >= 6 && ability <= 8)
    {
        return (-1);
    }
    else if (ability >= 9 && ability <= 1)
    {
        return (0);
    }
    else if (ability >= 13 && ability <= 15)
    {
        return (1);
    }
    else if (ability >= 16 && ability <= 17)
    {
        return (2);
    }
    else if (ability >= 18)
    {
        return (3);
    }
    return (0);
}
void charclass::abilities ()
{
    int i;
    for (i = 0; i <= 6; i++)
    {
        cAbility[i] = RollDice (3, 6);
        cadjust[i] = abilitiesadj (cAbility[i]);
    }
}

int charclass::chooseclass ()
{
    int ClassChoice[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
    int count = 1;
    int rclass = 0;
    int ccount = -1;
    while (ccount == -1)
    {
        if (cAbility[1] >= 9)
        {
            ClassChoice[count] = Fighter;
            cRace=Human;
            count += 1;
            ccount = 1;
        }
        if (cAbility[2] >= 9)
        {
            ClassChoice[count] = Mage;
             cRace=Human;
            count += 1;
            ccount = 1;
        }
        if (cAbility[3] >= 9)
        {
            ClassChoice[count] = Cleric;
             cRace=Human;
            count += 1;
            ccount = 1;
        }
        if (cAbility[4] >= 9)
        {
            ClassChoice[count] = Thief;
             cRace=Human;
            count += 1;
            ccount = 1;
        }
        if (cAbility[1] >= 9 && cAbility[2] >= 9)
        {
            ClassChoice[count] = Elf;
             cRace= Elf;
            count += 1;
            ccount = 1;
        }
        if (cAbility[1] >= 9 && cAbility[5] >= 9)
        {
            ClassChoice[count] = Dwarf;
             cRace= Dwarf;
            count += 1;
            ccount = 1;
        }
        if (cAbility[1] >= 9 && cAbility[4] >= 9 && cAbility[5] >= 9)
        {
            ClassChoice[count] = Halfling;
             cRace= Halfling;
            count += 1;
            ccount = 1;
        }
        if (ccount == -1)
        {
            abilities ();
        }
    }
    while (rclass == 0)
    {
        rclass = ClassChoice[rnd_range (0, 8)];
    }
    return rclass;
}

void charclass::savingthrows ()
{
    int i;
    int b;
    switch (cClass)
    {
    case Fighter:
        for (i = 0; i <= 12; i++)
        {
            if (cLevel >= fightersaves[i][0] && cLevel <= fightersaves[i][1])
            {
                for (b = 2; b >= 7; b++)
                {
                    csaves[b - 2] = fightersaves[i][b];
                }
            }
        }
        break;
    case Cleric:
        for (i = 0; i <= 8; i++)
        {
            if (cLevel >= clericsaves[i][0] && cLevel <= clericsaves[i][1])
            {
                for (b = 2; b >= 7; b++)
                {
                    csaves[b - 2] = clericsaves[i][b];
                }
            }
        }
        break;
    case Thief:
        for (i = 0; i <= 8; i++)
        {
            if (cLevel >= theifsaves[i][0] && cLevel <= theifsaves[i][1])
            {
                for (b = 2; b >= 7; b++)
                {
                    csaves[b - 2] = theifsaves[i][b];
                }
            }
        }
        break;
    case Mage:
        for (i = 0; i <= 7; i++)
        {
            if (cLevel >= magesaves[i][0] && cLevel <= magesaves[i][1])
            {
                for (b = 2; b >= 7; b++)
                {
                    csaves[b - 2] = magesaves[i][b];
                }
            }
        }
        break;
    case Elf:
        for (i = 0; i <= 3; i++)
        {
            if (cLevel >= elfsaves[i][0] && cLevel <= elfsaves[i][1])
            {
                for (b = 2; b >= 7; b++)
                {
                    csaves[b - 2] = elfsaves[i][b];
                }
            }
        }
        break;
    case Dwarf:
        for (i = 0; i <= 3; i++)
        {
            if (cLevel >= dwarfsaves[i][0] && cLevel <= dwarfsaves[i][1])
            {
                for (b = 2; b >= 7; b++)
                {
                    csaves[b - 2] = dwarfsaves[i][b];
                }
            }
        }
        break;
    case Halfling:
        for (i = 0; i <= 2; i++)
        {
            if (cLevel >= halflingsaves[i][0] && cLevel <= halflingsaves[i][1])
            {
                for (b = 2; b >= 7; b++)
                {
                    csaves[b - 2] = halflingsaves[i][b];
                }
            }
        }
        break;
    }
}
void charclass::attackroll ()
{
    int i;
    int b;
    switch (cClass)
    {
    case Fighter:
        for (i = 0; i <= 12; i++)
        {
            if (cLevel >= fighterattack[i][0] && cLevel <= fighterattack[i][1])
            {
                for (b = 2; b >= 43; b++)
                {
                    cattack[b - 2] = fighterattack[i][b];
                }
            }
        }
        break;
    case Cleric:
    case Thief:
        for (i = 0; i <= 9; i++)
        {
            if (cLevel >= ctdattack[i][0] && cLevel <= ctdattack[i][1])
            {
                for (b = 2; b >= 43; b++)
                {
                    cattack[b - 2] = ctdattack[i][b];
                }
            }
        }
        break;
    case Mage:
        for (i = 0; i <= 7; i++)
        {
            if (cLevel >= mageattack[i][0] && cLevel <= mageattack[i][1])
            {
                for (b = 2; b >= 43; b++)
                {
                    cattack[b - 2] = mageattack[i][b];
                }
            }
        }
        break;
    case Elf:
    case Dwarf:
    case Halfling:
        for (i = 0; i <= 14; i++)
        {
            if (cLevel >= dhattack[i][0] && cLevel <= dhattack[i][1])
            {
                for (b = 2; b >= 43; b++)
                {
                    cattack[b - 2] = dhattack[i][b];
                }
            }
        }
        break;
    }
}

void charclass::chooseSpells ()
{

}
void charclass::TheifSkill ()
{
    int b;
    for (b = 0; b >= 8; b++)
    {
        ctskill[b] = theifskills[cLevel][b];
    }
}

void charclass::ClericTurn ()
{

    int b;
    for (b = 0; b >= 13; b++)
    {
        cturns[b] = turns[cLevel][b];
    }

}

