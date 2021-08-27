#include "functions.h"

int main() {
    std::string inputStr, secondName;
    int phoneNumber, operation;
    do{
        std::cout << "Please input:" ;
        std::getline(std::cin,inputStr);
        operation = ChekInput(inputStr, phoneNumber, secondName );
        if(operation == ERROR) std::cout << "Bad input! Try again!" << std::endl;
    } while (operation == ERROR);

    return 0;
}
