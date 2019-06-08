//
// Created by Mairenn on 2019-06-02.
//

#include "Linear.h"

void Linear::Count()
{
    if (m_b == 0.0)
        throw MathException("Division by 0 is attempted");
    double x =  (-1) * m_c / m_b;
    std::cout << "x = " << x << std::endl;

}

void Linear::Print()
{
    std::cout << (*this);
}

void Linear::Input()
{
    std::cin >> (*this);
}

std::ostream& operator<<(std::ostream &p_out, const Linear &p_eq)
{
    p_out << p_eq.m_b << "x + " << p_eq.m_c << " = 0" << std::endl;
    return p_out;
}

std::istream& operator>>(std::istream &p_in, Linear &p_eq)
{
    std::cout << "bx + c = 0" << std::endl;
    std::cout << "Enter the b" << std::endl;
    p_in >> p_eq.m_b;
    std::cout << "Enter the c" << std::endl;
    p_in >> p_eq.m_c;

    return p_in;
}