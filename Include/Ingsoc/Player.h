// Only include file once
#pragma once

#include "BearLibTerminal/BearLibTerminal.hpp"
#include "Direction.h"

/**
 * Represent the player controlled for user.
 */
typedef struct
{
	int x;
	int y;
	char glyph;

} Player;

/**
 * Move to player in direction indicate.
 *
 * @param player: Player to move.
 * @param direction: Direction to move player.
 */
void Walk(Player* player, Direction direction);

/**
 * Handle the events specific to player, for example
 * move and attack.
 *
 * @param key: Key pressed for user.
 * @param player: Player to move.
 */
void HandleEventPlayer(int key, Player* player);

