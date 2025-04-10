#pragma once
#include"Plants.hpp"

class Bush : public Plants
{
public:
	Bush(std::string_view name, Size size, double height) : Plants(name, size, height) {}

private:

};