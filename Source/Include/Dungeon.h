// Only include file once
#pragma once

#include "BearLibTerminal.h"

extern const char DUNGEON_ROW;
extern const char DUNGEON_COLUMN;

/**
 * Initialize all index of dungeon to value predefine.
 */
void CreateDungeon(char dungeon[][DUNGEON_COLUMN]);

/**
 * Draw the dungeon
 */
void DrawDungeon(char dungeon[][DUNGEON_COLUMN]);
