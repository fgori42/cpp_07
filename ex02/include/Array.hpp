#ifndef ARRAY_HPP
# define ARRAY_HPP

template<typename T>
class Array
{
private:
	T	*_arr;
public:
	Array();
	Array(unsigned int n);
	Array(const Array &org);
	~Array();

	Array &operator=(const Array &org);
	int size();
	
};

Array::Array(/* args */)
{
}

Array::~Array()
{
}



#endif