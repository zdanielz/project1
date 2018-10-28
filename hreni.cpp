#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");
    string n = "рома";
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];
    cout << "Введите свое имя: \n";
    cin >> name;
    cout << "Введите свой любимый десерт: \n";
    cin >> dessert;
    cout << "У меня есть вкусный " << dessert;
    cout << " для вас, " << name << ". \n";
    return 0;
}