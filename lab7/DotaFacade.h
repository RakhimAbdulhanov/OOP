#if !defined(DotaFacade_H)
#define DotaFacade_H
#include <iostream>
#include <string>
using namespace std;

class ChooseHero{
public:
    string SelectHero(string name);
};
class ChooseItem{
public:
    string BuyItem(string item);
};
class ChooseLane{
public:
    string SelectLane(string lane);
};

class DotaFacade{
private:
    ChooseHero* _chooseHero;
    ChooseItem* _chooseItem;
    ChooseLane* _chooseLane;
public:
    DotaFacade();
    string ChooseEverything(string name, string item, string lane);
};
#endif // DotaFacade_H
