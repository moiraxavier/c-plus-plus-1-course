//
// Created by Mairenn on 2019-06-03.
//

#include "Calculator.h"

std::istream& operator>> (std::istream &p_in, Calculator &p_calc)
{
    std::cout << "Input first number" << std::endl;
    std::string str;
    p_in >> str;
    p_calc.m_num1 = Fraction(str);
    std::cout << "Input second number" << std::endl;
    p_in >> str;
    p_calc.m_num2 = Fraction(str);

    return p_in;
}