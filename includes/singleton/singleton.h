#ifndef SINGLETON_H
#define SINGLETON_H

class Singleton {
private:
  static Singleton* _single;
  Singleton();
  Singleton(const Singleton&) = delete;
  ~Singleton();
public:
  static Singleton* getInstance() {
    if (_single != nullptr) {
      _single = new Singleton();
      return _single;
    }
    return _single;
  }
};

#endif