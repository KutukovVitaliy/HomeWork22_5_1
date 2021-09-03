#include "functions.h"

int main() {
    std::string phoneNumber, inputStr, secondName;
    std::map<std::string, std::string> phonesMap;
    int  operation;
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
                if(AddRecord(phoneNumber, secondName, phonesMap)) std::cout << "Added success!" << std::endl;
                else std::cout << "Can't add record!" << std::endl;
                break;
            case NAME:
                if(FindByName(secondName, phonesMap).empty()) std::cout << "Can't find numbers!" << std::endl;
                else{
                    std::cout << "Found numbers: ";
                    for(auto el : FindByName(secondName, phonesMap)) std::cout << el << " ";
                    std::cout << std::endl;
                }
                break;
            case NUMBER:
                if(FindByNumber(phoneNumber, phonesMap).empty()) std::cout << "Can't find name!" << std::endl;
                else std::cout << "Subscriber last name: " << FindByNumber(phoneNumber, phonesMap) << std::endl;
                break;
            default:
                break;
        }
    }while(!exit);

    return 0;
}
