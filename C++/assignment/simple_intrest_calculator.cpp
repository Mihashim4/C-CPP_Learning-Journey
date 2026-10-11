#include <iostream>
using namespace std ; 
int main()
{
    float principal, rate, time, simple_interest;
    cout << "Simple Interest Calculator\n";
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter rate of interest: ";
    cin >> rate;
    cout << "Enter time period (in years): ";
    cin >> time;
    simple_interest = (principal * rate * time) / 100;
    cout << "Simple Interest: " << simple_interest << endl;
    return 0;
}