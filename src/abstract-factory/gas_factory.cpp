#include "../../includes/abstract-factory/gas_factory.h"

std::shared_ptr<Door>GasFactory::BuildDoor() {
  return std::make_unique<GasDoor>();
}

std::shared_ptr<Engine>GasFactory::BuildEngine() {
  return std::make_unique<GasEngine>();
}