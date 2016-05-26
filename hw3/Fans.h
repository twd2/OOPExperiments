#ifndef _FANS_H_
#define _FANS_H_

#include "Notation.h"

class Fans
{
public:
    virtual ~Fans() = default;
    virtual void say_jiayou();
    void sing_song(Notation &notation);
};

class Spanish
    : public Fans
{
public:
    void say_jiayou() override;
};

class French
    : public Fans
{
public:
    void say_jiayou() override;
};

class Portuguese
    : public Fans
{
public:
    void say_jiayou() override;
};

class German
    : public Fans
{
public:
    void say_jiayou() override;
};

class English
    : public Fans
{
public:
    void say_jiayou() override;
};

#endif // _FANS_H_
