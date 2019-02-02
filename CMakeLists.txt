CMAKE_MINIMUM_REQUIRED(VERSION 2.6)
PROJECT(Bear)
LINK_DIRECTORIES(${CMAKE_SOURCE_DIR}/Lib)
ADD_EXECUTABLE( Bear
	Source/Main.c
	Source/Player.c
	Source/Dungeon.c
	Source/Event.c
	Source/Scene.c)

# Load and link the library BearLibTerminal
TARGET_LINK_LIBRARIES(Bear BearLibTerminal)