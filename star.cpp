#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;


int main(int argc, char* argv[]) {
    if (atoi(argv[1]) <= 0)
    {
        cout << "Usage: ./star" << endl;
        return 0;
    }
    int monChoix = atoi(argv[1]);

    //boucle 1
    for (int i = 1; i <= monChoix; i++)
    {
        for (int j = 1; j <= (monChoix * 2 + 1) + ((monChoix * 2) / 2) - i; j++) {
            cout << " ";
        }
        for (int k = 0; k <= i - 1; k++) {
            if (k == 0 || k == i - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    //boucle 2a
    for (int i = 0; i < monChoix * 2 + 1; i++)
    {
        cout << "*";
    }

    //boucle 2b
    for (int i = monChoix * 2 + 1; i < (2 * (monChoix * 2 + 1)) + (monChoix * 2 - 1); i++)
    {
        if (i < (monChoix * 2 + 1) + (monChoix * 2 - 1))
            cout << " ";
        else if (i >= (monChoix * 2 + 1) + (monChoix * 2 - 1))
            cout << "*";
    }
    cout << endl;

    //boucle 3a
    for (int i = monChoix; i > 0; i--)
    {
        for (int j = 1; j <= monChoix - i; j++) {
            cout << " ";
        }
        for (int k = 0; k <= i - 1; k++) {
            if (k == 0)
                cout << " *";
        }
        for (int j = 0; j <= ((monChoix * 2)) + (monChoix * 2 - 1) - 1; j++) {
            cout << " ";
        }
        for (int k = 0; k <= i - 1; k++) {
            if (k == i - 1)
                cout << " *";
            else
                cout << "  ";
        }
        cout << endl;
    }

    //boucle 3b

    for (int i = 2; i <= monChoix; i++)
    {
        for (int j = 1; j <= monChoix - i; j++) {
            cout << " ";
        }
        for (int k = 0; k <= i - 1; k++) {
            if (k == 0)
                cout << " *";
        }
        for (int j = 0; j <= ((monChoix * 2)) + (monChoix * 2 - 1) - 1; j++) {
            cout << " ";
        }
        for (int k = 0; k <= i - 1; k++) {
            if (k == i - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    //boucle 4a
    for (int i = 0; i < monChoix * 2 + 1; i++)
    {
        cout << "*";
    }

    //boucle 4b
    for (int i = monChoix * 2 + 1; i < (2 * (monChoix * 2 + 1)) + (monChoix * 2 - 1); i++)
    {
        if (i < (monChoix * 2 + 1) + (monChoix * 2 - 1))
            cout << " ";
        else if (i >= (monChoix * 2 + 1) + (monChoix * 2 - 1))
            cout << "*";
    }
    cout << endl;

    //boucle 5
    for (int i = monChoix; i > 0; i--)
    {
        for (int j = 1; j <= (monChoix * 2 + 1) + ((monChoix * 2) / 2) - i; j++) {
            cout << " ";
        }
        for (int k = 0; k <= i - 1; k++) {
            if (k == 0 || k == i - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}
