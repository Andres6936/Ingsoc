#include "Include/Dungeon.h"

const char DUNGEON_ROW = 60;
const char DUNGEON_COLUMN = 40;

void CreateDungeon(char dungeon[][DUNGEON_COLUMN])
{
	for (char x = 0; x <= DUNGEON_ROW; x++)
	{
		for (char y = 0; y <= DUNGEON_COLUMN; y++)
		{
			dungeon[x][y] = '.';
		}
	}
}

void DrawDungeon(char dungeon[][DUNGEON_COLUMN])
{
	for (char x = 0; x <= DUNGEON_ROW; x++)
	{
		for (char y = 0; y <= DUNGEON_COLUMN; y++)
		{
			terminal_put(x, y, dungeon[x][y]);
		}
	}
}
