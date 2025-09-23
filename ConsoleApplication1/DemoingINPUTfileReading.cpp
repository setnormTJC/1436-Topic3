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
	std::string filename = "C:\\Users\\Work\\Downloads\\popularWords.txt"; 
	
	//change me to an "absolute" filepath

	std::ifstream fin(filename);
	if (fin.is_open() == false)
	{

		std::cout << "Cannot find input file!\n";
	}
	
	std::string currentLine; 
	
	int lineNumber = 0; 
	int numberOfWordsThatBeginWithA = 0; 

	while (std::getline(fin, currentLine))
	{
		std::cout << currentLine << "\n";
		lineNumber++;

		//do some data analytics (ex: what is the longest word in the dictionary?)

		//count the number of words starting with the letter 'a': 
		if (currentLine.at(0) == 'a')
		{
			numberOfWordsThatBeginWithA++; 
		}
	}

	std::cout << "TOTAL number of lines (words): " << lineNumber << "\n";
	std::cout << "AND the number of words beginning with a is = " << numberOfWordsThatBeginWithA << "\n";
}

