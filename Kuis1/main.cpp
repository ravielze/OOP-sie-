#include "DeretLampu.hpp"
#include <iostream>
using namespace std;

int main()
{
    Deret_Lampu deret;
    cout << "Awal:" << endl;
    deret.PrintDeretLampu();

    cout << endl
         << "4:" << endl;
    deret.atur_nyala(4);
    deret.PrintDeretLampu();

    cout << endl
         << "2:" << endl;
    deret.atur_nyala(2);
    deret.PrintDeretLampu();

    cout << endl
         << "3:" << endl;
    deret.atur_nyala(3);
    deret.PrintDeretLampu();
    cout << endl
         << "O: Nyala, X: Mati" << endl;
    return 0;
}