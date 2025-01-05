//
//  main.cpp
//  Homework 4
//
//  Created by Aiman Moufid on 10/22/24.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    double totalp, totalc, avg;
    string firstn, lastn, stdnum;
    ifstream inputfile("inputFile.txt");
    ofstream outputfile("outputFile.txt");
    if (inputfile)
    {
       
        while (inputfile >> stdnum >> firstn >> lastn >> totalp >> totalc)
        {
            avg = totalp/totalc;
           
            if (avg >= 3.5)
            {
                outputfile << stdnum << " " << firstn << " " << lastn << " " << totalp << " " << totalc << " " <<fixed << showpoint << setprecision(1) << avg << " GRADUATING WITH HONORS" << endl << setprecision (0) << noshowpoint;
            }
            else if (avg < 2.0)
            {
                outputfile << stdnum << " " << firstn << " " << lastn << " " << totalp << " " << totalc << " " <<fixed << showpoint << setprecision(1) << avg << " NOT ELIGIBLE" << endl << setprecision (0) << noshowpoint;
            }
            else
            {
                outputfile << stdnum << " " << firstn << " " << lastn << " " << totalp << " " << totalc << " " <<fixed << showpoint << setprecision(1) << avg << " GRADUATE" << endl << setprecision (0) << noshowpoint;
            }
        }
        
    }
    else
        cout<< "Failed!" << endl;
    return 0;
}




/* Code for randomly generating the inputfile
 double i, num1, num2 ;
 ofstream inputFile("inputFile.txt");
 inputFile << "123 John Doe 512 128" << endl;
 for (i = 0; i < 1; i++)
 {
     num1 = (rand() % 442) + 70;
     num2 = (rand() % 128) + 1;
     if ((num1 / num2) < 4 && (num1 / num2) > 1)
     {
         inputFile << "420 Bingus Bingus " << num1  << " " << num2 << endl;
     }
     else
         i = -1;
 }
 for (i = 0; i < 1; i++)
 {
     num1 = (rand() % 442) + 70;
     num2 = (rand() % 128) + 1;
     if ((num1 / num2) < 4 && (num1 / num2) > 1)
     {
         inputFile << "069 Jeff Leonard " << num1  << " " << num2 << endl;
     }
     else
         i = -1;
 }
 for (i = 0; i < 1; i++)
 {
     num1 = (rand() % 442) + 70;
     num2 = (rand() % 128) + 1;
     if ((num1 / num2) < 4 && (num1 / num2) > 1)
     {
         inputFile << "911 Besse Botton " << num1  << " " << num2 << endl;
     }
     else
         i = -1;
 }
 for (i = 0; i < 1; i++)
 {
     num1 = (rand() % 442) + 70;
     num2 = (rand() % 128) + 1;
     if ((num1 / num2) < 4 && (num1 / num2) > 1)
     {
         inputFile << "777 Farfay Go " << num1  << " " << num2 << endl;
     }
     else
         i = -1;
 }
 for (i = 0; i < 1; i++)
 {
     num1 = (rand() % 442) + 70;
     num2 = (rand() % 128) + 1;
     if ((num1 / num2) < 4 && (num1 / num2) > 1)
     {
         inputFile << "100 UnecessarilyLongName Forthepurposethatserveszeropurpose " << num1  << " " << num2 << endl;
     }
     else
         i = -1;
 }
 for (i = 0; i < 1; i++)
 {
     num1 = (rand() % 442) + 70;
     num2 = (rand() % 128) + 1;
     if ((num1 / num2) < 4 && (num1 / num2) > 1)
     {
         inputFile << "064 B A " << num1  << " " << num2 << endl;
     }
     else
         i = -1;
 }
 for (i = 0; i < 1; i++)
 {
     num1 = (rand() % 442) + 70;
     num2 = (rand() % 128) + 1;
     if ((num1 / num2) < 4 && (num1 / num2) > 1)
     {
         inputFile << "919 MythicalBeast OfTartarus " << num1  << " " << num2 << endl;
     }
     else
         i = -1;
 }
 for (i = 0; i < 1; i++)
 {
     num1 = (rand() % 442) + 70;
     num2 = (rand() % 128) + 1;
     if ((num1 / num2) < 4 && (num1 / num2) > 1)
     {
         inputFile << "047 Skibidi Toilet " << num1  << " " << num2 << endl;
     }
     else
         i = -1;
 }
 for (i = 0; i < 1; i++)
 {
     num1 = (rand() % 442) + 70;
     num2 = (rand() % 128) + 1;
     if ((num1 / num2) < 4 && (num1 / num2) > 1)
     {
         inputFile << "003 Fiend Schmidt " << num1  << " " << num2 << endl;
     }
     else
         i = -1;
 }
 
 return 0;
}
*/
