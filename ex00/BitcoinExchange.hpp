#pragma once

#include <iostream>
#include <vector>

typedef std::vector<std::pair <std::string, double> > myMultimap;
typedef std::vector<std::pair <std::string, double> >::iterator myMultimapIt;

class BitcoinExchange
{
private:
    myMultimap data;
    myMultimap input;
public:
    BitcoinExchange();
    BitcoinExchange(const BitcoinExchange& other);
    BitcoinExchange& operator=(const BitcoinExchange& other);
    ~BitcoinExchange();

    void print(myMultimap &map);
    void readData();
    void readInput(const char* inputFile);
    int checkData(std::string date);
    double exchangeBtc(std::string key, double amount);
    void processInput();
};

