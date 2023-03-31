#pragma once
#include<string>
class Figure
{
protected:
	std::string name;
public:
	Figure() {};
	virtual void Sides();
	virtual void Angles();
	virtual void print();
};