#include "../includes/abstract-factory/abstract-factory.h"

// int AbstractFactory::m_choice = NULL;
// std::unique_ptr<CarFactory> AbstractFactory::m_carPlant = nullptr;

void AbstractFactory::Run() {
  std::cout << "Select a car type: " << std::endl;
  std::cout << "1. Gasoline" << std::endl;
  std::cout << "2. Electric" << std::endl;
  std::cout << "Selection: " << std::endl;
  std::cout << m_choice << std::endl;

  switch (m_choice) {
    case 1:
      m_carPlant = std::make_shared<GasFactory>();
      break;
    case 2:
      m_carPlant = std::make_shared<ElectricFactory>();
      break;
    default:
      std::cout << "Invalid selection." << std::endl;
      m_carPlant = nullptr;
      break;
  }

  if (m_carPlant != nullptr) {
    std::shared_ptr<Door> myDoor = m_carPlant->BuildDoor();
    std::shared_ptr<Engine> myEngine = m_carPlant->BuildEngine();

    myDoor->Open();
    myEngine->Run();
  }
}