#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	std::string str[argc];

	if (argc == 1)
		std :: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std :: endl;
	else {
		for (int i = 0; i < argc - 1; i++)
			str[i] = argv[i + 1];
		for (int i = 1; i < argc; i++) {
			for (int j = 0; j < (int)str[i].length(); j++)
				str[i][j] = toupper(str[i][j]);
			std :: cout << str[i] << " ";
		}
		std :: cout << std :: endl;
	}
}
