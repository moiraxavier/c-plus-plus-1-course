//
// Created by Mairenn on 2019-06-03.
//

#ifndef OOP_HW_1_CALCULATOR_H
#define OOP_HW_1_CALCULATOR_H

#include "Fraction.h"

class Calculator
{
private:
    Fraction m_num1;
    Fraction m_num2;
public:
    Calculator(const Fraction &p_num1 = Fraction(0, 0), const Fraction &p_num2 = Fraction(0, 0)) : m_num1(p_num1),
                                                                                                    m_num2(p_num2) {}
    Fraction Addition() { return m_num1 + m_num2; }
    Fraction Substruction() { return m_num1 - m_num2; }
    Fraction Multiplication() { return m_num1 * m_num2; }
    ~Calculator() = default;
    Fraction first() {return m_num1; }
    Fraction second() {return m_num2; }
    size_t amount() { return m_num1.amount(); }

    friend std::istream& operator>> (std::istream &p_in, Calculator &p_calc);
};

#endif //OOP_HW_1_CALCULATOR_H
