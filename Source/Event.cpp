#include "Include/Event.h"

void HandleEvent(int key)
{
	// The user close the terminal or window
	if (key == TK_CLOSE)
	{
		TerminalClose();
		exit(EXIT_SUCCESS);
	}
}
