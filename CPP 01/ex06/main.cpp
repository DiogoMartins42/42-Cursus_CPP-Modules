#include "Harl.hpp"

void    switchFunc(Harl harl, int number)
{
    switch(number)
    {
        case 0:
            harl.complain("DEBUG");
        case 1:
            harl.complain("INFO");
        case 2:
            harl.complain("WARNING");
        case 3:
            harl.complain("ERROR");
            break ;
        default:
            std::cout << "Probably complaining about insignificant problems\n";
            break ;

            
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        Harl harl;
        std::string option[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++)
    {
        if (argv[1] == option[i])
            return (switchFunc(harl,i),0);
    }
    switchFunc(harl, 4);
    }
    else
        std::cout << "Use: DEBUG, INFO, WARNING, ERROR";
}