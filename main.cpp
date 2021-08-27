#include "functions.h"

int main() {
    std::string inputStr, secondName;
    std::map<int, std::string> phonesMap;
    int phoneNumber, operation;
    bool exit;
    do{
        do{
            exit = false;
            std::cout << "Please input:" ;
            std::getline(std::cin,inputStr);
            operation = ChekInput(inputStr, phoneNumber, secondName );
            if(operation == ERROR) std::cout << "Bad input! Try again!" << std::endl;
        } while (operation == ERROR);
        switch (operation) {
            case EXIT:
                exit = true;
                break;
            case ADD:
                if(AddRecord(phoneNumber, secondName, phonesMap)) std::cout << "Success!" << std::endl;
                else std::cout << "Can't add record!" << std::endl;
                break;
            case NAME:
                if(!FindName()) std::cout << "Can't find numbers!" << std::endl;
                break;
            case NUMBER:
                if(!FindNumber()) std::cout << "Can't find name!" << std::endl;
                break;
            default:
                break;
        }
    }while(!exit);
    std::cout << "Current state of map: " << std::endl;
    std::map<int, std::string>::iterator it;
    for(it=phonesMap.begin();it != phonesMap.end(); ++it){
        std::cout << it->second << " : " << it->first << std::endl;
    }
    return 0;
}
