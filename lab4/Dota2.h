#ifndef DOTA2_H
#define DOTA2_H

#include <iostream>
#include <string>
using namespace std;

class Hero
{
protected:
    string name;
    int hp;
    int mana;

public:
    Hero(string n, int h, int m);
    virtual ~Hero();

    void setHp(int newHp);
    void setMana(int newMana);
    int getHp() const;
    int getMana() const;
    void showStats() const;

    virtual void attack();
    virtual void makeProcast();
    virtual void useMom();
    virtual void castSpell();
    virtual void castSpell(int mana);
    virtual void castSunStrike();
};

class HeroIntelligence : public Hero
{
public:
    HeroIntelligence(string n, int h, int m);
    void attack() override;
    void castSpell();
};

class Invoker : public HeroIntelligence
{
public:
    Invoker(string n, int h, int m);
    void attack() override;
    void castSunStrike();
};

class InvokerPrime : public Invoker
{
public:
    InvokerPrime(string n, int h, int m);
    void attack() override;
    void makeProcast();
};

class HeroDexterity : public Hero
{
public:
    HeroDexterity(string n, int h, int m);
    void attack() override;
    void useMom();
};

class ShadowFiend : public HeroDexterity
{
public:
    ShadowFiend(string n, int h, int m);
    void attack() override;
    void makeProcast();
};

#endif // DOTA2_H