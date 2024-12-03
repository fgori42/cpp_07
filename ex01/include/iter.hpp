#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

template<typename T>
void iter(T* arr, size_t len, void (*f)(T &))
{
	for (size_t i = 0; i < len; i++)
		f(arr[i]);
}

template<typename T>
void print(T &t)
{
	std::cout << t << std::endl;
}

template<typename T>
void up(T &t)
{
	t += 1;
}

#endif