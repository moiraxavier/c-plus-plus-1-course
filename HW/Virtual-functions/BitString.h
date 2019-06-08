//
// Created by Mairenn on 2019-06-03.
//

#ifndef OOP_HW_2_BITSTRING_H
#define OOP_HW_2_BITSTRING_H

#include "Array.h"
#include "Exception.h"

class BitString : public Array
{
public:
    BitString() : Array() {}
    BitString(std::string p_str) : Array(p_str) {}
    BitString(const BitString &p_bstr) : Array(p_bstr) {}

    bool Addition(const Array *p_arr, Array *p_result) override;

    ~BitString() = default;
};


#endif //OOP_HW_2_BITSTRING_H
