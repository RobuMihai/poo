#include "Number.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    // initializare
    Number num("ABC", 16);

    // print
    cout << "Numarul: ";
    num.Print();
    cout << endl;

    // nr in baza 10
    num.Print();
    cout << " in baza 10: " << num.base10() << endl;

    // compara
    Number num2("DEF", 16);
    if (num < num2) {
        num.Print();
        cout << " este mai mic decat ";
        num2.Print();
        cout << endl;
    }
    else {
        num.Print();
        cout << "este mai mare sau egal decat" << endl;
        num2.Print();
    }

    // adunare
    Number sum = num + num2;
    cout << "Suma numerelor ";
    sum.Print();
    cout << endl;

    // scadere
    Number diff = num2 - num;
    cout << "Diferenta numerelor ";
    diff.Print();
    cout << endl;

    // cifra de la un anumit index
    cout << "Digit-ul de la indexul 1: " << num[1] << endl;

    // sterge digit
    cout << "Sterge primul digit: ";
    (--num).Print();
    cout << endl;

    // schimba baza
    num.Print();
    cout << " (in baza 10) = ";
    num.SwitchBase(8);
    cout << " (in baza 8)"<<endl;

    return 0;
}
