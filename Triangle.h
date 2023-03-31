#pragma once
#include "Figure.h"
class Triangle :public Figure
{
protected:
	int a, b, c, A, B, C;
	std::string name = "Треугольник";
public:
	Triangle(int a, int b, int c, int A, int B, int C):Figure()
	{

	}
	virtual std::string GetName()
	{

	}
	void Sides() override
	{

	}
	void Angles() override
	{

	}
	void print() override
	{

	}
};