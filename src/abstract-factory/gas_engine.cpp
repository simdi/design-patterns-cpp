#include "../../includes/abstract-factory/gas_engine.h"

GasEngine::GasEngine() {
  strcpy(_sound, "Vroom!");
  std::cout << "Making an engine for an gas car." << std::endl;
}

void GasEngine::Run() const {
  std::cout << _sound << std::endl;
}