#include "price.h"

void Price::set(int u, int c){
    uah = u + c / 100;
    coin = c % 100;
}

void Price::add(const Price& another){
    uah += another.uah;
    coin += another.coin;
    if(coin > 100){
        uah++;
        coin %= 100;
    }
}

void Price::multiply(int n){
    int valueInCoins = (uah * 100 + coin) * n;
    uah = valueInCoins / 100;
    coin = valueInCoins % 100;
}

void Price::round(){
    int valueInCoins = uah * 100 + coin;
    int lastDigit = valueInCoins % 10;
    if(lastDigit < 5){
        valueInCoins -= lastDigit;
    }else{
        valueInCoins += (10 - lastDigit);
    }
    uah = valueInCoins / 100;
    coin = valueInCoins % 100;
}

void Price::print() const{
    std::cout << uah << " грн " << coin << " коп" << std::endl;
}