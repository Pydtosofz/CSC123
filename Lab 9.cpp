//
//  main.cpp
//  Lab 9
//
//  Created by Aiman Moufid on 12/2/24.
//

#include <iostream>
using namespace std;
int main()
{
    int nums[5][3];
    int count = 1;
    for(int i = 0; i < 5; i++ )
    {
        for (int p = 0; p < 3 ; p++)
        {
            nums[i][p] = count++;
            cout << nums[i][p] << " ";
        }
        cout << endl;
    }
    double grades[3][4];
    grades[0][0] = 69;
    grades[0][1] = 75;
    grades[0][2] = 80;
    grades[0][3] = 89;
    grades[1][0] = 92;
    grades[1][1] = 100;
    grades[1][2] = 95.5;
    grades[1][3] = 97;
    grades[2][0] = 71;
    grades[2][1] = 70;
    grades[2][2] = 75.5;
    grades[2][3] = 81.5;
    for(int i = 0; i < 3; i++ )
    {
        for (int p = 0; p < 4 ; p++)
        {
            count = count + grades[i][p];
        }
        count = count / 4;
        cout << "Average for row " << i+1 << ": " << count << endl;
    }
    count = 0;
    for(int i = 0; i < 4; i++)
    {
        count = count + grades[2][i];
    }
    count = count / 4;
    cout << "Average scores of 2nd Exam: " << count << endl;
    count = 0;
    for(int i = 0; i < 3; i++ )
    {
        for (int p = 0; p < 4 ; p++)
        {
            if(grades[i][p] >= 80)
                count++;
        }
        
    }
    cout << "Scores above 80: " << count << endl;
}
