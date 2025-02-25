#ifndef PRICE_H
#define PRICE_H

#include <iostream>

struct Price{
    int uah;
    short int coin;
    void set(int u, int c);
    void add(const Price& another);
    void multiply(int n);
    void round();
    void print() const;

};

#endif // PRICE_H
