#ifndef DATA_H
#define DATA_H

#include <iostream>

typedef struct 
{
	int		n;
	char	c;
	std::string	str;
}Data;

uintptr_t serialize(Data *ptr);
Data *deserialize(uintptr_t raw);
#endif