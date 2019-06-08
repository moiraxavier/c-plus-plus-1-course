//
// Created by Mairenn on 2019-06-05.
//

#include "Application.h"

void Application::Run()
{

    std::string key;
    std::string str;


    Linear linearEq;
    Square squareEq;

    do {

        std::cout << std::endl << "----------- MENU -----------" << std::endl;
        std::cout << "Linear / Square" << std::endl;
        std::cout << "0 - Exit" << std::endl;
        std::cout << "1 - Linear" << std::endl;
        std::cout << "2 - Square" << std::endl;
        std::cin >> key;

        switch (key[0]) {
            case '0': {
                std::cout << "EXIT" << std::endl;
                break;
            }
            case '1':{
                linearEq.Input();
                linearEq.Print();
                try {
                    linearEq.Count();
                }
                catch (MathException& e){
                    std::cerr << "Exception occurred (" << e.what() << ")" << std::endl;
                }
                break;
            }
            case '2': {
                squareEq.Input();
                squareEq.Print();
                try {
                    squareEq.Count();
                }
                catch (MathException& e){
                    std::cerr << "Exception occurred (" << e.what() << ")" << std::endl;
                }

                break;
            }
            default:
                std::cout << std::endl << "Wrong key" << std::endl;
                break;
        }
    } while (key[0] != '0');
}