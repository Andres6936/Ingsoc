#include "Ingsoc/Dungeon.h"

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
