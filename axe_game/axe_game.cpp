#include "raylib.h"

int main()
{
	int width;
	width = 350;
	InitWindow(350, 200, "Rama's Window!");

	while (true)
	{
		BeginDrawing();
		ClearBackground(RED);
		EndDrawing();
	}
}