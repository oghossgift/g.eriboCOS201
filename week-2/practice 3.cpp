#include <iostream>
using namespace std;


int main (){
    double Fahrenheit;
    double Celcius;
    cout << "Enter Temperature in Fahrenheit: ";
    cin>> Fahrenheit;
    
    Celcius = 5.0/9.0 *(Fahrenheit - 32);
    cout << "The temperature in Celcius is: " <<Celcius;

    return 0;
}
    
    