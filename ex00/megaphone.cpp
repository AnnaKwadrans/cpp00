#include <iostream>
#include <cctype>
#include <cstdio>

void    print_arg(char *str)
{
    int     i;
    char    c;

    i = 0;
    while (str[i])
    {
        c = str[i];
        putchar(toupper(c));
        i++;
    }
}

int	main(int argc, char** argv)
{
    int     i;
    
    if (argc > 1)
    {
        i = 1;
        while (i < argc)
        {
            print_arg(argv[i]);
            if (i < (argc - 1))
                std::cout << " ";
            i++;
        }
        std::cout << "\n";
    }
    else
        std::cout << "* LOUD AND UNBEARABLE NOISE *" << std::endl;
    return (0);
}
