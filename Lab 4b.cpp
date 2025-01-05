#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    char op;
    double num1, num2;
    cout << "First Number: ";
    cin >> num1;
    cout << "\nOperator: ";
    cin >> op;
    cout << "\nSecond Number: ";
    cin >> num2;
    switch(op)
    {
        case '+':cout << num1 << op << num2 << "=" <<  num1 + num2 ;
            break;
        case '-':cout << num1 << op << num2 << "=" <<  num1 - num2 ;
            break;
        case '*':cout << num1 << op << num2 << "=" <<  num1 *  num2 ;
            break;
        case '/':if (num2 != 0)
                    cout << num1 << op << num2 << "=" <<  num1 / num2 ;
                 else
                        cout << "Divide by 0 Error" ;
            break;
        default: cout << "error";
    }
    return 0;
    
    
    
}
     

