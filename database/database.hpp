#ifndef __DATABASE_HPP__
#define __DATABASE_HPP__

#include <map>
#include <string>
#include <stdexcept>
#include <iostream>

class Database
{
    static Database *instance;
    Database(){};
    std::map<std::string, std::string> database;
    
public:
    Database(const Database &) = delete;
    Database(const Database &&) = delete;

    void operator=(const Database &) = delete;
    void operator=(const Database &&) = delete;

    static Database *get_instance();
    void insert(const std::string &, const std::string &);
    bool authenticate(const std::string &, const std::string &);
};

#endif