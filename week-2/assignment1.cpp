#include <iostream>
 using namespace std;

 int main(){
    double number1;
    double number2;

    cout << "Enter first number: ";
    cin >> number1;

    cout << "Enter second number:  ";
    cin >> number2;

    cout << "\nResults:\n";
    cout << "Sum is : " << number1 + number2 <<"\n";
    cout << "Difference is : " << number1 - number2 <<"\n";
    cout << "Product is : " << number1 * number2 <<"\n";

    return 0; 
 }