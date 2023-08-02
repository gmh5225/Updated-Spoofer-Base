#include <thread>
#include <random>
#include <string>
#include <Windows.h>
#include <string>
#include <winternl.h>
#include <thread>
#include <ios>
#include <limits>
#include <time.h>
#include <conio.h>
#include <sstream>
#include <string>
#include <urlmon.h>
#include <tchar.h>
#include <string.h>
#include<stdlib.h>
#include<conio.h>
#include <cstdint>
#include <winternl.h>
#include <WinInet.h>
#include <Windows.h>
#include <winbase.h>
#include <tchar.h>
#include <fstream>
#include <string>
#include <string.h>
#include <vector>
#include <Windows.h>
#include <iostream>
#include <process.h>
#include <iostream>
#include <tlhelp32.h>
#include <fstream>
#include <filesystem>
#include <windows.h>
#include <stdio.h>
#include <cstdio>
#include <vector>
#include <gdiplus.h>
#include <string>
#include <fstream>
#include <WinInet.h>
#include <random>
#include <tlhelp32.h>
#include <conio.h>
#include <comdef.h>
#include <tchar.h>
#include <mmsystem.h>
#include <CommCtrl.h>
#include <fileapi.h>
#include <iomanip> 
#include <debugapi.h>
#include <time.h>
#include <stdlib.h>
#include <Shlwapi.h>
#include "Display.hpp"
#include "./Encryption.hpp"
#include "./Protection.hpp"
using namespace std;
struct slowprint
{
    std::string data;
    long int delay;
};

void slow_print(const std::string& str, int delay_time)
{
    for (size_t i = 0; i != str.size(); ++i)
    {
        std::cout << str[i];
        Sleep(delay_time);
    }
}

std::ostream& operator<<(std::ostream& out, const slowprint& s)
{
    for (const auto& c : s.data) {
        out << c << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(s.delay));
    }
    return out;
}

void notitlechange()
{
    SetConsoleTitleA("  Themida's  |  C++ Spoofer Base");
}