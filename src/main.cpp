#include <iostream>
#include "../includes/memento/editor.h"
#include "../includes/memento/history.h"
#include "../includes/state/canvas.h"
#include "../includes/state/selectionTool.h"
#include "../includes/factory/factory.h"
#include "../includes/singleton/singleton.h"

using namespace std;

int main() {
  /*
  * Creational Patterns
  */
  // Factory Pattern
  // VehicleType type = VT_TwoWheeler;
  // Vehicle *pVehicle = NULL;
  // pVehicle = Factory::create(type);
  // pVehicle->printVehicle();
  // type = VT_FourWheeler;
  // pVehicle = Factory::create(type);
  // pVehicle->printVehicle();

  // Singleton Pattern
  Singleton *singleton = Singleton::getInstance();
  Singleton *singleton2 = Singleton::getInstance();

  std::cout << "Singleton 1: " << singleton << " " << singleton2 << std::endl;



  /*
  * Behavioral Pattern
  */
  // Memento Pattern
  // Editor editor;
  // History history;
  // editor.Content("John");
  // history.Push(editor.CreateState());
  // editor.Content("Doe");
  // history.Push(editor.CreateState());
  // editor.Content("Ebere");
  // editor.Restore(history.Pop());
  // cout << "Last state: " << editor.Content() << endl;

  /*
  * State Pattern
  */
  // Canvas canvas;
  // SelectionTool *selectionTool;
  // canvas.CurrentTool(selectionTool);
  // canvas.mouseDown();
  // canvas.mouseUp();


  return 0;
}