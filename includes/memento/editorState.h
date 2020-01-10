#ifndef EDITOR_STATE_H
#define EDITOR_STATE_H

#include <string>

using namespace std;

class EditorState {
public:
  EditorState(string content) : content_(content) {};
  string Content() const;

private:
  string const content_;
};

#endif