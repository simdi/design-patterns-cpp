#include "../../includes/abstract-factory/electric_factory.h"

std::shared_ptr<Door>ElectricFactory::BuildDoor() {
  return std::make_unique<ElectricDoor>();
}

std::shared_ptr<Engine>ElectricFactory::BuildEngine() {
  return std::make_unique<ElectricEngine>();
}