#ifndef CANVAS_H
#define CANVAS_H

#include "tool.h"

class Canvas {
public:
  void mouseUp() const;
  void mouseDown() const;
  Tool* CurrentTool() const;
  void CurrentTool(Tool* tool);
private:
  Tool* currentTool_;
};

#endif