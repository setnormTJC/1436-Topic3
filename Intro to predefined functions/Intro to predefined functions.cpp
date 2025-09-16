/*These "code snippets" are just demoing some "built-in" (or already-defined) functions*/
#define _USE_MATH_DEFINES

#include<cmath>
#include<iomanip>
#include <iostream>
#include<string> //for `getline` (backtick) function 


void demoPowAndSqrtFunctions() //a "user (programmer)-defined" function 
{
    double five = sqrt(25.0);

    //you can "drill down" into the definition of the sqrt function to see how it works (if interested) 

    std::cout << "The square root (sqrt) of 25.0 is: " << five << "\n";

    std::cout << "Pow (3, 2) is: " << pow(3, 2) << "\n"; //NOT an onomateapia word ("sound word") 
    std::cout << "pow (2, 3) is: " << pow(2, 3) << "\n";
    std::cout << "pow (2, 0.5) is: " << pow(2, 0.5) << "\n"; //1.41...
    std::cout << "pow (-1, 0.5) is: " << pow(-1, 0.5) << "\n"; //should be the imaginary number??
    //that last line actually produces nan (not a number)  

    std::cout << "Number of angstroms in one meter: " << pow(10, 10) << "\n";
}

void demoGettingNumberOfCharactersInAString()
{
    //demoPowAndSqrtFunctions(); 
    std::cout << "Enter your name:\n";

    std::string name;
    std::getline(std::cin, name);
    //std::cin >> name; //THIS is an alternative to getline
    //BUT!! it only reads up to the first space character

    typedef int integer;
    integer mySpecialNumber = 1233;

    std::cout << "YOu entered: " << name << "\n";
    std::cout << "The number of characters (AKA: length) of that name is: "
        << name.length() << "\n";

}

/*THis function does "number formatting"*/
void demoSetPrecision()
{

    //std::locale //look into this if interested in the "decimal separator" stuff

    //float pi = 3.14181 //that's not very precise 

    std::cout /*<< std::fixed*/ << std::setprecision(4);
    std::cout << "10*PI  is: " << 10*M_PI << "\n";
    //std::cout << "PI* 10  is: " << M_PI * 10 << "\n";
}

int main()
{
    //demoPowAndSqrtFunctions(); 
    //demoGettingNumberOfCharactersInAString(); 

    demoSetPrecision(); 

}


