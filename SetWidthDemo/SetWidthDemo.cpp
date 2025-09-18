// SetWidthDemo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

int main()
{
    const std::string name1 = "Seth Matthew Norman";
    const int firstAge = 37; 
    const int firstHeight = 69; //inches

    const std::string name2 = "Hesam NotApplicable Ghadeqadsdfgsdfgsdfgsdfrijasdfbjkhasdfjkhdsfkj"; //this has a length = 49
    const int secondAge = 20;
    const int secondHeight = 63;

    //int WIDTH_OF_NAME_COLUMN = 50; //"hard-coded" approach
    //better approach: 
    int PADDING = 5; //arbitrary amount of padding 
    int WIDTH_OF_NAME_COLUMN = std::max(name1.length(), name2.length()) + PADDING; 

    //first row of data: 
    std::cout << std::left << std::setw(WIDTH_OF_NAME_COLUMN) << name1;
    std::cout << std::left << std::setw(4) << firstAge; 
    std::cout << std::left << std::setw(4) << firstHeight; 
    std::cout << "\n";

    //second row of data: 
    std::cout << std::left << std::setw(WIDTH_OF_NAME_COLUMN) << name2;
    std::cout << std::left << std::setw(4) << secondAge;
    std::cout << std::left << std::setw(4) << secondHeight;
    std::cout << "\n";


}

