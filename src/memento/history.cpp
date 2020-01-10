#include "../../includes/memento/history.h"

void History::Push(EditorState state) {
  History::states.push_back(state);
};

EditorState History::Pop() {
  EditorState lastElement = History::states.back();
  // Delete the last item in the vector.
  History::states.pop_back();
  return lastElement;
};