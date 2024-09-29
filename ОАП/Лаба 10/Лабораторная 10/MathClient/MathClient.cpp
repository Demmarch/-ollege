#include <iostream>
#include "../Лабораторная 10/MathLibrary.h"

using namespace MathLibrary;


int main()
{
	std::cout << Arithmetic::Add(1, 2) << std::endl;
	std::cout << Arithmetic::Subtract(1, 2) << std::endl;
	std::cout << Arithmetic::Multiply(1, 2) << std::endl;
	std::cout << Arithmetic::Divide(1, 2) << std::endl;
	return 1;
}