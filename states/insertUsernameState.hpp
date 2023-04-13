#ifndef __INSERT_USERNAME_STATE_HPP__
#define __INSERT_USERNAME_STATE_HPP__

#include <iostream>
#include <memory>
#include "../base/baseState.hpp"
#include "../base/userdata.hpp"

class InsertUsernameState : public BaseState
{
    std::shared_ptr<User>user;
    public:
    InsertUsernameState(std::shared_ptr<User> userdata)
    {
        std::cout <<"InsertUsername constructor" <<std::endl;
        user = userdata;
    }

    TaskRC execute()
    {
        std::cout <<"\n--- LOGIN ---\nUser:\t";
        std::cin >>user->name;
        std::cout <<"\nPassword:\t";
        std::cin >>user->pass;
        std::cout <<"\n-------------" <<std::endl;
        
        return TaskRC::Success;
    }
};

#endif