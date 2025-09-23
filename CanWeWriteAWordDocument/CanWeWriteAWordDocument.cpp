// CanWeWriteAWordDocument.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<fstream> 
#include <iostream>

int main()
{
    std::string imageFilename = "mySpecialImage.jpg";
    std::ofstream fout(imageFilename);


    fout << "Hello World!\n"; //NOTE that image software will NOT be able to display this "image" correctly
    //fout << RGBValue 0, 0, 255; 
}

