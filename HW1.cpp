
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    const double WALK = 2 , BRISK = 4 , RUNNING = 10 ;
    double weight, weightkg, time_ex, loss1, loss2, loss3, descal;
    cout << "Welcome to the calorie burning calulator.\n\n";
    cout << "Enter your weight in pounds(lbs): ";
    cin >> weight;
    weightkg = weight / 2.2;
    cout << "Your weight in Kilograms(kg) is " << fixed << showpoint << setprecision(1) << weightkg << endl;
    cout << "Enter time excersised: ";
    cin >> time_ex;
    loss1 = time_ex * ((WALK * weightkg * 3.5) / 200);
    loss2 = time_ex * ((BRISK * weightkg* 3.5) / 200);
    loss3 = time_ex * ((RUNNING * weightkg * 3.5) / 200);
    cout << "You burned an estimated " << fixed << showpoint << setprecision(1) << loss1 << " calories walking for " << fixed << showpoint << setprecision(1) << time_ex << " minutes." << endl;
    cout << "You burned an estimated " << fixed << showpoint << setprecision(1) << loss2 << " calories walking briskly for " << fixed << showpoint << setprecision(1) << time_ex << " minutes." << endl;
    cout << "You burned an estimated " << fixed << showpoint << setprecision(1) << loss3 << " calories running for " << fixed << showpoint << setprecision(1) << time_ex << " minutes." << endl << endl;
    cout << "How many calories would you like to lose in your next sessions? ";
    cin >> descal;
    
    time_ex = descal / ((WALK * weightkg * 3.5) / 200);
    cout << "In order to burn " << fixed << showpoint << setprecision(1) << descal << " calories walking, you will need to allocate "<< fixed << showpoint << setprecision(1) << time_ex << " minutes.\n";
    time_ex = descal / ((BRISK * weightkg * 3.5) / 200);
    cout << "In order to burn " << fixed << showpoint << setprecision(1) << descal << " calories walking briskly, you will need to allocate "<< fixed << showpoint << setprecision(1) << time_ex << " minutes.\n";
    time_ex = descal / ((RUNNING * weightkg * 3.5) / 200);
    cout << "In order to burn " << fixed << showpoint << setprecision(1) << descal << " calories running, you will need to allocate "<< fixed << showpoint << setprecision(1) << time_ex << " minutes.\n";
    
    return 0;
}

/* 
 Welcome to the calorie burning calulator.
 
 Enter your weight in pounds(lbs): 150
 Your weight in Kilograms(kg) is 68.2
 Enter time excersised: 30
 You burned an estimated 71.6 calories walking for 30.0 minutes.
 You burned an estimated 143.2 calories walking briskly for 30.0 minutes.
 You burned an estimated 358.0 calories running for 30.0 minutes.

 How many calories would you like to lose in your next sessions? 100
 In order to burn 100.0 calories walking, you will need to allocate 41.9 minutes.
 In order to burn 100.0 calories walking briskly, you will need to allocate 21.0 minutes.
 In order to burn 100.0 calories running, you will need to allocate 8.4 minutes.
 Program ended with exit code: 0
 */

/*
 Welcome to the calorie burning calulator.

 Enter your weight in pounds(lbs): 280
 Your weight in Kilograms(kg) is 127.3
 Enter time excersised: 60
 You burned an estimated 267.3 calories walking for 60.0 minutes.
 You burned an estimated 534.5 calories walking briskly for 60.0 minutes.
 You burned an estimated 1336.4 calories running for 60.0 minutes.

 How many calories would you like to lose in your next sessions? 20000
 In order to burn 20000.0 calories walking, you will need to allocate 4489.8 minutes.
 In order to burn 20000.0 calories walking briskly, you will need to allocate 2244.9 minutes.
 In order to burn 20000.0 calories running, you will need to allocate 898.0 minutes.
 Program ended with exit code: 0
 */
