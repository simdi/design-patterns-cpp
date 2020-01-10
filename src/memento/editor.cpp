#include <includes/memento/editor.h>

EditorState Editor::CreateState() const {
  EditorState editorState(Editor::Content());
  return editorState;
} 

void Editor::Content(string content) {
  Editor::content_ = content;
}

string Editor::Content() const {
  return Editor::content_;
}

void Editor::Restore(EditorState state) {
  Editor::content_ = state.Content();
};