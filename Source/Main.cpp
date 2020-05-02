#include <BearLibTerminal/BearLibTerminal.hpp>

#include "Include/Direction.h"
#include "Include/Player.h"
#include "Include/Dungeon.h"
#include "Include/Event.h"
#include "Include/Scene.h"


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
	//DrawDungeon(dungeon);
	//DrawPlayer(&player);

	TerminalRefresh();

	while (true)
	{
		// Read the events of terminal
		int key = TerminalRead();

		HandleEvent(key);
		HandleEventPlayer(key, &player);

		//terminal_clear();

		//DrawDungeon(dungeon);
		//DrawPlayer(&player);

		//terminal_refresh();

	}

	TerminalClose();

	return 0;
}
