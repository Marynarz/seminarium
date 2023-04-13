#ifndef __BASE_WORKFLOW__
#define __BASE_WORKFLOW__

#include <list>

template <typename T>
class BaseWorkflow
{
protected:
    std::list<T *> states_list;
    std::string workflow_name;

public:
    BaseWorkflow(const std::string &name) : workflow_name(name){};
    ~BaseWorkflow()
    {
        for (auto i : states_list)
            delete i;
    }
    virtual void add(T *new_element)
    {
        states_list.push_back(new_element);
    }

    virtual void execute()
    {
        std::cout << "[START]: workflow:\t" << workflow_name << std::endl;
        try
        {
            for (const auto i : states_list)
            {
                i->execute();
            }
        }
        catch (const std::exception &e)
        {
            std::cout << "[EXCEPTION]: " << e.what() << std::endl;
            std::cout << "[FAIL]: workflow {" << workflow_name << "} failed." << std::cout;
        }
    }
};

#endif