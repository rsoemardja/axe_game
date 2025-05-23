#include "raylib.h"

int main()
{
	int width;
	width = 350;
	InitWindow(350, 200, "Rama's Window!");

	int circle_x{ 175 };
	int circle_y{ 100 };

	int axe_x{ 400 };
	int axe_y{ 0 };

	while (WindowShouldClose() != true)
	{
		
		BeginDrawing();
		ClearBackground(WHITE);

		DrawCircle(circle_x,circle_y, 50, GREEN);
		DrawRectangle(axe_x, axe_y, 50, 50, BLUE);

		if  (IsKeyDown(KEY_D) && circle_x < 350)
		{
			circle_x += 10;
		}
		if  (IsKeyDown(KEY_A) && circle_x < 0)
		{
			circle_x -= 10;
		}
		EndDrawing();
	}
}