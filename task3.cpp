#include<iostream>
#include<string>
#include<Windows.h>
#include "Figure.h"
#include "Triangle.h"
#include "Triangle90.h"
#include "IsoscelesTriangle.h"
#include "Triangle60.h"
#include "Quadrangle.h"
#include "Parallelogram.h"
#include "Recangle.h"
#include "Rhomb.h"
#include "Square.h"
void print(Figure* figure)
{
	figure->print();
}

int main(int argc, char** argv)
{
    system("chcp 1251");
    Triangle triangle(10, 20, 30, 50, 60, 70);
    print(&triangle);
    std::cout << std::endl;
    Triangle90 triangle90(10, 20, 30, 50, 60);
    print(&triangle90);
    std::cout << std::endl;
    IsoscelesTriangle isoscelestriangle(10, 20, 50, 60);
    print(&isoscelestriangle);
    std::cout << std::endl;
   Triangle60 triangle60(30);
    print(&triangle60);
    std::cout << std::endl;
    Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
    print(&quadrangle);
    std::cout << std::endl;
    Recangle rectangle(10, 20);
    print(&rectangle);
    std::cout << std::endl;
    Square square(20);
    print(&square);
    std::cout << std::endl;
    Parallelogram parallelogram(20, 30, 30, 40);
    print(&parallelogram);
    std::cout << std::endl;
    Rhomb rhomb(30, 30, 40);
    print(&rhomb);
    return 0;
	 
	return 0;
}