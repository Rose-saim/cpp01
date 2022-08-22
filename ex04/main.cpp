# include <iostream>
# include <string>
# include <fstream>

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
	std::string		file_name(argv[1]);
	std::string		s1(argv[2]);
	if (file_name == "" || s1 == "")
	{
		std::cout << "Your arguments are empty !" << std::endl;
		return 1;
	}
	std::ifstream	read_file(file_name.c_str());
	if (!read_file || !read_file.is_open())
	{
		std::cout << "File doesn't exist" << std::endl;
		read_file.close();
		return 1;
	}
	std::string		replace = file_name + ".replace";
	std::ofstream	write_file(replace.c_str());
	if (!write_file.is_open())
	{
		std::cout << "Permission denied." << std::endl;
		write_file.close();
		return 1;
	}

	write_replace_file(read_file, write_file, argv);

	write_file.close();
	read_file.close();
	return 0;
}