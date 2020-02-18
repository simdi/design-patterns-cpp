#ifndef FACTORY_H
#define FACTORY_H
#include "vehicle.h"

enum VehicleType {
  VT_TwoWheeler, VT_ThreeWheeler, VT_FourWheeler
};

class Factory {
public:
  Factory(){};
  static Vehicle* create(VehicleType type);
};

#endif