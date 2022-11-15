#include <iostream>
#include <windows.h>
#include "lubancalc.h"

using namespace std;

int main()
{
    char mathematicalproblem;
    cout << "Welcome to the LUBAN CALCILATOR!\nEnterr your mathematical problem: ";
    cin >> mathematicalproblem;
    lubancalc CALCUL;
    if (!CALCUL.solve()) {
        cout << "HE EBY" << endl;
        Sleep(2000);
        cout << "IDI CKOPEE HAXYI" << endl;
        Sleep(1000);
        cout << "cam Pecai cBoI obossani PRIMER DAUUUN!" << endl;
        system("pause");
    }
    return 0;
}