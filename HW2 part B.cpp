//
//  main.cpp
//  Classwork 3a
//
//  Created by Aiman Moufid on 9/18/24.
//

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main()
{
    int x, y, z, counter_customer = 0 , counter_x = 0, counter_y = 0, counter_z = 0;
    double total;
    string delivery;
    const double SODA = 2.50, SMALL = 10.00, LARGE = 15.00;
    
    
    do {
        counter_customer = counter_customer + 1;
        cout << "**Menu**" << endl << "Soda\t$" << fixed << showpoint << setprecision(2)<< SODA << endl
        << "Small Pie\t$"<< fixed << showpoint << setprecision(2)<< SMALL << endl
        << "Large Pie\t$"<< fixed << showpoint << setprecision(2)<< LARGE << endl
        << "Orders over $15.00 will receive a free order of garlic knots!! \n \n"<< endl
        << "How many sodas will you be ordering customer #" << counter_customer<< " ?" << endl;
        cin >> x;
        if (x != -1)
        {
            counter_x = counter_x + x;
            cout << "\nHow many small pies will you be ordering?" << endl;
            cin >> y;
            counter_y = counter_y + y;
            cout << "\nHow many large pies will you be ordering?" << endl;
            cin >> z;
            counter_z = counter_z + z;
            total = (x * SODA) + (y * SMALL) + (z * LARGE);
            cout << "\n \nYou have ordered " << x << " cans of soda, " << y << " small pies and " << z << " large pies\n\n"
            <<"Your subtotal is $" << fixed << showpoint << setprecision(2)<< total << " + tax. "
            <<"\n\nDelivery orders under $12.50 will be charged $1"<< endl;
            cout << "Is this a delivery order?"<< endl << "Enter yes or no: ";
            cin >> delivery;
            if (delivery == "yes" && total > 12.50)
                cout << "You will not be charged a delivery fee. \n";
            else if (delivery == "yes" && total < 12.50)
                cout << "You will be charged the extra dollar for your delivery. \n ";
            else if (delivery == "no" || delivery == "No" || delivery == "NO" || delivery == "nO")
                cout << "You will not be charged a delivery fee";
            else
                cout << "Run that back\n";
            
            if (total >= 12.50 && delivery == "yes")
                total = total + 1;
            else
                total = total;
            total = total * 1.08875;
            if (total >= 15.00)
                cout << "Your total is $"<< fixed << showpoint << setprecision(2) << total << "\nYou have also received free garlic knots with your order, have a nice day! \n";
            else
                cout << "Your total is $"<< fixed << showpoint << setprecision(2) << total << "\nYou did not get free garlic knots :( \n";
        }
        else
            x = -1;
    } while (x != -1);
    cout <<  "Total Soda sold: "<< counter_x << endl << "Total Earned from Soda: $" << fixed << showpoint << setprecision(2) << counter_x * SODA << endl
    << "Total Small Pies sold: " << counter_y << endl << "Total Earned from Small Pies: $"<< fixed << showpoint << setprecision(2) << counter_y * SMALL << endl
    << "Total Large Pies sold: " << counter_z << endl << "Total Earned from Large Pies: $" << fixed << showpoint << setprecision(2) << counter_z * LARGE << endl
    << "Total Customers today: " << counter_customer << endl 
    << "Total Earnings: $" << fixed << showpoint << setprecision(2) << (counter_x * SODA) + (counter_y * SMALL ) + (counter_z * LARGE);
    
    return 0;
    
}

