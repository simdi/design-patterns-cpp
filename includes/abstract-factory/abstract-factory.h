#include <iostream>
#include <string>
#include "car_factory.h"
#include "gas_factory.h"
#include "electric_factory.h"
#include "door.h"
#include "engine.h"

class AbstractFactory {
// protected:
//   ~AbstractFactory() = default;
private:
  int m_choice;
  std::shared_ptr<CarFactory> m_carPlant = nullptr;
public:
  void Run();
};