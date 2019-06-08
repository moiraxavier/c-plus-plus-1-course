//
// Created by Mairenn on 2019-06-02.
//

#include "Square.h"

void Square::Count()
{
    double D = m_b * m_b - 4 * m_a * m_c;

    if (D < 0)
        throw MathException("Division by 0 is attempted");

    if (m_a == 0.0) {
        Linear eq(m_b, m_c);
        eq.Count();
    }
    else {
        double x1 = (-m_b) / (2 * m_a);
        if (D == 0)
            std::cout << "x1 = x2 = " << x1 << std::endl;
        else {
            x1 = ((-m_b) + sqrt(D)) / (2 * m_a);
            double x2 = ((-m_b) - sqrt(D)) / (2 * m_a);

            std::cout << "x1 = " << x1 << std::endl;
            std::cout << "x2 = " << x2 << std::endl;
        }
    }
}

void Square::Print()
{
    std::cout << (*this);
}

void Square::Input()
{
    std::cin >> (*this);
}

std::ostream& operator<<(std::ostream &p_out, const Square &p_eq)
{
    p_out << p_eq.m_a << "x^2 + " << p_eq.m_b << "x + " << p_eq.m_c << " = 0" << std::endl;
    return p_out;
}

std::istream& operator>>(std::istream &p_in, Square &p_eq)
{
    std::cout << "ax^2 + bx + c = 0" << std::endl;
    std::cout << "Enter the a" << std::endl;
    p_in >> p_eq.m_a;
    std::cout << "Enter the b" << std::endl;
    p_in >> p_eq.m_b;
    std::cout << "Enter the c" << std::endl;
    p_in >> p_eq.m_c;

    return p_in;
}