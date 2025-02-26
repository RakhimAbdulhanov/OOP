#include "price.h"

void set(Price &a, int u, int c){
    a.uah = u + c / 100;
    a.coin = c % 100;
}

void add(Price &a, const Price& another){
    a.uah += another.uah;
    a.coin += another.coin;
    if(a.coin >= 100){
        a.uah++;
        a.coin %= 100;
    }
}

void multiply(Price &a, int n){
    int valueInCoins = (a.uah * 100 + a.coin) * n;
    a.uah = valueInCoins / 100;
    a.coin = valueInCoins % 100;
}

void round(Price &a){
    int valueInCoins = a.uah * 100 + a.coin;
    int lastDigit = valueInCoins % 10;
    if(lastDigit < 5){
        valueInCoins -= lastDigit;
    }else{
        valueInCoins += (10 - lastDigit);
    }
    a.uah = valueInCoins / 100;
    a.coin = valueInCoins % 100;
}

void print(const Price &a) {
    std::cout << a.uah << " грн " << a.coin << " коп" << std::endl;
}