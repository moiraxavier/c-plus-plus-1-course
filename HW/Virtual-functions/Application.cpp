//
// Created by Mairenn on 2019-06-05.
//

#include "Application.h"

void Application::Run()
{

    std::string key;
    std::string str;

    Array *ptr2, *ptrResult;
    Octal oct1, oct2, octResult;
    BitString bts1, bts2, btsResult;

    do {

        std::cout << std::endl << "----------- MENU -----------" << std::endl;
        std::cout << "Choose Octal / Bitstring " << std::endl;
        std::cout << "0 - Exit" << std::endl;
        std::cout << "1 - Octal string" << std::endl;
        std::cout << "2 - Bit string" << std::endl;
        std::cin >> key;

        switch (key[0]) {
            case '0': {
                std::cout << "EXIT" << std::endl;
                break;
            }
            case '1':{
                std::cout << "OCTAL" << std::endl;
                std::cout << "Input first number" << std::endl;
                std::cin >> str;
                oct1 = Octal(str);
                std::cout << "Input second number" << std::endl;
                std::cin >> str;
                oct2 = Octal(str);
                ptr2 = &oct2;
                ptrResult = &octResult;
                try {
                    oct1.Addition(ptr2, ptrResult);
                    ptr2 = &oct1;
                    std::cout << ptr2 << std::endl;
                    std::cout << "+" << std::endl;
                    ptr2 = &oct2;
                    std::cout << ptr2 << std::endl;
                    std::cout << ptrResult << std::endl;

                    (*ptrResult).clear();
                }
                catch (Exception& e){
                    std::cerr << "Exception occurred (" << e.what() << ")" << std::endl;
                }
                break;
            }
            case '2': {
                std::cout << "BIT STRING" << std::endl;
                std::cout << "Input first number" << std::endl;
                std::cin >> str;
                bts1 = BitString(str);
                std::cout << "Input second number" << std::endl;
                std::cin >> str;
                bts2 = BitString(str);
                ptr2 = &bts2;
                ptrResult = &btsResult;
                try {
                    bts1.Addition(ptr2, ptrResult);
                    ptr2 = &bts1;
                    std::cout << ptr2 << std::endl;
                    std::cout << "+" << std::endl;
                    ptr2 = &bts2;
                    std::cout << ptr2 << std::endl;
                    std::cout << ptrResult << std::endl;
                    (*ptrResult).clear();
                }
                catch (Exception& e){
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