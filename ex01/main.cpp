#include "RPN.hpp"

int main(int ac, char **av)
{
    try
    {
        if(ac != 2)
            throw "the number of arguments must be two";
        RPN n;
        n.processInput(av[1]);
    }
    catch(...)
    {
        std::cerr << "Error" << std::endl;
    }
    return 0;
}