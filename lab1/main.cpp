#include <iostream>
#include <fstream>
#include <windows.h>
#include "price.cpp"
using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);
    ifstream file("product.txt");
    if(!file){
        cerr << "Помилка" << endl;
        return 1;
    }

    Price total;
    total.set(0,0);

    int uah, coin, n;
    while(file >> uah >> coin >> n){
        Price price;
        price.set(uah, coin);
        price.multiply(n);
        total.add(price);
    }
    file.close();

    cout << "Загальна сума: ";
    total.print();
    cout << "\n";
    total.round();
    cout << "Сума після заокруглення: ";
    total.print();
    system("pause");

    return 0;
}