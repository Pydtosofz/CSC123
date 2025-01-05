//
//  main.cpp
//  Lab 5
//
//  Created by Aiman Moufid on 9/30/24.
//

#include <iomanip>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    char ope;
    double num1, num2;
    string op, choice;
    do
    {
        cout << "***Type Your Operator then hit Enter***" << endl << endl
        << setw(26) << "Addition (+)" << endl
        << setw(26)<< "Subtraction (-)" << endl
        << setw(26) << "Multiplication (*)" << endl
        << setw(26) << "Division (/)" << endl
        << setw(26) << "Quit (Q)" << endl << endl
        << ">";
        cin >> op;
        ope = op.at(0);
        op = ope;
        if (op != "Q")
        {
            switch(ope)
            {
                case '+':
                    cout << "First Number: ";
                    cin >> num1;
                    cout << "\nSecond Number: ";
                    cin >> num2;
                    cout << num1 << ope << num2 << "=" <<  num1 + num2 << endl;
                    break;
                case '-':
                    cout << "First Number: ";
                    cin >> num1;
                    cout << "\nSecond Number: ";
                    cin >> num2;
                    cout << num1 << ope << num2 << "=" <<  num1 - num2 << endl ;
                    break;
                case '*':
                    cout << "First Number: ";
                    cin >> num1;
                    cout << "\nSecond Number: ";
                    cin >> num2;
                    cout << num1 << ope << num2 << "=" <<  num1 *  num2 << endl;
                    break;
                case '/':
                    cout << "First Number: ";
                    cin >> num1;
                    cout << "\nSecond Number: ";
                    cin >> num2;
                    if (num2 != 0)
                    {
                        cout << num1 << ope << num2 << "=" <<  num1 / num2 << endl;
                    }
                    else
                        cout << "Divide by 0 Error" << endl;
                    break;
                default: cout << "Error" << endl;
                
            }
            
        }
  
        cout <<  "\nWould you like to continue?\nType Yes or No: >";
        cin >> choice;
        if (choice == "no" || choice == "NO" || choice == "No" || choice == "nO")
            op = 'Q';
    }while (op != "Q");
           return 0;
           

    
        
    }


/*
 ***Type Your Operator then hit Enter***
 
 Addition (+)
Subtraction (-)
Multiplication (*)
 Division (/)
     Quit (Q)

>2
Error

Would you like to continue?
Type Yes or No: >Yes
***Type Your Operator then hit Enter***

 Addition (+)
Subtraction (-)
Multiplication (*)
 Division (/)
     Quit (Q)

>+
First Number: 1

Second Number: 2
1+2=3

Would you like to continue?
Type Yes or No: >Yes
***Type Your Operator then hit Enter***

 Addition (+)
Subtraction (-)
Multiplication (*)
 Division (/)
     Quit (Q)

>/
First Number: 3

Second Number: 0
Divide by 0 Error

Would you like to continue?
Type Yes or No: >No
Program ended with exit code: 0
 */
