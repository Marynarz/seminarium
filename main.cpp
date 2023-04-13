#include <iostream>
#include "states/loginState.hpp"
#include "workflow/loginWorkflow.hpp"
#include "database/database.hpp"

int main()
{
    std::cout <<"--- SEMINARIUM WORKFLOW ---" <<std::endl;
    Database::get_instance()->insert("Wojtek", "password");
    LoginWorkflow lw1;
    lw1.execute();
    return 0;
}