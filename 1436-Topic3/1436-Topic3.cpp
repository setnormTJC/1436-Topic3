// 1436-Topic3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string> 



#define print(text) std::cout << text << "\n";

int main()
{
    print("Enter your name:\n"); //display8ing output (AKA: "prompt" a user for some data) 

    //std::cout << "Enter your name:\n";

    //std::string firstName;
    //std::string lastName;

    //std::cin >> firstName >> lastName;  //cin >> reads up to the first SPACE!

    //std::cout << "You entered: " << firstName << " " << lastName << "\n";

    std::string  fullname; 
    //herro?
    std::getline(std::cin, fullname); //get user input 

    std::cout << "You entered " << fullname << "\n";
    std::cout << "The LENGTH (number of characters) in that name is: "
        << fullname.length() << "\n";
}
