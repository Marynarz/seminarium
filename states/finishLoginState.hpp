#ifndef __FINISH_LOGIN_STATE_HPP__
#define __FINISH_LOGIN_STATE_HPP__

#include <iostream>
#include <memory>
#include "../base/baseState.hpp"
#include "../base/userdata.hpp"

class FinishLoginState : public BaseState
{
    std::shared_ptr<User>user;
    public:
    FinishLoginState(std::shared_ptr<User> userdata)
    {
        std::cout <<"Authenticate constructor" <<std::endl;
        user = userdata;
    }

    TaskRC execute()
    {
        if(!user->authenticate)
        {
            std::cout <<"Login failed: " <<user->name <<std::endl;
            throw std::exception();
        }

        std::cout <<"Hello:\t" <<user->name <<std::endl;
        return TaskRC::Success;
    }
};

#endif