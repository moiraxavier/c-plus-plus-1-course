//
// Created by Mairenn on 2019-06-02.
//

#ifndef OOP_HW_3_MATHEXCEPTION_H
#define OOP_HW_3_MATHEXCEPTION_H

#include <iostream>
#include <stdexcept>

class MathException : public std::exception
{
private:
    std::string m_error;
public:
    MathException(std::string error) : m_error(error) {}
    const char* what() const noexcept override { return m_error.c_str(); }
    ~MathException() override {}
};


#endif //OOP_HW_3_MATHEXCEPTION_H
