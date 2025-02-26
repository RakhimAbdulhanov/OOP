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
    set(total, 0, 0);

    int uah, coin, n;
    while(file >> uah >> coin >> n){
        Price price;
        set(price, uah, coin);
        multiply(price, n);
        add(total, price);
    }
    file.close();

    cout << "Загальна сума: ";
    print(total);
    cout << "\n";
    round(total);
    cout << "Сума після заокруглення: ";
    print(total);
    system("pause");

    return 0;
}