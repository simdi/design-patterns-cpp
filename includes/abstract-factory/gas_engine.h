#ifndef GAS_ENGINE_H
#define GAS_ENGINE_H

#include <iostream>
#include "engine.h"

class GasEngine : public Engine {
public:
  GasEngine();
  void Run() const;
};

#endif