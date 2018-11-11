#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    system("clear");
    char yn;
    cout << "вы дебил ?(Y , N): ";
    cin >> yn;
    switch(yn)
    {
        case 'n':
        case 'N':
        cout << "пидора ответ";
        break;
        case 'y':
        case 'Y':
        char yn2;
        cout << "вы жрете говно ?(Y , N) : ";
        cin >> yn2;
        switch(yn2)
        {
            case 'y':
            case 'Y':
            cout << "МОЙ ВЕРДИКТ - ВЫ ПИДОР ГОВНОЖУЙ";
            break;
            case 'n':
            case 'N':
            cout << "Я же знаю что ты жреш говно";
            break;
        }
        break;
        default:
        cout << "ну ты внатуре дебил";
        break;
    }
    cout << '\n';
}





































