#include "../../includes/abstract-factory/gas_door.h"

GasDoor::GasDoor() {
  std::cout << "Making a door for a gas car." << std::endl;
}

void GasDoor::Open() const {
  std::cout << "Click!" << std::endl;
}