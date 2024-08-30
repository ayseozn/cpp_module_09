#include "RPN.hpp"
#include <sstream>

RPN::RPN()
{}

RPN::RPN(const RPN& other)
{*this = other;}

RPN RPN::operator=(const RPN& other)
{
    sstack = other.sstack;
    return *this;
}

RPN::~RPN()
{}

int RPN::checkToken(std::string &token)
{
    if (token.size() == 1)
    {
        if (token[0] == '+'|| token[0] == '-' || token[0] == '*' || token[0] == '/' || (token[0] >= '0' && token[0] <= '9'))
            return 0;
    }
    return 1;
}

void RPN::processInput(std::string input)
{
    std::istringstream s(input);
    std::string token;

    while (s >> token)
    {
        if (checkToken(token))
            throw "";
        if (token[0] >= '0' && token[0] <= '9')
            sstack.push(atoi(token.c_str()));
        else
        {
            if (sstack.size() < 2)
                throw "";
            int a = sstack.top();
            sstack.pop();
            int b = sstack.top();
            sstack.pop();

            if (token[0] == '+')
                sstack.push(a + b);
            else if (token[0] == '-')
                sstack.push(b - a);
            else if (token[0] == '*')
                sstack.push(b * a);
            else if(token[0] == '/')
            {
                if(a == 0)
                    throw "";
                sstack.push(b / a);
            }
        }
    }
    if (sstack.size() != 1)
        throw "";
    std::cout << sstack.top() << std::endl;
}
