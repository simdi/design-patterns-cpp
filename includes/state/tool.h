#ifndef TOOL_H
#define TOOL_H
// This could be an interface.

class Tool {
public:
  virtual void mouseUp() const = 0;
  virtual void mouseDown() const = 0;
};

#endif