#pragma once
#include <ctime>
#include <vector>

class Player
{

public:

	static Player player;
	enum Move { STOP = 0, LEFT, RIGHT };
	Move  movement = STOP;
	int x;
	int y;

	static void DrawPlayer(const std::vector<Fire>::iterator first, const std::vector<Fire>::iterator last);

	static void DrawShip1();

private:
	Player()
	{
	}

};