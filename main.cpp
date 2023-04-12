#include <iostream>
#include "states/loginState.hpp"

int main()
{
    std::cout <<"--- SEMINARIUM WORKFLOW ---" <<std::endl;
    auto log = LoginState();
    log.execute();
    return 0;
}