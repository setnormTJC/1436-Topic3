// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<fstream> 
#include <iostream>
#include <string>

void demoReadingASmallInputFile()
{
	std::ifstream fin("someTastyData.txt");

	std::string theFirstLineOfText;
	std::getline(fin, theFirstLineOfText);

	std::string theSecondLineOfText;
	std::getline(fin, theSecondLineOfText);

	//confirm the input file was read correctly by "echoing" its contents to the terminal 
	std::cout << theFirstLineOfText << "\n";
	std::cout << theSecondLineOfText << "\n";
}

int main()
{
	std::string filename = ""; //change me to an "absolute" filepath

	std::ifstream fin(filename);

	std::string currentLine; 
	
	int lineNumber = 0; 
	while (std::getline(fin, currentLine))
	{
		std::cout << currentLine << "\n";
		lineNumber++; 

		//do some data analytics (ex: what is the longest word in the dictionary?)
	}

	std::cout << "TOTAL number of lines: " << lineNumber << "\n";
}

