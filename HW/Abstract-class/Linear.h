//
// Created by Mairenn on 2019-06-02.
//

#ifndef OOP_HW_3_LINEAR_H
#define OOP_HW_3_LINEAR_H

#include "Root.h"
#include "MathException.h"

// m_b * x + m_c = 0
class Linear : public Root
{
private:
    double m_b, m_c;
public:
    Linear(double p_b = 0, double p_c = 0) : m_b(p_b), m_c(p_c) {}
    void Count() override;
    void Print() override;
    void Input() override;
    ~Linear() override = default;

    friend std::ostream& operator<<(std::ostream &p_out, const Linear &p_eq);
    friend std::istream& operator>>(std::istream &p_in, Linear &p_eq);
};


#endif //OOP_HW_3_LINEAR_H
