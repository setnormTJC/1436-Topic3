// DemoWritingToAnOutputFile.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> //io stands for input/output 

#include<fstream>  //f stands for file 

//what is a stream? 

int main()
{
    std::cout << "Hello World!\n"; //writes text to console (AKA: terminal) 
    //cout is short for character output (to the "terminal")

    //fout is short for "file output"
    std::string fout = "outputFilename.txt";//a "relative" filepath

    std::ofstream outputFile(fout, std::ios::app);  //demo std::ios::app(end)
    //app changes from "overwrite" mode to append mode!

    //while (true) //danger, Will Robinson!
    //{
    outputFile << "This text will be app(ended) after the character c."; //writes text to the output file named "
    //}

    outputFile.close();

}
