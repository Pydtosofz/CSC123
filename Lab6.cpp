// Aiman Moufid
// Monday, October 21st 2024,  8:41PM EST
// Program for practice ofstreams





#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;
int main()
{
    ifstream files("inData.txt");
    ofstream filed("outData.txt");
    cout << "Program to review streams...\n" << endl;
    char c;
    string string1;
    cout << "Input File Opened, Output File created...\n";
    if (files)
    {
        filed << "this is an empty line moment kekw \n\n";
        while (getline(files, string1))
        {
            filed << string1 << endl;
        }
    }
    else
        cout << "Failed"<< endl;
    files.close();
    filed.close();
    return 0;
}




//


