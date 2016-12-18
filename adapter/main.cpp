
#include "editor.hpp"
#include "line.hpp"
#include "text.hpp"
#include "circle.hpp"

int main()
{
	Editor editor;

	editor.addLine({ 0.0, 0.0 }, { 2.1, 5.3 });
	editor.addCircle({ 0.0, 10.0 }, 4.5);

	editor.addTextElement("Some text...", { 4.5, -2.3 });

	editor.display();

	return 0;
}