#include "A.hpp"
#include <iostream>
using namespace std;

int main(){
    A* satu = new A('1');
    A* dua = new A('2');
    A* copy_satu = new A(*satu);
    *copy_satu = *dua;
    dua->show();
    delete dua;
    delete copy_satu;
    delete satu;
}