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

class HeroIntelligence : virtual public Hero
{
public:
    HeroIntelligence(string n, int h, int m);
    void attack() override;
    void castSpell();
    ~HeroIntelligence();
};

class HeroDexterity : virtual public Hero
{
public:
    HeroDexterity(string n, int h, int m);
    void attack() override;
    void useMom();
    ~HeroDexterity();
};

class HeroStrength : virtual public Hero {
public:
    HeroStrength(string n, int h, int m);

    void attack() override {
        cout << "HeroStrength smashing with brute force!" << endl;
    }

    void useBKB() {
        cout << name << " uses Black King Bar (BKB)!" << endl;
    }

    ~HeroStrength();
};

class Invoker :  public HeroIntelligence,  public HeroDexterity
{
public:
    Invoker(string n, int h, int m);
    void attack() override;
    void castSunStrike();
    ~Invoker();
};

class InvokerPrime :  public Invoker
{
public:
    InvokerPrime(string n, int h, int m);
    void attack() override;
    void makeProcast();
    ~InvokerPrime();
};


class ShadowFiend :  public HeroDexterity
{
public:
    ShadowFiend(string n, int h, int m);
    void attack() override;
    void makeProcast();
    ~ShadowFiend();
};

class UltimateHero : public HeroStrength, public HeroIntelligence, public HeroDexterity
{
public:
    UltimateHero(string n, int h, int m);
   void attack() override;
    void makeProcast() override;
    void useMom() override;
    void castSpell() override;
    void useBKB();
    ~UltimateHero();
};


#endif // DOTA2_H   