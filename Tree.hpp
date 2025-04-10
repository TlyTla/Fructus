#pragma once
#include"Plants.hpp"

class Tree : public Plants
{
public:
	Tree(std::string_view name, Size size, double height) : Plants(name, size, height) {}
private:

};