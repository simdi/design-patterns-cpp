#ifndef DOOR_H
#define DOOR_H

class Door {
protected:
  virtual ~Door() = default;
public:
  Door() {};
  virtual void Open() = 0;
};

#endif