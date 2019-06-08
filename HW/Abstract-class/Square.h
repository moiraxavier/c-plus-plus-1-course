//
// Created by Mairenn on 2019-06-02.
//

#ifndef OOP_HW_3_SQUARE_H
#define OOP_HW_3_SQUARE_H

#include "Root.h"
#include "MathException.h"
#include "Linear.h"
#include <math.h>

// p_a * x^2 + p_b * x + p_c = 0
class Square : public Root
{
private:
    double m_a, m_b, m_c;
public:
    Square(double p_a = 0, double p_b = 0, double p_c = 0) : m_a(p_a), m_b(p_b), m_c(p_c) {}
    void Count() override;
    void Print() override;
    void Input() override;
    ~Square() override = default;

    friend std::ostream& operator<<(std::ostream &p_out, const Square &p_eq);
    friend std::istream& operator>>(std::istream &p_in, Square &p_eq);
};


#endif //OOP_HW_3_SQUARE_H
