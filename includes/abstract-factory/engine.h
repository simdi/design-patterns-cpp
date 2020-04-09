#ifndef ENGINE_H
#define ENGINE_H

class Engine {
protected:
  virtual ~Engine() = default;
  char _sound[15];
public:
  Engine(){
    strcpy(_sound, "");
  };
  virtual void Run() = 0;
};

#endif