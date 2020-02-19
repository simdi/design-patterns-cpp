#include <iostream>
#include "../../includes/singleton/singleton.h"

// Singleton* Singleton::_single = nullptr;

Singleton::~Singleton() {
  std::cout << "Singleton has been destroyed." << std::endl;
  _single = nullptr;
}

