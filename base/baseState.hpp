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
    virtual TaskRC execute() = 0;
};

#endif