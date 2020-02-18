#include <iostream>
#include "vehicle.h"

class ThreeWheeler : public Vehicle {
public:
  void printVehicle() const {
    std::cout << "I am a three wheeler vehicle." << std::endl;
  }
};