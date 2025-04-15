#include "Dyhotomia_class.h"
#include "Newton_class.h"
#include <iostream>

int main(){
    double a, b, eps;
    Dyhotomia_class * dyh = new Dyhotomia_class();
    Newton_class * newton = new Newton_class();
    std::cin >> a >> b >> eps;
    dyh->setVolumes(a,b);
    dyh->setTolerance(eps);
    double x_dyh = dyh->solve();

    newton->setVolumes(a,b);
    newton->setTolerance(eps);
    double x_newton = newton->solve();
    std::cout << "\nroot(dyho): " << x_dyh << std::endl;
    std::cout << "root(newton): " << x_newton << std::endl;
    delete dyh;
    delete newton;
    return 0;
}