#include <iostream>
#include "vehicle.h"

class FourWheeler : public Vehicle {
public:
  void printVehicle() const {
    std::cout << "I am a four wheeler vehicle." << std::endl;
  }
};