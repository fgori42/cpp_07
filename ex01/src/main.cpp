#include "iter.hpp"



int main()
{
	std::string	arr[] = {"A","B","C","D"};
	int			x[4];

	x[0] = 0;
	x[1] = 1;
	x[2] = 2;
	x[3] = 3;

	::iter(arr, 4, print);
	std::cout << std::endl;
	::iter(x, 4, print);
		std::cout << std::endl;
	::iter(x, 4, up);
	::iter(x, 4, print);
}