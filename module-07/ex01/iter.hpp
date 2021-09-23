#ifndef ITER_HPP
#define ITER_HPP

template <typename T>
void iter(T* lst, unsigned int length, void(*f)(T &))
{
	for (int i=0; i < (int)length; i++)
		f(lst[i]);
};
#endif