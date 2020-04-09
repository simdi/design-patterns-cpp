#ifndef ELECTRIC_DOOR_H
#define ELECTRIC_DOOR_H

#include <iostream>
#include "door.h"

class ElectricDoor : public Door {
  void Open() const;
};

#endif