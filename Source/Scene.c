#include "Include/Scene.h"

const short BUFFER_SIZE = 30;

void DrawTitle()
{
	FILE *fileCVS;

	// Exit program if file cannot be opened.
	if((fileCVS = fopen("../Data/Scenes/TitleScene.csv", "r")) == NULL)
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

		while(fgets(buffer, BUFFER_SIZE, fileCVS) != NULL)
		{
			// Get coordinate X.
			parser = strtok(buffer, ",");
			x = (short) atoi(parser);

			// Get coordinate Y.
			parser = strtok(NULL, ",");
			y = (short) atoi(parser);

			// Get glyph.
			parser = strtok(NULL, ",");
			glyph = (short) atoi(parser);

			//NOTE: Clear code.
			// Get color foreground in string with format hexadecimal.
			parser = strtok(NULL, ",");
			memcpy(colorForeground, parser, sizeof(parser));
			colorForeground[sizeof(parser)] = '\0';

			//NOTE: Clear code.
			// Get color background in string with format hexadecimal.
			parser = strtok(NULL, ",");
			memcpy(colorBackground, parser, sizeof(parser));
			colorBackground[sizeof(parser)] = '\0';

			// Draw the title
			terminal_color(color_from_name(colorForeground));
			terminal_bkcolor(color_from_name(colorBackground));
			terminal_put(x, y, glyph);
		}

		fclose(fileCVS);
	}
}
