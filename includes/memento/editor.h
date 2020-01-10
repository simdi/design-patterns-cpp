#ifndef EDITOR_H
#define EDITOR_H

#include <string>
#include "editorState.h"

using namespace std;

class Editor {
public:
  Editor(){};
  EditorState CreateState() const;
  void Content(string content);
  string Content() const;
  void Restore(EditorState state);

private:
  string content_;
};

#endif