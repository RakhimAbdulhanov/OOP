#include <iostream>
#include "check.h"
using namespace std;

int main(){
    Triangle t;
    int n = 5;
    Point points[n];
    cout << "enter coordinates of triangle's points:" << endl;
    cout << "coordinates of point A: ";
    cin >> t.A.x >> t.A.y;
    cout << "coordinates of point B: ";
    cin >> t.B.x >> t.B.y;
    cout << "coordinates of point C: ";
    cin >> t.C.x >> t.C.y;
    if(t.isDegenerate()){
        cout << "triangle is degenerate" << endl;
    }
    else{
        cout << "triangle is not degenerate" << endl;
    }

    for(int i = 0; i < n; i++){
        cout << "point " << i + 1 << ": ";
        cin >> points[i].x >> points[i].y;
    }
    for(int i = 0; i < n; i++){
        cout << "point " << i + 1 << ": ";
        if(t.isEdging(points[i])){
            cout << "is on the edge" << endl;
        }
        else if(t.contains(points[i])){
            cout << "is in the triangle" << endl;
        }
        else{
            cout << "is not in the triangle" << endl;
        }
    }
    
    return 0;
}