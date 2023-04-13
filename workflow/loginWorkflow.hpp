#ifndef __LOGIN_WORKFLOW__
#define __LOGIN_WORKFLOW__

#include <memory>
#include "../base/baseWorkflow.hpp"
#include "../base/baseState.hpp"
#include "../states/loginState.hpp"
#include "../states/insertUsernameState.hpp"
#include "../states/authenticateState.hpp"
#include "../states/finishLoginState.hpp"
#include "../base/userdata.hpp"

class LoginWorkflow : protected BaseWorkflow<BaseState>
{
    std::shared_ptr<User> user;

public:
    LoginWorkflow() : BaseWorkflow<BaseState>("LoginWorkflow")
    {
        add(new LoginState());
        add(new InsertUsernameState(user));
        add(new AuthenticateState(user));
        add(new FinishLoginState(user));
    }
    void execute()
    {
        user.reset(new User());
        BaseWorkflow<BaseState>::execute();
    }
};

#endif