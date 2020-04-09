#ifndef ELECTRIC_ENGINE_H
#define ELECTRIC_ENGINE_H

#include <iostream>
#include "engine.h"

class ElectricEngine : public Engine {
public:
  ElectricEngine();
  void Run() const;
};

#endif