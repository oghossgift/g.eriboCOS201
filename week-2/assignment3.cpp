#include <iostream>
using namespace std;

int main(){
    double amount;
    double tax;
    double total;

    cout << "Enter Purchase Amount: ";
    cin >> amount ;

    tax = amount * 0.6 ;
    total = amount + tax ;

    cout << "Sales tax: " << tax << "\n";
    cout << "Total Amount with tax: " <<total << "\n";


    return 0;
}