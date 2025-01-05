
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;
void part1(double x[])
{
    for (int i = 0; i < 50; i++)
    {
        if (i < 25)
        {
            x[i] = (i+1) * (i+1);
        }
        else
        {
            x[i] = (i+1) * 3;
        }
    }
}
void part2(double x[])
{
    for (int i = 1; i < 51; i++)
    {
        cout << left << setw(5) << x[i-1];
        if (i % 10 == 0 && i != 0)
        {
            cout << endl;
        }
    }
}
void part3(double x[])
{
    srand(static_cast<double>(time(0)));
    for (int i = 0; i < 50; i++)
    {
        x[i] = (rand() % 100) + 1;
    }
}
void part4(double x[])
{
    int sum = 0;
    double avg = 0;
    for (int i = 0; i < 50; i++)
    {
        sum = x[i] + sum;
        if(i!=0)
        {
            avg = sum / i;
        }
    }
    cout << "The average of the random numbers is: " << avg << endl;
   
}
void part5(double x[])
{
    int counter = 0;
    for (int i = 0; i < 50; i++)
        if(x[i] == 100)
        {
            counter++;
            cout << "Element " << i << " equals 100"<< endl;
        }
    cout << "The total number of elements that equal 100 is: " << counter << endl;
}
int main()
{

    double alpha[50];
    part1(alpha);
    part2(alpha);
    part3(alpha);
    part4(alpha);
    part5(alpha);
}
