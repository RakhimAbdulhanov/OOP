#include "Dota2.h"

Hero::Hero(string n, int h, int m) : name(n), hp(h), mana(m) {}

Hero::~Hero() {
    cout << "calling destructor of " << name << endl;
}

void Hero::setHp(int newHp) {
    hp = newHp;
}

void Hero::setMana(int newMana) {
    mana = newMana;
}

int Hero::getHp() const {
    return hp;
}

int Hero::getMana() const {
    return mana;
}

void Hero::showStats() const {
    cout << "Name: " << name << ", HP: " << hp << ", Mana: " << mana << endl;
}

void Hero::attack() {
    cout << "attacking" << endl;
}
void Hero::makeProcast(){
    cout << "no procast" << endl;
}
void Hero::useMom(){
    cout << "no mom :(" << endl;
}
void Hero::castSpell(){
    cout << "no spells i upgrade attributes";
}
void Hero::castSpell(int mana) {
    if(!mana)
    cout << "no mana for spell" << endl;
    else
    cout << "casting spell" << endl;
}
void Hero::castSunStrike(){
    cout << "no sunstrike u are not invoker bot kys";
}

HeroIntelligence::HeroIntelligence(string n, int h, int m) : Hero(n, h, m) {}

void HeroIntelligence::attack() {
    cout << "attacking with spell" << endl;
}

void HeroIntelligence::castSpell() {
    cout << "casting spell" << endl;
}


Invoker::Invoker(string n, int h, int m) : HeroIntelligence(n, h, m) {}

void Invoker::attack() {
    cout << "using 3 of exort to attack" << endl;
}

void Invoker::castSunStrike() {
    cout << "casting sunstrike" << endl;
}

InvokerPrime::InvokerPrime(string n, int h, int m) : Invoker(n, h, m) {}

void InvokerPrime::attack() {
    cout << "attacking with witchblade" << endl;
}

void InvokerPrime::makeProcast() {
    cout << "playing piano and making super procast with all skills" << endl;
}

HeroDexterity::HeroDexterity(string n, int h, int m) : Hero(n, h, m) {}

void HeroDexterity::attack() {
    cout << "attacking with hand" << endl;
}

void HeroDexterity::useMom() {
    cout << "using mom to attack better" << endl;
}

ShadowFiend::ShadowFiend(string n, int h, int m) : HeroDexterity(n, h, m) {}

void ShadowFiend::attack() {
    cout << "attacking with help of passive skill" << endl;
}

void ShadowFiend::makeProcast() {
    cout << "casting ult, pausing and writing in all chat 1000-7???" << endl;
}