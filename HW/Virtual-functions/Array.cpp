//
// Created by Mairenn on 2019-06-03.
//

#include "Array.h"

Array::Array(size_t p_size)
{
    std::cout << "Array constructor is called" << std::endl;
    m_size = p_size;
    for (size_t i = 0; i < m_size; i++)
        m_array[i] = '0';
}

Array::Array(std::string p_str)
{
    std::cout << "Array string constructor is called" << std::endl;
    m_size = p_str.length();
    // constructor copies string to array in reverse oder
    for (size_t i = 0, j = m_size - 1; i < m_size; ++i, --j) {
        m_array[i] = p_str[j];
    }
}

Array::Array(const Array &p_arr)
{
    m_size = p_arr.m_size;
    for (size_t i = 0; i < m_size; ++i)
        m_array[i] = p_arr.m_array[i];
}

bool Array::Addition(const Array *p_arr, Array *p_result)
{
    return true;
}

Array* Array::operator= (const Array * p_arr)
{
    m_size = (*p_arr).m_size;
    for (size_t i = 0; i < m_size; ++i)
        m_array[i] = (*p_arr).m_array[i];
    return this;
}

std::ostream& operator<< (std::ostream &p_out, const Array *p_arr)
{
    for (int i = (*p_arr).size() - 1; i >= 0; i--) {
        p_out << (*p_arr)[i];
    }
    return p_out;
}

void Array::clear()
{
    m_size = 0;
}