#include <iostream>
#include <fstream>

#include "price.cpp"
using namespace std;

int main(){
    
    ifstream file("product.txt");
    if(!file){
        cerr << "Помилка" << endl;
        return 1;
    }

    Price total = {0, 0};

    int uah, coin, n;
    while(file >> uah >> coin >> n){
        Price price;
        price = set(price, uah, coin);
        total = multiply(price, n);
        total = add(total, price);
    }
    file.close();

    cout << "Загальна сума: ";
    print(total);
    cout << "\n";
    total = round(total);
    cout << "Сума після заокруглення: ";
    print(total);

    return 0;
}