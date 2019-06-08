//
// Created by Mairenn on 2019-06-03.
//

#ifndef OOP_HW_2_ARRAY_H
#define OOP_HW_2_ARRAY_H

#include <iostream>
#include <string.h>


class Array
{
protected:
    static const size_t m_max_size = 100;
    unsigned char m_array[m_max_size];
    size_t m_size;
public:
    explicit Array(size_t p_size = 0);
    explicit Array(std::string p_str);
    Array(const Array &arr);

    unsigned char& operator[](const size_t p_index) { return m_array[p_index];}
    const unsigned char& operator[](const size_t p_index) const { return m_array[p_index];}

    virtual bool Addition(const Array *p_arr, Array *p_result);

    Array* operator= (const Array * p_arr);
    size_t size() const { return m_size; }
    size_t& size() { return m_size; }
    virtual ~Array() = default;

    void clear();
};

std::ostream& operator<< (std::ostream &p_out, const Array *p_arr);

#endif //OOP_HW_2_ARRAY_H
