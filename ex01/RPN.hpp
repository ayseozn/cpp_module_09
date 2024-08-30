#pragma once

#include <iostream>
#include <stack>
#include <string>

class RPN
{
private:
    std::stack<int> sstack;
public:
    RPN();
    RPN(const RPN& other);
    RPN operator=(const RPN& other);
    ~RPN();

    int checkToken(std::string &token);
    void processInput(std::string input);
};


