#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>
#include <queue>
#include "structs.h"
using namespace std;
class character
{
private:
    int STR,AGI,CON,CHA,AWE,BRA;
    string name;
    string home;
    string Class;
    int blood[4];
    int max_blood;
    protection DR;
    queue<items> backpack;
    int Damage;

public:
    character();

    const int *getBlood() const;

    const string &getHome() const;

    void setHome(const string &home);

    const string &getClass() const;

    void setClass(const string &Class);

    const queue<items> &getBackpack() const;

    void setBackpack(const queue<items> &backpack);

    int getSTR() const;

    int getAGI() const;

    int getCON() const;

    int getCHA() const;

    int getAWE() const;

    int getBRA() const;

    int getDamage() const;

    const string &getName() const;

    void setDamage(int Damage);

    void setSTR(int STR);

    void setAGI(int AGI);

    void setCON(int CON);

    void setCHA(int CHA);

    void setAWE(int AWE);

    void setBRA(int BRA);

    void setName(const string &name);

};

#endif // CHARACTER_H
