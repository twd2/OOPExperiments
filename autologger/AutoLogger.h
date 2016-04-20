#ifndef _AUTOLOGGER_H_
#define _AUTOLOGGER_H_

#include <string>
#include <iostream>
#include <mutex>
#include <thread>

class AutoLogger
{
private:
    static std::mutex mtx;
    std::string name;
    std::ostream &os;
    
public:
    AutoLogger(std::string name)
        : name(name), os(std::cout)
    {
        Log("BEGIN");
    }

    AutoLogger(std::string name, std::ostream &os)
        : name(name), os(os)
    {
        Log("BEGIN");
    }

    ~AutoLogger()
    {
        Log("END");
    }
    
    void Log(std::string info)
    {
        std::unique_lock<std::mutex> lck(mtx);
        os << "[Thread " << std::this_thread::get_id() << "] " << name << " " << info << std::endl;
    }
};

#endif // _AUTOLOGGER_H_
