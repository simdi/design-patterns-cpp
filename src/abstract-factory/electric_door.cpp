#include "../../includes/abstract-factory/electric_door.h"

ElectricDoor::ElectricDoor() {
  std::cout << "Making a door for a electric car." << std::endl;
}

void ElectricDoor::Open() const {
  std::cout << "Shh!" << std::endl;
}