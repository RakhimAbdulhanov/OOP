#include "check.h"
#include <cmath>


double vectorProduct(const Point& A, const Point& B, const Point& P){
    return (B.x - A.x)*(P.y - A.y)-(B.y - A.y) * (P.x - A.x);
}

bool Triangle::contains(const Point& P) const{
    double S1 = vectorProduct(A, B, P);
    double S2 = vectorProduct(B, C, P);
    double S3 = vectorProduct(C, A, P);

    return (S1 >= 0 && S2 >= 0 && S3 >= 0) || (S1 <= 0 && S2 <= 0 && S3 <= 0);

}

double Triangle::area() const{
    return abs(vectorProduct(A, B, C)) / 2.0;
}

bool Triangle::isDegenerate() const{
    return area() == 0;
}

    