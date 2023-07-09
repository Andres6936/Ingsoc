CMAKE_MINIMUM_REQUIRED(VERSION 3.15 FATAL_ERROR)
PROJECT(Ingsoc VERSION 0.1 LANGUAGES CXX)

# Set the root directory where can be found the directory Include/
# needed for set inclusion guards and more
SET(INGSOC_ROOT_DIR ${CMAKE_CURRENT_SOURCE_DIR})

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
TARGET_INCLUDE_DIRECTORIES(Ingsoc PUBLIC $<BUILD_INTERFACE:${INGSOC_ROOT_DIR}/Include>)

# Load and link the library BearLibTerminal
TARGET_LINK_LIBRARIES(Ingsoc PRIVATE BearLibTerminal)
