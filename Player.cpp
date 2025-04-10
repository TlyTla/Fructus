#include "Player.hpp"

void Player::CatchFruit(const Brood& brood)
{
	fructus.push_back(brood);
}

void Player::GetBackpackContent()
{

	if (fructus.size() == 0)
	{
		std::cout << "–юкзачек пуст :(\n";
	}
	else
	{
		for (auto& i : fructus)
		{

			i.PrintBrood();
		}
	}
}