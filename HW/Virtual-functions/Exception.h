//
// Created by Mairenn on 2019-06-03.
//

#ifndef OOP_HW_2_EXCEPTION_H
#define OOP_HW_2_EXCEPTION_H

#include <iostream>

class Exception : public std::exception
{
private:
    std::string m_error;
public:
    Exception(std::string error) : m_error(error) {}
    const char* what() const noexcept override;
    ~Exception() override {}
};


#endif //OOP_HW_2_EXCEPTION_H
