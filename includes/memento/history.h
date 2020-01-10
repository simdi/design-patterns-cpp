#ifndef HISTORY_H
#define HISTORY_H

#include <vector>
#include <editorState.h>

using namespace std;

class History {
public:
  vector<EditorState> states;
  void Push(EditorState state);
  EditorState Pop();
};

#endif