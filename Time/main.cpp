#include <iostream>
using std::cout;
using std::endl;

#include "Time.h"

//o uso de métodos inline não alteram a lógica do programa

int main() {
  Time t(23,59,59);

  t.printUniversal();
  t.tick();

  return 0;
}
