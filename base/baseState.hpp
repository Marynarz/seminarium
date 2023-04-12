#ifndef __BASE_STATE__
#define __BASE_STATE__

enum TaskRC
{
    Success,
    Fail,
    End,
};

struct BaseState
{
    BaseState() {};
    virtual ~BaseState() {};
    virtual TaskRC execute() {};
};

#endif