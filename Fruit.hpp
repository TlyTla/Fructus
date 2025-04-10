#pragma once
#include"Brood.hpp"

class Fruit : public Brood
{
public:
	Fruit(std::string_view name, double weight) : Brood(name, weight) {}
private:

};