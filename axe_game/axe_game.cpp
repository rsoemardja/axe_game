#include "raylib.h"

int main()
{
	int width;
	width = 350;
	int height;
	height = 200;
	InitWindow(350, 200, "Rama's Window!");

	// circle coordinates
	int circle_x{ 175 };
	int circle_y{ 100 };
	int circle_radius{ 50 };
	// circle edge coordinates
	int l_circle_x{ circle_x - circle_radius };
	int r_circle_x{ circle_x + circle_radius };
	int u_circle_y{ circle_y - circle_radius };
	int b_circle_y{ circle_y + circle_radius };

	// axe coordinates
	int axe_x{ 400 };
	int axe_y{ 0 };
	int axe_length{ 50 };
	// axe edge coordinates
	int l_axe_x{ axe_x };
	int r_axe_x{ axe_x + axe_length };
	int u_axe_y{ axe_y };
	int b_axe_y{ axe_y + axe_length };


	int direction{ 10 };

	while (WindowShouldClose() != true)
	{
		
		BeginDrawing();
		ClearBackground(WHITE);
		 // Game logic

		DrawCircle(circle_x,circle_y, 50, GREEN);
		DrawRectangle(axe_x, axe_y, axe_length, 50, BLUE);

		// Move the axe
		axe_y += direction;
		if (axe_y > height || axe_y < 0)
		{
			direction = -direction;
		}
		
		// direct the axe and collision detection
		if  (IsKeyDown(KEY_D) && circle_x < width)
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