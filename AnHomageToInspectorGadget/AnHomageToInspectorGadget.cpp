//THis program is another example of writing an output file

#include<fstream>
#include <iostream>

int main()
{
    std::string THISfilename = "AnHomageToInspectorGadget.cpp";



    std::ofstream fout(THISfilename);
    fout << ""; //BOOM!

    fout.close(); 
}

