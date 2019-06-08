//
// Created by Mairenn on 2019-06-03.
//

#ifndef OOP_HW_1_FRACTION_H
#define OOP_HW_1_FRACTION_H

#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

class Fraction
{
private:
    static size_t m_amount;
    long m_first;
    float m_second;
public:
    explicit Fraction(std::string str);
    Fraction(long p_first = 0, float p_second = 0) : m_first(p_first),
                                                    m_second(p_second) { ++m_amount; }
    Fraction(const Fraction &num) : m_first(num.m_first),
                                    m_second(num.m_second) { ++m_amount; }
    size_t amount() { return m_amount; }

    Fraction operator+(const Fraction& p_num) const;
    Fraction operator-(const Fraction& p_num) const;
    Fraction operator*(const Fraction& p_num) const;
    Fraction operator*(int p_int) const;

    Fraction& operator=(const Fraction& p_num);
    friend std::ostream& operator<< (std::ostream &p_out, const Fraction &p_num);
    friend std::istream& operator>> (std::istream &p_in, Fraction &p_num);
};



#endif //OOP_HW_1_FRACTION_H
