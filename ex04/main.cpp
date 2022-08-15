#include <iostream>
#include <cstring>
#include <fstream>	// ifstream & outstream 사용

void	write_line(bool &first, std::ofstream &write_file, std::string line, std::string replace)
{
	if (first)
	{
		write_file << line << replace;
		first = false;
	}
	else
	{
		write_file << std::endl << line << replace;
	}
}

void	write_replace_file(std::ifstream &read_file, std::ofstream &write_file, char **argv)
{
	std::string	to_find(argv[2]);
	std::string	replace(argv[3]);
	std::string	line;
	bool		first = true;
	
	while (std::getline(read_file, line))
	{
		size_t	nPos = line.find(to_find);

		if (nPos == std::string::npos)
		{
			write_line(first, write_file, line, "");
		}
		else
		{
			write_line(first, write_file, line.substr(0, nPos), replace);
            
			std::string	new_line = line.substr(nPos + to_find.length());
			nPos = new_line.find(to_find);
			while (nPos != std::string::npos)
			{
				write_file << new_line.substr(0, nPos) << replace;
				new_line = new_line.substr(nPos + to_find.length());
				nPos = new_line.find(to_find);
			}
			write_file << new_line;
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		return 1;
	std::string	file_name(argv[1]);
	std::ifstream	read_file(file_name);
	std::ofstream	write_file(file_name + ".replace");

	if (!read_file || !read_file.is_open() || !write_file.is_open())
	{
		write_file.close();
		read_file.close();
		return 1;
	}

	write_replace_file(read_file, write_file, argv);

	write_file.close();
	read_file.close();
	return 0;
}