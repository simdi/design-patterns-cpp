#ifndef GAS_DOOR_H
#define GAS_DOOR_H

#include <iostream>
#include "door.h"

struct GasDoor : public Door {
  void Open() const;
};

#endif