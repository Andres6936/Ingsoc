#include <BearLibTerminal/BearLibTerminal.hpp>

#include "Ingsoc/Player.h"
#include "Ingsoc/Dungeon.h"
#include "Ingsoc/Event.h"
#include "Ingsoc/Scene.h"

int main(int argc, char **argv)
{
	TerminalOpen();
	TerminalSet("terminal: encoding=437");
	TerminalSet("window: size=80x60, cellsize=16x16, title='Bear'");

	TerminalColor(ColorFromName("black"));
	TerminalBackColor(ColorFromName("white"));

	Player player = {5, 5, '@'};

	/**
	 * Represent the map or dungeon of application (game).
	 */
	char dungeon[DUNGEON_ROW][DUNGEON_COLUMN];

	CreateDungeon(dungeon);

	TerminalClear();

	DrawTitle();

	TerminalRefresh();

	while (true)
	{
		// Read the events of terminal
		int key = TerminalRead();

		HandleEvent(key);
		HandleEventPlayer(key, &player);
	}

	TerminalClose();

	return 0;
}
