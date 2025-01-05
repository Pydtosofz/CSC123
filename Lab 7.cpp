//
//  main.cpp
//  Lab7
//
//  Created by Aiman Moufid on 10/30/24.
//

#include <iostream>
#include <cmath>
using namespace std;
float getSum(float a, float b , float c)
{
    float sum;
    sum = a + b + c;
    return sum;
}
int main()
{
    float num1, num2, num3;
    cout << "**Type Three Numbers Below**\n Number One: ";
    cin >> num1;
    cout << "\n Number Two: ";
    cin >> num2;
    cout << "\n Number Three: ";
    cin >> num3;
    cout << "\nThe Sum of all three numbers added together is: " << getSum(num1, num2, num3) << endl;
}










/*
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double n;
    cout << "Enter a number:  ";
    cin >> n;
    cout << endl << "The Square root of your number is: " << sqrt(n) << endl
    << "The number raised to the fourth power is: " << pow(n,4)<< endl
    << "The Floor of your number is: " << floor(n) << endl;
    return 0;
}

*/






/*
#include <iostream>
using namespace std;
int doubleMultiply(int a, int b)  //Creates the function to be called back to later
{
    int product;
    product =  a * b * 2;
    return product;
}

int main()
{
    int num1, num2;
    cout << "Enter 2 integers: ";
    cin >> num1 >> num2;
    cout << "Twice the product of the numbers is: " << doubleMultiply(num1, num2) << endl;
 // Calls function using the two inputs as a and b for function declared earlier and will print the return value in its place.
    system("PAUSE"); // No clue what this does.
    return 0;
}
*/
