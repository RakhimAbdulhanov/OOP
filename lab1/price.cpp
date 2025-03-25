#include "price.h"

Price set(Price a, int u, int c){
    a.uah = u + c / 100;
    a.coin = c % 100;
    return a;
}

Price add(Price a, const Price b){
    a.uah += b.uah;
    a.coin += b.coin;
    if(a.coin >= 100){
        a.uah++;
        a.coin %= 100;
    }
    return a;
}

Price multiply(Price &a, int n){
    int valueInCoins = (a.uah * 100 + a.coin) * n;
    a.uah = valueInCoins / 100;
    a.coin = valueInCoins % 100;
    return a;
}

Price round(Price &a){
    int valueInCoins = a.uah * 100 + a.coin;
    int lastDigit = valueInCoins % 10;
    if(lastDigit < 5){
        valueInCoins -= lastDigit;
    }else{
        valueInCoins += (10 - lastDigit);
    }
    a.uah = valueInCoins / 100;
    a.coin = valueInCoins % 100;
    return a;
}

void print(const Price &a) {
    std::cout << a.uah << " грн " << a.coin << " коп" << std::endl;
}