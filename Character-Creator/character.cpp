#include "character.h"

character::character()
{

}

int character::getSTR() const {
    return stats.STR;
}

void character::setSTR(int STR) {
    character::stats.STR = STR;
}

void character::setAGI(int AGI) {
    character::stats.AGI = AGI;
}

void character::setCON(int CON) {
    character::stats.CON = CON;
}

void character::setCHA(int CHA) {
    character::stats.CHA = CHA;
}

void character::setAWE(int AWE) {
    character::stats.AWE = AWE;
}

void character::setBRA(int BRA) {
    character::stats.BRA = BRA;
}



int character::getAGI() const {
    return stats.AGI;
}

int character::getCON() const {
    return stats.CON;
}

int character::getCHA() const {
    return stats.CHA;
}

int character::getAWE() const {
    return stats.AWE;
}

int character::getBRA() const {
    return stats.BRA;
}

const string &character::getClass() const {
    return Class;
}

void character::setClass(const string &Class) {
    character::Class = Class;
}

const queue<items> &character::getBackpack() const {
    return backpack;
}

void character::setBackpack(const queue<items> &backpack) {
    character::backpack = backpack;
}

const int *character::getBlood() const {
    return blood;
}

int character::getMax_blood() const {
    return max_blood;
}

void character::setMax_blood(int max_blood) {
    character::max_blood = max_blood;
}

const protection &character::getDR() const {
    return DR;
}

void character::setDR(const protection &DR) {
    character::DR = DR;
}

int character::getDamage() const {
    return Damage;
}

void character::setDamage(int Damage) {
    character::Damage = Damage;
}

int character::getMaxWeight() const {
    return Weight.max;
}

void character::setMaxWeight(int maxWeight) {
    character::Weight.max = maxWeight;
}

int character::getCWeight() const {
    return Weight.current;
}

void character::setCWeight(int cWeight) {
    character::Weight.current = cWeight;
}

