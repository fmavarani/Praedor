#include "character.h"

character::character()
{

}

int character::getSTR() const {
    return STR;
}

void character::setSTR(int STR) {
    character::STR = STR;
}

void character::setAGI(int AGI) {
    character::AGI = AGI;
}

void character::setCON(int CON) {
    character::CON = CON;
}

void character::setCHA(int CHA) {
    character::CHA = CHA;
}

void character::setAWE(int AWE) {
    character::AWE = AWE;
}

void character::setBRA(int BRA) {
    character::BRA = BRA;
}
void character::setDamage(int Damage) {
    character::Damage = Damage;
}

void character::setName(const string &name) {
    character::name = name;
}

int character::getDamage() const {
    return Damage;
}
int character::getAGI() const {
    return AGI;
}

int character::getCON() const {
    return CON;
}

int character::getCHA() const {
    return CHA;
}

int character::getAWE() const {
    return AWE;
}

int character::getBRA() const {
    return BRA;
}

const string &character::getName() const {
    return name;
}

const string &character::getHome() const {
    return home;
}

void character::setHome(const string &home) {
    character::home = home;
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
