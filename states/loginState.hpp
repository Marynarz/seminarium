#ifndef __LOGIN_STATE_HPP__
#define __LOGIN_STATE_HPP__

#include <iostream>
#include "../base/baseState.hpp"

class LoginState : public BaseState
{
    public:
    LoginState()
    {
        std::cout <<"Login constructor" <<std::endl;
    }

    TaskRC execute()
    {
        std::cout <<"Logged in" <<std::endl;
        return TaskRC::Success;
    }
};

#endif