#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
using namespace std;

void text (double ves, int age, string name, string slovo1, string slovo2);
int roma(string a);

int main()
{
    srand(time(NULL));
    setlocale(LC_CTYPE,"Russian");
    int a = (rand() % 10);
    int b = (rand() % 10);
    string slovo1 [10] = {"ДРИСТОКОПТЕР","РВОТОГРЫЗ","ДОЛБОКОПТЕР","КИБЕРБОМЖ","ДИКОХУЙ","СВИНОДУДОН","ПЕРДОЛЁТ","МУДОДЁР","ХРЕНОУЛОВИТЕЛЬ","ДЕБИЛОВОРОТ"};
    string slovo2 [10] = {"ОБОСРАНЫЙ","КОВАРНЫЙ","УГРЮМЫЙ","ГАДКИЙ","МУДАЦКИЙ","ЖАДНЫЙ","КАРЛИКОВЫЙ","ПОМЕШАННЫЙ","ПОГАНЫЙ","АСТРАЛЬНЫЙ"};
    int run = 1;
    while (run)
    {
        text(0,0,"lox",slovo1[a],slovo2[b]);
        cout << endl << "продолжить (1) или фсеё (0) : ";
        cin >> run;
    }
    return 0;
}

void text(double ves, int age, string name, string slovo1, string slovo2)
{
    int z = 0;
    cout << "введите ваш вес в кг : ";
    cin >> ves;
    cout  << "введите ваш возраст в годах : ";
    cin >> age;
    cout  << "введите ваше имя в буквах : ";
    cin >> name;
    z = roma(name);
    if (z == 0)
    {
        cout << endl << "ваш вес : " << ves << endl << "ваш возраст : " << age << endl << "ваше имя : " << name << endl;
    }
    if (z == 1)
    {
        cout << endl << "СУДАРЬ РОМА ВЫ " << slovo1 << " " << slovo2 << endl;
    }
}

int roma(string a)
{
    if (sizeof(a) != 8)
    {
        return 0;
    }
    int x = 0;
    if ((a[1] + a[2]) == -176)
    {
        ++x;
    }
    if ((a[3] + a[4]) == -114)
    {
        ++x;
    }
    if ((a[5] + a[6]) == -116)
    {
        ++x;
    }
    if ((a[7] + a[8]) == -80)
    {
        ++x;
    }
    if (x == 4)
    {
        return 1;
    }
    return 0;
}

