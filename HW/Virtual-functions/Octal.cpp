//
// Created by Mairenn on 2019-06-03.
//

#include "Octal.h"


bool Octal::Addition(const Array *p_arr, Array *p_result)
{
    std::cout << "Octal Addition is called" << std::endl;
    if (m_size == 0 || (*p_arr).size() == 0)
        throw Exception("Empty string");

    int buf = 0, sum = 0;
    size_t length = std::min(m_size, (*p_arr).size());
    for (size_t i = 0; i < length; ++i) {
        sum = buf + (m_array[i] - '0') + ((*p_arr)[i] - '0');
        buf = 0;
        (*p_result)[i] = (sum % 8) + '0';
        if (sum >= 8)
            buf = 1;
        (*p_result).size()++;
    }

    if (m_size > length) {
        for (size_t i = length; i < m_size; ++i) {
            sum = buf + (m_array[i] - '0');
            buf = 0;
            (*p_result)[i] = (sum % 8) + '0';
            if (sum >= 8)
                buf = 1;
            (*p_result).size()++;
        }
    }

    if ((*p_arr).size() > length) {
        for (size_t i = length; i < (*p_arr).size(); ++i) {
            sum = buf + ((*p_arr)[i] - '0');
            buf = 0;
            (*p_result)[i] = (sum % 8) + '0';
            if (sum >= 8)
                buf = 1;
            (*p_result).size()++;
        }
    }

    if (buf != 0) {
        (*p_result)[m_size] = buf + '0';
        (*p_result).size()++;
    }

    return true;
}

