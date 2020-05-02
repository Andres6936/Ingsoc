#include "Include/Player.h"


void Walk(Player* player, Direction direction)
{
	if (direction == NORTH)
	{
		player->y--;
	}
	else if (direction == SOUTH)
	{
		player->y++;
	}
	else if (direction == WEST)
	{
		player->x--;
	}
	else if (direction == EAST)
	{
		player->x++;
	}
}

void HandleEventPlayer(int key, Player* player)
{
	if (key == TK_UP)
	{
		Walk(player, NORTH);
	}
	// The user pressed key DOWN
	else if (key == TK_DOWN)
	{
		Walk(player, SOUTH);
	}
	else if (key == TK_LEFT)
	{
		Walk(player, WEST);
	}
	else if (key == TK_RIGHT)
	{
		Walk(player, EAST);
	}
}
