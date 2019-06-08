//
// Created by Mairenn on 2019-06-03.
//

#include "Application.h"


Application::Application()
{

}

void Application::Run()
{
    std::string key;
    std::string str;
    Calculator calc;
    do {

        std::cout << std::endl << "----------- MENU -----------" << std::endl;
        std::cout << "0 - exit" << std::endl;
        std::cout << "n - new input" << std::endl;
        std::cout << "+ - addition" << std::endl;
        std::cout << "- - division" << std::endl;
        std::cout << "* - multiplication" << std::endl;
        std::cin >> key;

        switch (key[0]) {
            case '0': {
                std::cout << "EXIT" << std::endl;
                break;
            }
            case 'n':{
                std::cin >> calc;
                break;
            }
            case '+': {
                std::cout << calc.first() << " + " << calc.second() << " = " << calc.Addition() << std::endl;
                std::cout << "Amount of 'Fractions' = " << calc.amount() << std::endl;
                break;
            }
            case '-': {
                std::cout << calc.first() << " - " << calc.second() << " = " << calc.Substruction() << std::endl;
                std::cout << "Amount of 'Fractions' = " << calc.amount() << std::endl;
                break;
            }
            case '*': {
                std::cout << calc.first() << " * " << calc.second() << " = " << calc.Multiplication() << std::endl;
                std::cout << "Amount of 'Fractions' = " << calc.amount() << std::endl;
                break;
            }
            default:
                std::cout << std::endl << "Wrong key" << std::endl;
                break;
        }
    } while (key[0] != '0');
}
