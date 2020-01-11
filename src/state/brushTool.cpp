#include <iostream>
#include "../../includes/state/brushTool.h"

using namespace std;

void BrushTool::mouseUp() const override {
  cout << "Draw a Brush" << endl;
}

void BrushTool::mouseDown() const override {
  cout << "Brush Tool clicked" << endl;
}