#include "Ingsoc/Scene.h"

const short BUFFER_SIZE = 30;

void DrawTitle()
{
	FILE *fileCVS;

	// Exit program if file cannot be opened.
	if((fileCVS = fopen("../Data/Scenes/TitleScene.csv", "r")) == nullptr)
	{
		puts("File could not be opened");
	}
	else
	{
		/**
		 * Read only line for line.
		 */
		char buffer[BUFFER_SIZE];
		char *parser;

		short x;
		short y;
		short glyph;
		char colorForeground[8]; // Format is #AABBCC
		char colorBackground[8]; // Format is #AABBCC

		while(fgets(buffer, BUFFER_SIZE, fileCVS) != nullptr)
		{
			// Get coordinate X.
			parser = strtok(buffer, ",");
			x = (short) atoi(parser);

			// Get coordinate Y.
			parser = strtok(nullptr, ",");
			y = (short) atoi(parser);

			// Get glyph.
			parser = strtok(nullptr, ",");
			glyph = (short) atoi(parser);

			//NOTE: Clear code.
			// Get color foreground in string with format hexadecimal.
			parser = strtok(nullptr, ",");
			memcpy(colorForeground, parser, sizeof(parser));
			colorForeground[sizeof(parser)] = '\0';

			//NOTE: Clear code.
			// Get color background in string with format hexadecimal.
			parser = strtok(nullptr, ",");
			memcpy(colorBackground, parser, sizeof(parser));
			colorBackground[sizeof(parser)] = '\0';

			// Draw the title
			TerminalColor(ColorFromName(colorForeground));
			TerminalBackColor(ColorFromName(colorBackground));
			TerminalPut(x, y, glyph);
		}

		fclose(fileCVS);
	}
}
