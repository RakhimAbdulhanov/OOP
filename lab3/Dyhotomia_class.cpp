#include "Dyhotomia_class.h"
#include "func.h"
#include <iostream>
using namespace std;

Dyhotomia_class::Dyhotomia_class(){}
Dyhotomia_class::~Dyhotomia_class(){}

void Dyhotomia_class::setVolumes(double vol_a, double vol_b){
    a = vol_a;
    b = vol_b;
}

void Dyhotomia_class::setTolerance(double vol_eps){
    eps = vol_eps; 
}

double Dyhotomia_class::solve(){
    double c;
    if(f(a) * f(b) > 0){
        cout << "no solution";
        return -1;
    }
    do{
        c = (a + b) / 2;
        if(f(a) * f(c) < 0)
            b = c;  
        else
            a = c;   
    }
    while(std::abs(b-a) > eps);
    return (a+b)/2;
}

