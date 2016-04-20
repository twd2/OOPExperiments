#include "Utils.h"

#ifdef _WIN32
#include <Windows.h>
#include <strsafe.h>
#else
#include <dirent.h>
#endif

std::vector<std::string> GetFileNames(const std::string &strDir)
{
    std::vector<std::string> vFileDirList;
    
    #ifdef _WIN32
    WIN32_FIND_DATAA ffd;
    //LARGE_INTEGER filesize;
    string szDir;
    //size_t length_of_arg;
    HANDLE hFind = INVALID_HANDLE_VALUE;
    DWORD dwError = 0;

    szDir = strDir + "\\*";
    hFind = FindFirstFileA(szDir.c_str(), &ffd);

    if (INVALID_HANDLE_VALUE == hFind) 
    {
        return vFileDirList;
    }
    
    do
    {
        if (!(ffd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY))
        {
            vFileDirList.push_back(strDir + "\\" + ffd.cFileName);
        }
    }
    while (FindNextFileA(hFind, &ffd) != 0);

    dwError = GetLastError();
    if (dwError != ERROR_NO_MORE_FILES) 
    {
        cout<<"FindFirstFile error"<<endl;
        return vFileDirList;
    }
    FindClose(hFind);
    
    #else
    DIR *dir;
    struct dirent *ptr;
    dir = opendir(strDir.c_str());
    while ((ptr = readdir(dir)) != NULL)
    {
        vFileDirList.push_back(strDir + "/" + ptr->d_name);
    }
    closedir(dir);
    std::sort(vFileDirList.begin(), vFileDirList.end());
    #endif
    
    return vFileDirList;
}

bool EndsWith(const std::string &fullString, const std::string &ending)
{
    if (fullString.length() >= ending.length())
    {
        return (0 == fullString.compare(fullString.length() - ending.length(), ending.length(), ending));
    }
    else
    {
        return false;
    }
}