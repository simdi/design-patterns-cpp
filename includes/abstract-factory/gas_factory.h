#ifndef GAS_FACTORY_H
#define GAS_FACTORY_H

#include "car_factory.h"
#include "gas_engine.h"
#include "gas_door.h"

class GasFactory: public CarFactory {
public:
  std::shared_ptr<Door> BuildDoor();
  std::shared_ptr<Engine> BuildEngine();
};

#endif