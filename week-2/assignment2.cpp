#include <iostream>
using namespace std;

int main(){
    int temp;
    int a;
    cout << "Enter first integer: " ;
    cin >> a;
    int b;
    cout << "Enter second integer: " ;
    cin >> b ;
    
    cout<< "\nBefore swapping:\n";
    cout << "a =  " << a <<"\n";
    cout << "b =  " << b << "\n";


    // swapping the variable

    temp = a;
    a = b;
    b = temp;

    cout<< "\nAfter swapping:\n";
    cout << "a =  " << a <<"\n";
    cout << "b =  " << b << "\n";

    return 0;

}