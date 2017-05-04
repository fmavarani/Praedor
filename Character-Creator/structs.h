#ifndef STRUCTS_H
#define STRUCTS_H
#include "string"
using namespace std;
struct protection{
  int Head, Torso, Right_Arm,Left_Arm,Stomach,Right_Leg,Left_Leg;
};
struct items{
    int weight;
    string name;
    int DB;
    protection DR;
    int cost;
    int type;
};
struct animal{
    int body;
    int agi;
    int awareness;
    int brave;
    int attack;
    int damage;
    int deepwound;
    int blood;
    int init;
    protection DR;
};

#endif // STRUCTS_H
