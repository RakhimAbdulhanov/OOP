#ifndef CHECK_H
#define CHECK_H

struct Point
{
    double x,y;
    Point() : x(0),y(0){}
};

struct Triangle
{
    Point A, B, C;

    bool contains(const Point& P) const;
    double area() const;
    bool isDegenerate() const;
    bool hasPointOnEdge(const Point& P) const;
};

double vectorProduct(const Point& A, const Point& B, const Point& P);
#endif // CHECK_H
