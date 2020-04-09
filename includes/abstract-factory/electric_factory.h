#ifndef ELECTRIC_FACTORY_H
#define ELECTRIC_FACTORY_H

#include "car_factory.h"
#include "electric_door.h"
#include "electric_engine.h"

class ElectricFactory: public CarFactory {
public:
  std::shared_ptr<Door> BuildDoor();
  std::shared_ptr<Engine> BuildEngine();
};

#endif