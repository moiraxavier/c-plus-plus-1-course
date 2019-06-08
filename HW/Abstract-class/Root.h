//
// Created by Mairenn on 2019-06-02.
//

#ifndef OOP_HW_3_ROOT_H
#define OOP_HW_3_ROOT_H

#include <iostream>
#include <stdexcept>

class Root
{
public:
    Root() {}
    virtual void Count() = 0;
    virtual void Input() = 0;
    virtual void Print() = 0;
    virtual ~Root() = default;
};


#endif //OOP_HW_3_ROOT_H
