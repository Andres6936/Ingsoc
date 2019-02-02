#include <stdbool.h>

#include "Include/BearLibTerminal.h"
#include "Include/Direction.h"
#include "Include/Player.h"
#include "Include/Dungeon.h"
#include "Include/Event.h"
#include "Include/Scene.h"


int main(int argc, char **argv)
{
	terminal_open();
	terminal_set("terminal: encoding=437");
	terminal_set("window: size=80x60, cellsize=16x16, title='Bear'");

	terminal_color(color_from_name("black"));
	terminal_bkcolor(color_from_name("white"));

	Player player = {5, 5, '@'};

	/**
	 * Represent the map or dungeon of application (game).
	 */
	char dungeon[DUNGEON_ROW][DUNGEON_COLUMN];

	CreateDungeon(dungeon);

	terminal_clear();

	DrawTitle();
	//DrawDungeon(dungeon);
	//DrawPlayer(&player);

	terminal_refresh();

	while (true)
	{
		// Read the events of terminal
		int key = terminal_read();

		HandleEvent(key);
		HandleEventPlayer(key, &player);

		//terminal_clear();

		//DrawDungeon(dungeon);
		//DrawPlayer(&player);

		//terminal_refresh();

	}

	terminal_close();

	return 0;
}
