#ifndef SELECTION_TOOL_H
#define SELECTION_TOOL_H

#include "tool.h"

class SelectionTool : public Tool {
public:
  void mouseUp() const override;
  void mouseDown() const override;
};

#endif