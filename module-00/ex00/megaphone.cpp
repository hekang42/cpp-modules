#include <iostream>

char	make_upper(char c)
{
	if ('a' <= c && c <= 'z')
		return (c - ('a' - 'A'));
	return (c);
}

int main(int argc, char **argv)
{
	(void) argc;
	if (!argv[1])
		std::cout<< "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1;argv[i];i++)
		for (int j = 0; argv[i][j];j++)
			std::cout<< make_upper(argv[i][j]);
	std::cout<< std::endl;
	return 0;
}