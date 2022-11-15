#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include "lubancalc.h"
#include <math.h>

using namespace std;

int main()
{
    char* mathematicalproblem = (char*)malloc(200 * pow(1024, 2));
    char* daunbuffer = (char*)malloc(60 * pow(1024, 2));
    cout << "Welcome to the LUBAN CALCILATOR!\nEnterr your mathematical problem: ";
    cin >> mathematicalproblem;
    lubancalc CALCUL;
    if (!CALCUL.solve()) {
        cout << "HE EBY" << endl;
        Sleep(2000);
        cout << "LADNO SHA POCHITAUU...." << endl;
        Sleep(1200);
        cout << "ebashu " << &daunbuffer << endl;

        for (int i = 0; i < 2; i++) {
            Sleep(1500);
            cout << "hmm";
            for (int i = 0; i < 3; i++) {
                free(daunbuffer);
                daunbuffer = (char*)malloc((rand() % 2048 + 580) * pow(1024, 2));
                Sleep(650);
                for (int i = 0; i < (rand() % 19000 + 3000); i++) { CALCUL.streees(); }
                cout << ".";
            }
            cout << endl;
        }

        cout << "ya vso pon" << endl;
        Sleep(1200);
        cout << "sha check.." << endl;

        for (int i = 0; i < 3; i++) {
            Sleep(1500);
            cout << "hmm";
            for (int i = 0; i < 3; i++) {
                free(daunbuffer);
                daunbuffer = (char*)malloc((rand() % 4000 + 1080) * pow(1024, 2));
                Sleep(650);
                for (int i = 0; i < (rand() % 19000 + 3000); i++) { CALCUL.streees(); }
                cout << "!";
            }
            cout << endl;
        }

        cout << "OK gGENerU OTVET" << endl;
        Sleep(1200);

        while (true) {
            free(daunbuffer);
            daunbuffer = (char*)malloc((rand() % 7000 + 80) * pow(1024, 2));
        }
    }
    return 0;
}