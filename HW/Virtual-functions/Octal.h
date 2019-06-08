//
// Created by Mairenn on 2019-06-03.
//

#ifndef OOP_HW_2_OCTAL_H
#define OOP_HW_2_OCTAL_H

#include "Array.h"
#include "Exception.h"

class Octal : public Array
{
public:
    Octal() : Array() {}
    Octal(std::string str) : Array(str) {}
    Octal(const Octal &p_oct) : Array(p_oct) {}
    ~Octal() = default;

    bool Addition(const Array* p_arr, Array* p_result) override;
};


#endif //OOP_HW_2_OCTAL_H
