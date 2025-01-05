//
//  main.cpp
//  Homework Assignment 5
//
//  Created by Aiman Moufid on 11/4/24.
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

double FUNCT_FABS (double value);
double FUNCT_CEIL (double value);
double FUNCT_FLOOR(double value);
double FUNCT_ROUND(double value);
double FUNCT_POWER(double value, double exponent);
void   FUNCT_U ();
void   menu()
{
    cout << "** Cmath Replica ** \n Select one of the Following: " << endl
    << "1. fabs" << endl
    << "2. ceil" << endl
    << "3. floor"<< endl
    << "4. round"<< endl
    << "5. pow"  << endl
    << "6. Quit" << endl << ">";
    
}
int main()
{
    string op, choice;
    char ope;
   
    do {
        menu();
        cin >> op;
        if (op != "6")
        {
            if (op == "1")
            {
               
                double num, abs;
                cout << "This is fabs" << endl;
                cout << "Enter your number:" << endl << ">";
                cin >> num;
                abs = FUNCT_FABS(num);
                cout << "The absolute value of " << num << " is: "  << fixed << showpoint << setprecision(1) << abs << noshowpoint <<endl;
            }
            else if (op == "2")
            {
                double num, ceil;
                cout << "This is ceil" << endl;
                cout << "Enter your number:" << endl << ">";
                cin >> num;
                ceil = FUNCT_CEIL(num);
                cout << "The ceiling of "  << num << " is: " << fixed << showpoint << setprecision(1) << ceil <<noshowpoint << endl;
            }
            else if (op == "3")
            {
                double num, floor;
                cout << "This is floor" << endl;
                cout << "Enter your number;" << endl << ">";
                cin >> num;
                floor = FUNCT_FLOOR(num);
                cout << "The floor of "  << num << " is: " << fixed << showpoint << setprecision(1) << floor <<noshowpoint << endl;
            }
            else if (op == "4")
            {
                cout << "This is round" << endl;
                double num, round;
                cout << "Enter your number;" << endl << ">";
                cin >> num;
                round = FUNCT_ROUND(num);
                cout << "The rounded value of " << num << " is: " << fixed << showpoint << setprecision(1) << round <<noshowpoint << endl;
                
            }
            else if (op == "5")
            {
                cout << "This is pow" << endl;
                double num, exp,  pow;
                cout << "Enter your number:" << endl << ">";
                cin >> num;
                cout << "Enter your whole number power:" << endl << ">";
                cin >> exp;
                pow = FUNCT_POWER(num, exp);
                cout  << num << " to the power of: " << exp << " is: " << fixed << showpoint << setprecision(1) <<pow <<noshowpoint << endl;
                
            }
                
            
            else
            {
                FUNCT_U();
            }
                    
                    
                    
                    
            }
        }while (op != "6");

}

double FUNCT_FABS(double value)
{
    if (value <=0)
    {
        return -value;
    }
    else
        return value;
}
double FUNCT_CEIL(double value)
{
    if (value > static_cast<int>(value))
    {
        return static_cast<int>(value + 1);
    }
    else if (value == static_cast<int>(value))
        return value;
    else
        return static_cast<int>(value + 1);
    return value;
}
double FUNCT_FLOOR(double value)
{
    if (value < 0)
        return static_cast<int>(value - 1);
    else
        return static_cast<int>(value);
}

double FUNCT_ROUND(double value)
{
    if (value < 0)
        return static_cast<int>(value - 0.5);
    else if (value == 0)
        return value;
    else
        return static_cast<int>(value + 0.5);
}

double FUNCT_POWER(double value, double exponent)
{
    int i;
    double newval = 1;
    for (i = 0; i < exponent; i++)
    {
        newval = newval * value;
    }
    return newval;
}
void FUNCT_U()
{
    cout << "This wasnt quite what we were looking for, try again." << endl;
}
