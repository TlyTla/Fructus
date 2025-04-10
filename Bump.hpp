#pragma once
#include"Brood.hpp"

class Bump : public Brood
{
public:
	Bump(std::string_view name, double weight) : Brood(name, weight) {}
private:

};