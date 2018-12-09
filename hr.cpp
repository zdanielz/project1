#include <iostream>
#include <cstdlib>
#include <stdio.h>
using namespace std;

// 1 - +

int main()
{
    long double pi = 1.0;
    int p = -1;
    for(int i = 1; i < 100000; i ++)
    {
        for(int a = 2; a < i; a++)
        {
            if((a % i) != 0) {
                if(p == 1)
                {
                    pi += 1.0/i;
                }

                if(p == -1)
                {
                    pi -= 1.0/i;
                }
            }
            p = -p;
        }
    }
    pi *= 4;
    cout << fixed;
    cout.precision(64);
    cout << pi << endl;
}


//61

//3.1415726535897953940711102571725632515153847634792327880859375000
//3.1415726535897953940711102571725632515153847634792327880859375000

