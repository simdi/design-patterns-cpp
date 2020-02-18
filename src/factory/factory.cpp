#include <iostream>
#include "../../includes/factory/factory.h"
#include "../../includes/factory/two_wheeler.h"
#include "../../includes/factory/three_wheeler.h"
#include "../../includes/factory/four_wheeler.h"

Factory::Factory() {
  std::cout << "I'm the factory." << std::endl;
}

Factory static::create(VehicleType type) {
  if (type == VT_TwoWheeler) {
    return TwoWheeler;
  } else if (type == VT_ThreeWheeler) {
    return ThreeWheeler();
  } else if (type == VT_FourWheeler) {
    return FourWheeler();
  } else return NULL;
}