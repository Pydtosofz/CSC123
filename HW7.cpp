//
//  main.cpp
//  Homework 7
//
//  Created by Aiman Moufid on 12/15/24.
//

#include <iostream>
void initializemenu(char x[][6], int y, int z);
void displayMap(char x[][6], int y, int z);
int makereservation(char x[][6], int y, int z);
using namespace std;
int main()
{
    const int i = 12, p = 6;
    char array[i][p];
    int x=1;
    initializemenu(array, i, p);
    do
    {
        displayMap(array, i, p);
        x = makereservation(array, i , p);
        

        
    }while (x == 0);
    
    
    
    return 0;
}
void initializemenu(char x[][6], int y, int z)
{
   
    for (int i = 0; i < y; i++)
    {
        for(int p = 0; p < z; p++)
        {
            x[i][p] = '*';
            
        }
        
    }
    
}
void displayMap(char array[][6], int x, int y)
{
    for (int i = 0; i < x; i++)
    {
        for(int p = 0; p < y; p++)
        {
            cout << array[i][p] << " ";
        }
        cout << endl;
    }
    
}

int makereservation(char xx[][6], int y, int z)
{
        int x = 1;
        char ch;
        cout << "Would you like to reserve a seat? Type Y or N :  ";
        cin >> ch;
        if (ch == 'Y')
        {
            cout << "What row would you like to be seated in? >" ;
            cin >> y;
            cout << "What column would you like to be seated in? >" ;
            cin >> z;
            if (xx[y-1][z-1] != 'X' && y > 0 && y < 13 && z > 0 && z < 7)
                xx[y-1][z-1] = 'X';
            else if(xx[y-1][z-1] == 'X' && y > 0 && y < 13 && z > 0 && z < 7)
                cout << "This seat is already taken." << endl;
            else
                cout << "This seat is outside of the plane" << endl;
            
            x = 0;
        }
        else if(ch == 'N')
        {
            x = 1;
        }
        else
            cout << "You typed the wrong thing, try again." << endl;
        
    return x;
    
}
