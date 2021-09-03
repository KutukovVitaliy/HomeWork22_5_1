//
// Created by kvitadmin on 27.08.2021.
//

#include "functions.h"

int ChekInput(std::string& input, std::string& number, std::string& name ){
    std::size_t pos;
    pos = input.find(' ');
    if(pos == std::string::npos){
        pos = input.find('-');
        if(pos == std::string::npos){
            if(!input.empty()){
                if(input=="exit")
                    return EXIT;
                name = input;
                return NAME;
            }
            else return ERROR;
        }
        else{
            std::string tmpStr = input.substr(0,2) + input.substr(3,2) + input.substr(6,2);
            int num = std::stoi(tmpStr);
            if(input[2] == '-' && input[5] == '-'){
                if(num > 0 && num <= 999999){
                    number = input.substr(0, 8);
                    return NUMBER;
                }
            }
            else return ERROR;
        }
    }
    else{

        if(input[2] == '-' && input[5] == '-'){
            std::string tmpStr = input.substr(0,2) + input.substr(3,2) + input.substr(6,2);
            int num = std::stoi(tmpStr);
            if(num > 0 && num <= 999999){
                number = input.substr(0, 8);
                name = input.substr(pos+1);
                if(name.empty()) return ERROR;
                return ADD;
            }
        }
        else return ERROR;


    }
}

bool AddRecord(std::string& number, std::string& name, std::map<std::string, std::string>& phones){
    std::pair<std::map<std::string,std::string>::iterator,bool> ret;
    ret = phones.insert(std::pair<std::string ,std::string>(number, name));
    return ret.second;
}

std::string FindByNumber(std::string& number, std::map<std::string,std::string>& phones){
    return phones.find(number)->second;
}

std::vector<std::string> FindByName(std::string& name, std::map<std::string, std::string>& phones){

    std::vector<std::string> numbers;
    std::map<std::string , std::string>::iterator it;
    for(it=phones.begin(); it != phones.end(); ++it){
        if(it->second == name){
            numbers.push_back(it->first);
        }
    }
    return numbers;
}

