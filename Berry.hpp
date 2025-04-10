#pragma once
#include"Brood.hpp"

class Berry : public Brood
{
public:
	Berry(std::string_view name, double weight) : Brood(name, weight) {}
private:

};