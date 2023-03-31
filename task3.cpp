#include<iostream>
#include<string>
#include<Windows.h>
#include "Figure.h"
#include "Triangle.h"



int main(int argc, char** argv)
{
	system("chcp 1251");
	Triangle triangle(10, 20, 30, 50, 60, 70);
	print(&triangle);


	return 0;
}