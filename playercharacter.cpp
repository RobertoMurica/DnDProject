#include "playercharacter.h"

PlayerChar::PlayerChar(std::string charName, int charStats[], bool profSaves[], char profSkills[])
{
    this->charName = charName;
    this->charStats = charStats;
    this->profSaves = profSaves;
    this->profSkills = profSkills;
}

std::string PlayerChar::getCharName()
{
    return this->charName;
}

void PlayerChar::setCharName(std::string name)
{
    this->charName = name;
}

int * PlayerChar::getCharStats()
{
    return this->charStats;
}

void PlayerChar::setCharStats(int stats[])
{
    charStats = stats;
}

bool * PlayerChar::getProfSaves()
{
    return this->profSaves;
}

void PlayerChar::setProfSaves(bool saves[])
{
    profSaves[] = saves[];
}

void PlayerChar::setProfSkills(char skills[])
{
    profSkills = skills;
}
