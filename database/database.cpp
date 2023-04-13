#include "database.hpp"

Database *Database::instance = nullptr;

Database *Database::get_instance()
{
    if(!instance)
        instance = new Database();
    
    return instance;
}

void Database::insert(const std::string &name, const std::string &pass)
{
    database.insert({name, pass});
}

bool Database::authenticate(const std::string &name, const std::string &pass)
{
    try
    {
        database.at(name);
    }
    catch (const std::out_of_range &e)
    {
        std::cout << "[DATABASE]: User not exist";
        return false;
    }

    if (database[name] != pass)
    {
        std::cout << "[DATABASE]: Password failed";
        return false;
    }

    return true;
}