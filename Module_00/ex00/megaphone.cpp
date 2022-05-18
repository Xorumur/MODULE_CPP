#include <iostream>

int main(int argc, char **argv)
{
    if (argc == 1)
        std :: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std :: endl;
    else {
        for (int i = 1; i < argc; i++) {
            for (int j = 0; j < argv[i].lenght; j++) {
                argv[i][j] = toupper(argv[i][j]);
            }
            std :: cout << argv[i] << " ";
        }
        std :: cout << std :: endl;
    }
}