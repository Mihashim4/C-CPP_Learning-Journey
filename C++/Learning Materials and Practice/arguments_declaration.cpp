#include <iostream>
using namespace std;
 int add(int a, int b)
 {
     int c = a + b;
     return c;
 }

 int main()
 {
     int sum;
     sum = add(2, 3);
     cout << "Sum: " << sum << endl;
     return 0;
 }