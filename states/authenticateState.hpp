#ifndef __AUTHENTICATE_STATE_HPP__
#define __AUTHENTICATE_STATE_HPP__

#include <iostream>
#include <memory>
#include "../base/baseState.hpp"
#include "../base/userdata.hpp"
#include "../database/database.hpp"

class AuthenticateState : public BaseState
{
    std::shared_ptr<User>user;
    public:
    AuthenticateState(std::shared_ptr<User> userdata)
    {
        std::cout <<"Authenticate constructor" <<std::endl;
        user = userdata;
    }

    TaskRC execute()
    {
        user->authenticate = Database::get_instance()->authenticate(user->name, user->pass);
        return TaskRC::Success;
    }
};

#endif