#include "../../includes/abstract-factory/electric_engine.h"

ElectricEngine::ElectricEngine() {
  strcpy(_sound, "SHH!");
  std::cout << "Making an engine for an electric car." << std::endl;
}

void ElectricEngine::Run() const {
  std::cout << _sound << std::endl;
}