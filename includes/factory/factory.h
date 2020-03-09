#ifndef FACTORY_H
#define FACTORY_H
#include "vehicle.h"
#include "../../includes/factory/two_wheeler.h"
#include "../../includes/factory/three_wheeler.h"
#include "../../includes/factory/four_wheeler.h"

enum VehicleType {
  VT_TwoWheeler, VT_ThreeWheeler, VT_FourWheeler
};

class Factory {
public:
  Factory() = delete;
  static Vehicle* create(VehicleType type) {
    if (type == VT_TwoWheeler) {
      return new TwoWheeler();
    } else if (type == VT_ThreeWheeler) {
      return new ThreeWheeler();
    } else if (type == VT_FourWheeler) {
      return new FourWheeler();
    } else return NULL;
  }
};

#endif