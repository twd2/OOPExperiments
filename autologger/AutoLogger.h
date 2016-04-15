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
public:
    AutoLogger(std::string name)
        : name(name)
    {
        PrintLog("BEGIN");
    }

    ~AutoLogger()
    {
        PrintLog("END");
    }
private:
    void PrintLog(std::string info)
    {
        std::unique_lock<std::mutex> lck(mtx);
        std::cout << "[Thread " << std::this_thread::get_id() << "] " << name << " " << info << std::endl;
    }
};

#endif // _AUTOLOGGER_H_
