// DemoWritingToAnOutputFile.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> //io stands for input/output 

#include<fstream>  //f stands for file 

//what is a stream? 

int main()
{
    std::cout << "Hello World!\n"; //writes text to console (AKA: terminal) 


    std::string filename = "outputFilename.txt";//a "relative" filepath

    std::ofstream outputFile(filename);  //demo std::ios::app(end)

    //while (true) //danger, Will Robinson!
    //{
    outputFile << "a"; //writes text to the output file named "
    //}

    outputFile.close(); 

}
