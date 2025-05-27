#include "DotaFacade.h"
using namespace std;

string ChooseHero::SelectHero(string name){
    if (name == "invoker") {
        return "Invoker";
    } else if (name == "juggernaut") {
        return "Juggernaut";
    } else {
        return "Unknown hero: " + name + "\n";
    }
}

string ChooseItem::BuyItem(string item){
     if (item == "tango") {
        return "tango";
    } else if (item == "clarity") {
        return "clarity";
    } else {
        return  "Unknown Item: " + item + "\n";
    }
}

string ChooseLane::SelectLane(string lane){
     if (lane == "mid") {
        return "Mid";
    } else if (lane == "easy") {
        return "Easy Lane";
    } else {
        return "Unknown Lane: " + lane + ", going to the jungle" + "\n";
    }
}

DotaFacade::DotaFacade(){
    _chooseHero = new ChooseHero();
    _chooseItem = new ChooseItem();
    _chooseLane = new ChooseLane();
}
string DotaFacade::ChooseEverything(string name, string item, string lane){
        string hero = _chooseHero->SelectHero(name);
        string itemBought = _chooseItem->BuyItem(item);
        string laneChose = _chooseLane->SelectLane(lane);
        return "Game started, Hero: " + hero + ", Bought item: " + itemBought + ", lane: " + laneChose;
}