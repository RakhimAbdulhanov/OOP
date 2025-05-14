#include "Dota2.h"

int main() {
    Hero *hero0 = new Invoker("Invoker", 500, 700);
    hero0->showStats();
    hero0->attack();
    hero0->castSunStrike();
    hero0->useMom();
    cout << "\n";
    Hero *hero1 = new InvokerPrime("InvokerPrime", 900, 1100);
    hero1->showStats();
    hero1->attack();
    hero1->castSpell(hero1->getMana());
    hero1->makeProcast();
    cout << "\n";
    Hero *hero2 = new ShadowFiend("ShadowFiend", 666, 666);
    hero2->showStats();
    hero2->attack();
    hero2->useMom();
    hero2->makeProcast();
    Hero *hero3 = new UltimateHero("UltimateHero", 777, 777);
    hero3->showStats();
    // delete hero0;
    // delete hero1;
    // delete hero2;
    
    return 0;
}