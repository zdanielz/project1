#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    system("clear");
    debil:
    char yn;
    cout << "вы человек ?(Y , N): ";
    cin >> yn;
    switch(yn)
    {
        case 'n':
        case 'N':
        cout << "марсианина ответ";
        break;
        case 'y':
        case 'Y':
        debil2:
        char yn2;
        cout << "вы жрете чипсы ?(Y , N) : ";
        cin >> yn2;
        switch(yn2)
        {
            case 'y':
            case 'Y':
            cout << "МОЙ ВЕРДИКТ - ВЫ ПЖИРНЫЙ";
            break;
            case 'n':
            case 'N':
            cout << "Я же знаю что ты жреш чипсы";
            break;
            default:
            cout << "ты дыже ответ нормально написать не можеш ?\n" << "АНУ БЫСТОР НАПИСАЛ ОТВЕТ НОРМАЛЬНО\n";
            goto debil2;
            break;
        }
        break;
        default:
        cout << "ты дыже ответ нормально написать не можеш ?\n" << "АНУ БЫСТОР НАПИСАЛ ОТВЕТ НОРМАЛЬНО\n";
        goto debil;
    }
    cout << '\n';
}





































