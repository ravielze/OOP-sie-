#include "A.hpp"

int main()
{
    A *satu = new A(1);
    A *dua = new A(2);
    A *tiga = new A(3);
    A *empat = new A(4);
    *tiga = *satu; // cassign 3 = 1
    A *lima = new A(5);
    *empat = *lima;
    delete lima;
    A *enam = new A(6);
    A *empat_copy = new A(*empat); // tapi isi 5
    A *dua_copy = new A(*dua);
    *dua_copy = *enam;
    *satu = *empat;
    dua->show();
    delete dua;        //2
    delete empat;      //5
    delete enam;       //6
    delete empat_copy; //5
    delete tiga;       //1
    delete dua_copy;   //6
    delete satu;       //5
    return 0;
}