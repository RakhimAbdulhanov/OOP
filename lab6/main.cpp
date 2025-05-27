#include "Dyhotomia_class.h"
#include "Newton_class.h"
#include <iostream>
#include <iomanip>  
using namespace std;
int main(){
    double a, b, eps;
    Dyhotomia_class * dyh = new Dyhotomia_class();
    Newton_class * newton = new Newton_class();
    cin >> a >> b >> eps;
    dyh->setVolumes(a,b);
    dyh->setTolerance(eps);
    double x_dyh = dyh->solve();

    newton->setVolumes(a,b);
    newton->setTolerance(eps);
    double x_newton = newton->solve();
   
    cout << "\nroot(dyho): " << fixed << setprecision(15) << x_dyh << endl;
    cout << "root(newt): " << fixed << setprecision(15) << x_newton << endl;
    delete dyh;
    delete newton;
    return 0;
}
