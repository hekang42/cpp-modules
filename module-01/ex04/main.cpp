#include <iostream>
#include <fstream>

std::string ft_replace(std::string str, std::string s1, std::string s2)
{
	int index;

	while (str.find(s1) != std::string::npos)
	{
		index = str.find(s1);
		str.erase(index, s1.length());
		str.insert(index, s2);
	}
	return str;
}

int main(int argc, char **argv)
{
	std::string filename;
	std::string s1;
	std::string s2;
	std::string buf;

	if (argc != 4)
		return (0);
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];

	std::ifstream fin(filename);
	if (fin.fail())
	{
		std::cerr << "Cann't find file" << std::endl;
		exit(100);
	}
	std::ofstream fout(filename + ".replace");
	while (!fin.eof())
	{
		std::string temp;
		fin >> temp;
		if (!fin.eof())
			temp += "\n";
		buf += temp;
	}
	buf = ft_replace(buf, s1, s2);
	fout << buf;
}