#include <iostream>
#include "states/loginState.hpp"
#include "base/baseWorkflow.hpp"

int main()
{
    std::cout <<"--- SEMINARIUM WORKFLOW ---" <<std::endl;
    BaseWorkflow<BaseState> workflow1 {"login_workflow"};
    workflow1.add(new LoginState());
    workflow1.execute();
    return 0;
}