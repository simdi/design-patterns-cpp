#include <iostream>
#include "vehicle.h"

class TwoWheeler : public Vehicle {
public:
  void printVehicle() const {
    std::cout << "I am a two wheeler vehicle." << std::endl;
  }
};