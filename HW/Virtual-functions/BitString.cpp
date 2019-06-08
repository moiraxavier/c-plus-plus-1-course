//
// Created by Mairenn on 2019-06-03.
//

#include "BitString.h"


bool BitString::Addition(const Array *p_arr, Array *p_result)
{
    std::cout << "BitString Addition is called" << std::endl;
    if (m_size == 0 || (*p_arr).size() == 0)
        throw Exception("Empty string");

    size_t length = std::min(m_size, (*p_arr).size());
    for (size_t i = 0; i < length; ++i) {
        if (m_array[i] == '1'  ||  (*p_arr)[i] == '1')
            (*p_result)[i] = '1';
        else
            (*p_result)[i] = '0';
    }

    if (m_size > length) {
        for (size_t i = length; i < m_size; ++i)
            (*p_result)[i] = m_array[i];
        (*p_result).size() = m_size;
        return true;
    }

    if ((*p_arr).size() > length) {
        for (size_t i = length; i < (*p_arr).size(); ++i)
            (*p_result)[i] = (*p_arr)[i];
        (*p_result).size() = (*p_arr).size();
        return true;
    }

    return true;
}
