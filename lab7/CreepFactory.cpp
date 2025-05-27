#include "CreepFactory.h"
using namespace std;

Creep::Creep(string name) : Name(name) {}
string Creep::getName() const{
    return Name;
}

MeleeCreep::MeleeCreep(string name) : Creep(name) {}
RangedCreep::RangedCreep(string name) : Creep(name) {}

MeleeCreep* SmallCreepFactory::GetMeleeCreep() { return new MeleeCreep("Small Melee Creep"); }
RangedCreep* SmallCreepFactory::GetRangedCreep() { return new RangedCreep("Small Ranged Creep"); }
MeleeCreep* BigCreepFactory::GetMeleeCreep() { return new MeleeCreep("Big Melee Creep"); }
RangedCreep* BigCreepFactory::GetRangedCreep() { return new RangedCreep("Big Ranged Creep"); }