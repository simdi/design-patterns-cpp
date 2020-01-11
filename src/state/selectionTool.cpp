#include <iostream>
#include "../../includes/state/selectionTool.h"

using namespace std;

void SelectionTool::mouseUp() const override {
  cout << "Draw a dash rectangle" << endl;
}

void SelectionTool::mouseDown() const override {
  cout << "Selection Tool clicked" << endl;
}