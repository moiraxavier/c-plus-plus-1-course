//
// Created by Mairenn on 2019-06-03.
//

#include "Exception.h"

const char* Exception::what() const noexcept
{
    return m_error.c_str();
}