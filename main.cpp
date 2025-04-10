#include"Plants.hpp"
#include"Player.hpp"
#include"Brood.hpp"
#include"Bump.hpp"
#include"Berry.hpp"
#include"Fruit.hpp"
#include<Windows.h>


Fruit apple("apple", 0.4);
Berry cherry("cherry", 0.1);
Bump shishka("shishka", 0.3);

void Start();

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Start();


	return 0;
}

void Start()
{
	system("cls");
	std::cout << "\n\t\tКакого игрока выберем?\n1 - Бобер\n2 - Егор\n3 - Пашок\n4 - Владооофалееес\n5 - Кулебяка с мясом \n";
	std::string number;
	std::cin >> number;

	if (number == "1")
	{
		system("cls");
		Player Bober;
		Bober.CatchFruit(apple);
		Bober.CatchFruit(cherry);
		std::cout << "\t\tРюкзачек игрока Бобер!!!!!!\n";
		Bober.GetBackpackContent();
		system("pause");
		Start();
	}
	else if (number == "2")
	{
		system("cls");
		Player Egor;
		Egor.CatchFruit(apple);
		Egor.CatchFruit(apple);
		Egor.CatchFruit(apple);
		std::cout << "\t\tРюкзачек игрока Егор!!!!!!\n";
		Egor.GetBackpackContent();
		system("pause");
		Start();
	}
	else if (number == "3")
	{
		system("cls");
		Player TIyTIa;
		std::cout << "\t\tРюкзачек игрока Пашок!!!!!!\n";
		TIyTIa.GetBackpackContent();
		system("pause");
		Start();
	}
	else if (number == "4")
	{
		system("cls");
		Player vladooofaleees;
		vladooofaleees.CatchFruit(shishka);
		std::cout << "\t\tРюкзачек игрока Владооофалееес!!!!!!\n";
		vladooofaleees.GetBackpackContent();
		system("pause");
		Start();
	}
	else if (number == "5")
	{
		system("cls");
		Player kulebiaka;
		kulebiaka.CatchFruit(shishka);
		kulebiaka.CatchFruit(cherry);
		std::cout << "\t\tРюкзачек игрока кулебяка с мясом!!!!!!\n";
		kulebiaka.GetBackpackContent();
		system("pause");
		Start();
	}
	else
	{
		std::cout << "Такого нету.";
		system("pause");
		Start();
	}
}