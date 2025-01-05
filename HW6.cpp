#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void readin (string, int [ ], int);
void printarray (int [ ], int);
double average(int [ ], int);
int updateScores (int [ ] , int, double);
void backup (int [ ], int [ ], int );
int main()
{
    const int SIZE = 15;
    int scores [SIZE], backupScores[SIZE];
    double avg;
    int beans;
    string file = "InputFile.txt";
    ifstream inputfile(file);
    if(inputfile)
    {
        readin(file, scores, SIZE);
        printarray(scores, SIZE);
        avg = average(scores, SIZE);
        cout << "Average Grade: " << fixed << showpoint << setprecision(2) << avg << endl << noshowpoint;
        backup(scores, backupScores, SIZE );
        beans = updateScores(scores, SIZE, avg);
        cout  << "Scores over 90: "<< beans << endl;
        printarray(scores, SIZE);
    }
    else
        cout << "broken :("<< endl;
    inputfile.close();
    return 0;
}

void readin (string x,  int y[] , int z)
{
    ifstream inputfile(x);
    for (int i = 1; i <= z; i++)
    {
            inputfile >> y[i-1];
    }
}

void printarray (int x[], int y)
{
    for (int i = 1; i <= y; i++)
    {
            cout << x[i-1] << " ";
    }
    cout << endl;
}

double average(int x[ ], int y)
{
    double avg = 0;
    for (int i = 1; i <= y; i++)
    {
        avg = avg + x[i-1];
    }
    avg = avg / y;
    return avg;
}

void backup (int x [ ], int y[ ], int z)
{
    for (int i = 1; i <= z; i++)
    {
        y[i-1] = x[i-1];
        
    }
}

int updateScores (int x[ ] , int y, double z)
{
    int counter = 0;
    for (int i = 1; i <= y; i++)
    {
        if (x[i-1] > z)
        {
            x[i-1] = x[i-1] + 5;
        }
        else if (x[i-1] < z)
        {
            x[i-1] = x[i-1] + 10;
        }
        else
        {
            x[i-1] = x[i-1] + 7;
        }
        
        if (x[i-1] > 90)
            counter++;
    }
    return counter;
}

