#include <iostream>
#include <string>
#include <iomanip>
void to_char(char *&str)
{
	try
	{
		int n = std::stoi(str);

		if (isprint(n))
			std::cout << "char: '" << (char)n << "'" << std::endl;
		else
			std::cout << "char: " << "Non displayable" << std::endl;
	} catch (const std::exception& expn)
	{
		std::cout << "char: impossible" << std::endl;
	}
}
void to_int(char *&str)
{
	try
	{
		int n = std::stoi(str);

		std::cout << "int: " << n << std::endl;
	} catch (const std::exception& expn)
	{
		std::cout << "int: impossible" << std::endl;
	}
}

void to_float(char *&str)
{
	try
	{
		float n = std::stof(str);
		std::cout << std::fixed;
		std::cout.precision(1);
		std::cout << "float: "  << n << "f" << std::endl;
	} catch (const std::exception& expn)
	{
		std::cout << expn.what() << std::endl;
	}
}

void to_double(char *&str)
{
	try
	{
		double n = std::stod(str);
		std::cout << std::fixed;
		std::cout.precision(1);
		std::cout << "double: "  << n << std::endl;
	} catch (const std::exception& expn)
	{
		std::cout << expn.what() << std::endl;
	}
}
int main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	
	to_char(argv[1]);
	to_int(argv[1]);
	to_float(argv[1]);
	to_double(argv[1]);
	
	
	
}