#include "CreepFactory.h"
#include "DotaFacade.h"
int main(){
    CreepFactory *BCF = new BigCreepFactory();
    RangedCreep *r = BCF->GetRangedCreep();
    std::cout << r->getName() << endl; 
    cout << "=========================" << endl;
    DotaFacade* facade = new DotaFacade();
    string wannaPlayInvoker = facade->ChooseEverything("invoker", "clarity", "mid");
    cout << wannaPlayInvoker;
    return 0;

}