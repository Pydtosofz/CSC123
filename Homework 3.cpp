//
//  main.cpp
//  Homework Assignment 3
//
//  Created by Aiman Moufid on 10/16/24.
//


#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main()
{
    double i, dice1, dice2, point, counter1, counter2, denom;
    double avg;
    srand(static_cast<double>(time(0)));
    point = 0;
    counter1 = 0;
    counter2 = 0;
    for (i = 0; i < 10000; i++)
    {
        dice1 = (rand() % 6) + 1;
        dice2 = (rand() % 6) + 1;
        if (dice1 + dice2  == 7 || dice1 + dice2 == 11)
            counter1 = counter1 + 1;
        else if (dice1 + dice2  == 2 || dice1 + dice2 == 12 || dice1 + dice2 == 3)
            counter2 = counter2 + 1;
        else
        {
            point = dice1 + dice2;
            do
            {
                dice1 = (rand() % 6) + 1;
                dice2 = (rand() % 6) + 1;
                if (dice1 + dice2 == 7)
                {
                    counter2 = counter2 + 1;
                    dice1 = 4;
                    dice2 = 3;
                    point = 7;
                }
            }while(dice1 + dice2 != point);
            if (dice1 + dice2 != 7)
                counter1 = counter1 + 1;
        }
    }
    cout << counter1 << " Wins" << endl << counter2 << " Losses" << endl;
    denom = counter1 + counter2;
    avg = counter1 / denom;
    cout << fixed << showpoint << setprecision(2) << avg * 100 << "% Winrate"<< endl;
    if (avg * 100 > 50)
        cout << "House Loses, You Win!" << endl;
    else if (avg * 100 == 50)
        cout << "You hit the 50/50 thats crazy"<< endl;
    else
        cout << "House Wins, You Lose"<< endl;
    
        return 0;
    }
/*
 4886 Wins
 5114 Losses
 48.86% Winrate
 House Wins, You Lose
 Program ended with exit code: 0
 
 4849 Wins
 5151 Losses
 48.49% Winrate
 House Wins, You Lose
 Program ended with exit code: 0
 
 5025 Wins
 4975 Losses
 50.25% Winrate
 House Loses, You Win!
 Program ended with exit code: 0
 */
