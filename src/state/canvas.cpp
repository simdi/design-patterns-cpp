#include <iostream>
#include "../../includes/state/canvas.h"
#include "../../includes/state/tool.h"

void Canvas::mouseUp() const {
  Canvas::currentTool_.mouseUp();
};
void Canvas::mouseDown() const {
  Canvas::currentTool_.mouseDown();
};
Tool* Canvas::CurrentTool() const {
  return Canvas::currentTool_;
};
void Canvas::CurrentTool(Tool* tool) {
  Canvas::currentTool_ = tool;
};