#include "raylib.h"

int main()
{
	// initialize window
	// false
	bool equal{ 4 == 9 };
	// true
	bool notEqual{ 4 != 9 };
	// true
	bool less{ 4 < 9 };
	// false
	bool greater{ 4 > 9 };
	// true
	bool lessEqual{ 4 <= 9 };
	// false
	bool greaterEqual{ 4 >= 9 };

	int width;
	width = 350;
	InitWindow(350, 200, "Rama's Window!");
}