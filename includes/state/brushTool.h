#ifndef BRUSH_TOOL_H
#define BRUSH_TOOL_H

#include "tool.h"

class BrushTool : public Tool {
public:
  void mouseUp() const override;
  void mouseDown() const override;
};

#endif