//
// Created by kvitadmin on 27.08.2021.
//

#ifndef HOMEWORK22_5_1_FUNCTIONS_H
#define HOMEWORK22_5_1_FUNCTIONS_H
#include <iostream>
#include <map>
#include <string>

enum {ADD, NUMBER, NAME, ERROR, EXIT};

int ChekInput(std::string& input, int& number, std::string& name );
bool AddRecord(int& number, std::string& name, std::map<int, std::string>& phones);
bool FindByName(std::string& name, std::map<int, std::string>& phones);
bool FindByNumber(int& number, std::map<int, std::string>& phones);
#endif //HOMEWORK22_5_1_FUNCTIONS_H
