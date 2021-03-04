// main.cpp
#include "A.hpp"
#include "B.hpp"

int main()
{
  B b;
  A *bAsA = &b;
  b.setValue(10888);
  bAsA->setValue(888);

  b.print();
  return 0;
}