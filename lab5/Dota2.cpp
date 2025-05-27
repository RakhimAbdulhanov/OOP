#include "Dota2.h"

Hero::Hero(string n, int h, int m) : name(n), hp(h), mana(m) {
    cout << "calling constructor of Hero" << endl;
}

Hero::~Hero() {
    cout << "calling destructor of Hero" << endl;
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

HeroIntelligence::HeroIntelligence(string n, int h, int m) : Hero(n, h, m) {
    cout << "calling constructor of HeroIntelligence" << endl;
}
HeroIntelligence::~HeroIntelligence(){
     cout << "calling destructor of HeroIntelligence" << endl;
}

void HeroIntelligence::attack() {
    cout << "attacking with spell" << endl;
}

void HeroIntelligence::castSpell() {
    cout << "casting spell" << endl;
}

HeroDexterity::HeroDexterity(string n, int h, int m) : Hero(n, h, m) {
    cout << "calling constructor of HeroDexterity" << endl;
}
HeroDexterity::~HeroDexterity(){
     cout << "calling destructor of HeroDexterity" << endl;
};
void HeroDexterity::attack() {
    cout << "attacking with hand" << endl;
}

void HeroDexterity::useMom() {
    cout << "using mom to attack better" << endl;
}

HeroStrength::HeroStrength(string n, int h, int m) : Hero(n, h, m) {
    cout << "calling constructor of HeroStrength" << endl;
}
HeroStrength::~HeroStrength(){
     cout << "calling destructor of HeroStrength" << endl;
};

Invoker::Invoker(string n, int h, int m) : Hero(n,h,m), HeroIntelligence(n, h, m), HeroDexterity(n,h,m) {
    cout << "calling constructor of Invoker" << endl;
}
Invoker::~Invoker(){
     cout << "calling destructor of Invoker" << endl;
}
void Invoker::attack() {
    cout << "using 3 of exort to attack" << endl;
}

void Invoker::castSunStrike() {
    cout << "casting sunstrike" << endl;
}

InvokerPrime::InvokerPrime(string n, int h, int m) : Hero(n,h,m), Invoker(n, h, m) {
    cout << "calling constructor of InvokerPrime" << endl;
    
}
InvokerPrime::~InvokerPrime() {
     cout << "calling destructor of InvokerPrime" << endl;
}
void InvokerPrime::attack() {
    cout << "attacking with witchblade" << endl;
}

void InvokerPrime::makeProcast() {
    cout << "playing piano and making super procast with all skills" << endl;
}


ShadowFiend::ShadowFiend(string n, int h, int m) : Hero(n, h, m), HeroDexterity(n, h, m) {
     cout << "calling constructor of ShadowFiend" << endl;
}
ShadowFiend::~ShadowFiend() {
     cout << "calling destructor of ShadowFiend" << endl;
}
void ShadowFiend::attack() {
    cout << "attacking with help of passive skill" << endl;
}

void ShadowFiend::makeProcast() {
    cout << "casting ult, pausing and writing in all chat 1000-7???" << endl;
}

UltimateHero::UltimateHero(string n, int h, int m) : Hero(n, h, m), HeroStrength(n, h, m), HeroIntelligence(n, h, m), HeroDexterity(n, h, m) {
    cout << "calling constructor of UltimateHero" << endl;
} 
UltimateHero::~UltimateHero(){
    cout << "calling destructor of UltimateHero" << endl;
}

void UltimateHero::attack() {
    cout << name << " attacks with strength, speed, and magic!" << endl;
}

void UltimateHero::makeProcast() {
    cout << name << " casts a perfectly timed combo of spells!" << endl;
}

void UltimateHero::useMom() {
    cout << name << " activates Mask of Madness for deadly speed!" << endl;
}

void UltimateHero::castSpell() {
    cout << name << " unleashes a powerful spell!" << endl;
}

void UltimateHero::useBKB() {
    cout << name << " activates BKB to become magic immune!" << endl;
}