// DemoWritingToAnOutputFile.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> //io stands for input/output 

#include<fstream>  //f stands for file 

//what is a stream? 

int main()
{
    std::cout << "Hello World!\n";


    std::ofstream outputFile("outputFileName.txt"); //relative filepath 

    //while (true) //danger, Will Robinson!
    //{
        outputFile << "a";
//    }




}
