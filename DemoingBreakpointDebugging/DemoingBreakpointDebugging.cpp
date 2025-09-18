// DemoingBreakpointDebugging.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Hello,";


    int a = 1233; 
    a++; 
    //__debugbreak(); 
    std::cout << "world\n";
}

