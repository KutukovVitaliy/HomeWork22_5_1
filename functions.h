//
// Created by kvitadmin on 27.08.2021.
//

#ifndef HOMEWORK22_5_1_FUNCTIONS_H
#define HOMEWORK22_5_1_FUNCTIONS_H
#include <iostream>
#include <map>
#include <string>
#include <vector>

enum {ADD, NUMBER, NAME, ERROR, EXIT};

int ChekInput(std::string& input, std::string& number, std::string& name );
bool AddRecord(std::string& number, std::string& name, std::map<std::string, std::string>& phones);
std::vector<std::string> FindByName(std::string& name, std::map<std::string, std::string>& phones);
std::string FindByNumber(std::string& number, std::map<std::string, std::string>& phones);
#endif //HOMEWORK22_5_1_FUNCTIONS_H
