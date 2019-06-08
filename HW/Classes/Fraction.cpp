//
// Created by Mairenn on 2019-06-03.
//

#include "Fraction.h"

size_t Fraction::m_amount = 0;

Fraction::Fraction(std::string str)
{
    long first = std::stol(str);
    float second = std::stof(str);
    second = second - first;
    m_first = first;
    m_second = second;

    ++m_amount;
}

Fraction Fraction::operator+(const Fraction& p_num) const
{
    Fraction sum;
    sum.m_first = m_first + p_num.m_first;

    float buf_first, buf_second;
    buf_second = m_second + p_num.m_second;
    buf_second = std::modf(buf_second, &buf_first);

    sum.m_first += buf_first;
    sum.m_second = buf_second;

    if (sum.m_first < 0 && sum.m_second > 0){
        sum.m_first -= -1;
        sum.m_second -= 1;
    }

    if (sum.m_first > 0 && sum.m_second < 0){
        sum.m_first += -1;
        sum.m_second += 1;
    }

    return sum;
}

Fraction Fraction::operator-(const Fraction& p_num) const
{
    return *this + p_num * (-1);
}

Fraction Fraction::operator*(const Fraction& p_num) const
{
    Fraction compos;
    compos.m_first = m_first * p_num.m_first;

    float buf_first, buf_second;

    buf_second = std::modf(m_first * p_num.m_second + m_second * p_num.m_first + m_second * p_num.m_second, &buf_first);
    compos.m_first += buf_first;
    compos.m_second += buf_second;

    return compos;
}

Fraction Fraction::operator*(int p_int) const
{
    return Fraction(m_first * (p_int), m_second * (p_int));
}

Fraction& Fraction::operator=(const Fraction& p_num)
{
    if (this == &p_num)
        return *this;

    m_first = p_num.m_first;
    m_second = p_num.m_second;

    return *this;
}

std::ostream& operator<< (std::ostream &p_out, const Fraction &p_num)
{
    std::string second = std::to_string(p_num.m_second);

    second.erase(second.find_last_not_of('0') + 1, std::string::npos); // delete last zeros 0.00300 -> 0.003
    if (second[0] == '-')
        second.erase(second.begin(), second.begin() + 1);
    second.erase(second.begin(), second.begin() + 1); // delete first zero 0.123 -> .123

    // don't print 2., instead: 2
    if (second.length() == 1)
        second.clear();

    std::string first = std::to_string(p_num.m_first);
    if (first[0] == '-')
        first.erase(first.begin(), first.begin() + 1);

    if (p_num.m_first < 0 || p_num.m_second < 0)
        first = "-" + first;

    p_out << first + second;
    return p_out;
}

std::istream& operator>> (std::istream &p_in, Fraction &p_num)
{
    std::string str;
    p_in >> str;
    long first = std::stol(str);
    float second = std::stof(str);
    second = second - first;
    p_num.m_first = first;
    p_num.m_second = second;

    return p_in;
}