#include <iostream>
#include "../includes/memento/editor.h"
#include "../includes/memento/history.h"

using namespace std;

int main() {
  Editor editor;
  History history;

  editor.Content("John");
  history.Push(editor.CreateState());
  editor.Content("Doe");
  history.Push(editor.CreateState());
  editor.Content("Ebere");
  editor.Restore(history.Pop());

  cout << "Last state: " << editor.Content() << endl;
  return 0;
}