#include "Newton_class.h"   
#include "func.h"
#include <iostream>
#include <cmath>
using namespace std;

Newton_class::Newton_class(){}
Newton_class::~Newton_class(){}

void Newton_class::setVolumes(double vol_a, double vol_b) {
    a = vol_a;
    b = vol_b;
}

void Newton_class::setTolerance(double vol_eps) {
    eps = vol_eps;
}

double Newton_class::solve(){
    double x = (a+b) / 2;
    double x_next;
    for(int i = 0; i < 1000; i++){
        if(fabs(f_prime(x)) < eps){
            cout << "pohidna is too small" << endl;
            return x;
        }
        x_next = x - f(x) / f_prime(x);
        if(fabs(x_next - x) < eps){
            return x_next;
        }
        x = x_next;
    }
    cout << "max number of iterations lmao" << endl;
    return x; 
}



