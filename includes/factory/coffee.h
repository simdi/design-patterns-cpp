#ifndef COFFEE_H
#define COFFEE_H
#include <iostream>
#include <memory>

enum CoffeeType { CT_Espresso = 1, CT_Cappuccino };
// Base class
class Coffee {
protected:
  std::string _type;
public:
  void setType(std::string type) { _type = type; };
  const std::string getType() const { return _type; };
};

class Espresso : public Coffee {
public:
  Espresso() {
    setType("Espresso");
    std::cout << std::endl << "Making a cup of espresso" << std::endl;
    std::cout << "Grind and brew one scoop of espresso beans." << std::endl;
  };
};

class Cappuccino : public Coffee {
public:
  Cappuccino() {
    setType("Cappuccino");
    std::cout << std::endl << "Making a cup of cappuccino" << std::endl;
    std::cout << "Grind and brew one scoop of cappuccino beans." << std::endl;
    std::cout << "Heat and foam milk." << std::endl;
  };
};

class CoffeeMakerFactory {
public:
  std::auto_ptr<Coffee> create() {
    std::cout << "Select type of coffee to make:" << std::endl;
    std::cout << "1: Espresso" << std::endl;
    std::cout << "2: Cappuccino" << std::endl;
    std::cout << "Selection: ";
    int choice;
    std::cin >> choice;

    CoffeeType newChoice = static_cast<CoffeeType>(choice);

    std::cout << choice << std::endl;
    switch (newChoice) {
      case CoffeeType::CT_Espresso:
        return std::auto_ptr<Coffee>(new Espresso());
      case CoffeeType::CT_Cappuccino:
        return std::auto_ptr<Coffee>(new Cappuccino());
      default:
        std::cout << "Invalid selection" << std::endl;
        return std::auto_ptr<Coffee>();
    }
  }
};

#endif