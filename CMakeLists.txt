CMAKE_MINIMUM_REQUIRED(VERSION 3.15 FATAL_ERROR)
PROJECT(Ingsoc VERSION 0.1 LANGUAGES CXX)


INCLUDE(CMakeModules/CPM.cmake)

### Add dependencies via CPM
# Add BearLibTerminal like dependency
CPMADDPACKAGE(gh:Andres6936/BearLibTerminal@2020.12)

ADD_EXECUTABLE(Ingsoc
		Source/Main.cpp
		Source/Player.cpp
		Source/Dungeon.cpp
		Source/Event.cpp
		Source/Scene.cpp)

SET_TARGET_PROPERTIES(Ingsoc PROPERTIES CXX_STANDARD 17)

# Load and link the library BearLibTerminal
TARGET_LINK_LIBRARIES(Ingsoc PRIVATE BearLibTerminal)
