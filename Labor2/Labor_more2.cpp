#include <iostream>
int main()
{
	float x;
	float A;
	std::cout << "Enter x:";
	std::cin >> x;
	std::cout << "Enter A:";
	std::cin >> A;
	if (x < 0)
		std::cout << "y=" << x;
	else
		std::cout << "y="<<A;
}