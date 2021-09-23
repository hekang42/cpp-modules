#include <iostream>
#include "iter.hpp"

void print_string(std::string &str)
{
	std::cout << str << std::endl;
}

int main(void)
{
	std::string strs[] = {"Hello", "World", "hekang", "42Seoul!"};

	iter(strs, sizeof(strs) / sizeof(std::string), print_string);
}