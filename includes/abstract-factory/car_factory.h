#ifndef CAR_FACTORY_H
#define CAR_FACTORY_H

#include <memory>
#include "door.h"
#include "engine.h"

class CarFactory {
public:
  virtual std::shared_ptr<Door> BuildDoor() = 0;
  virtual std::shared_ptr<Engine> BuildEngine() = 0;
  virtual ~CarFactory() = default;
};

#endif