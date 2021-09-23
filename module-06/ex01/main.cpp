#include "Data.hpp"
#include <iostream>

int main(void)
{
	uintptr_t uintptr;
	Data data;
	data.c = 'a';
	data.n = 1;
	data.str = "hekang";

	std::cout << data.c << std::endl;
	std::cout << data.n << std::endl;
	std::cout << data.str << std::endl;

	uintptr = serialize(&data);
	std::cout << uintptr << std::endl;

	Data *data_ds;
	data_ds = deserialize(uintptr);

	std::cout << data_ds->c << std::endl;
	std::cout << data_ds->n << std::endl;
	std::cout << data_ds->str << std::endl;
	
	return 0;
}