#include "Dota2.h"

int main() {
    Hero *hero0 = new Invoker("InvokerNoob", 500, 700);
    hero0->showStats();
    hero0->attack();
    hero0->castSunStrike();
    cout << "\n";
    Hero *hero1 = new InvokerPrime("InvokerPrime", 900, 1100);
    hero1->showStats();
    hero1->attack();
    hero1->castSpell();
    hero1->makeProcast();
    cout << "\n";
    Hero *hero2 = new ShadowFiend("ShadowFiend", 666, 666);
    hero2->showStats();
    hero2->attack();
    hero2->useMom();
    hero2->makeProcast();
    
    delete hero1;
    delete hero2;

    return 0;
}
