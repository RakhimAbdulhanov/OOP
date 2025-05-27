#if !defined(CreepFactory_H)
#define CreepFactory_H

#include <iostream>
#include <string>

using namespace std;

class Creep{
    string Name;
    public:
        Creep(string name);
        string getName() const;
};

class MeleeCreep : public Creep{
public:
    MeleeCreep(string name);
};
class RangedCreep : public Creep{
public:
    RangedCreep(string name);
};

class CreepFactory{
public:
    virtual MeleeCreep* GetMeleeCreep() = 0;
    virtual RangedCreep* GetRangedCreep() = 0;
};

class BigCreepFactory : public CreepFactory{
    MeleeCreep* GetMeleeCreep();
    RangedCreep* GetRangedCreep();
};

class SmallCreepFactory : public CreepFactory{
    MeleeCreep* GetMeleeCreep();   
    RangedCreep* GetRangedCreep();
};
#endif // CreepFactory_H
