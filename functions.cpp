//
// Created by kvitadmin on 27.08.2021.
//

#include "functions.h"

int ChekInput(std::string& input, int& number, std::string& name ){
    std::size_t pos = input.find(" ");
    if(pos == std::string::npos){
        pos = input.find("-");
        if(pos == std::string::npos){
            if(input.size() > 0 ){
                name = input;
                return NAME;
            }
            else return ERROR;
        }
        else{
            std::string tmpStr = input.substr(0,2) + input.substr(3,2) + input.substr(6,2);
            number = std::stoi(tmpStr);
            if(number > 0 && number <= 999999)
            return NUMBER;
            else return ERROR;
        }
    }
    else{
        std::string tmpStr = input.substr(0,2) + input.substr(3,2) + input.substr(6,2);
        number = std::stoi(tmpStr);
        if(number < 0 || number > 999999) return ERROR;
        name = input.substr(pos+1);
        if(name.size() == 0) return ERROR;
        return ADD;
    }
}