

 #include<stdio.h>
 int add(int a, int b)
 {
     int c = a + b;
     return c;
 }

 int main()
 {
     int sum;
     sum = add(2, 3);
     printf("Sum: %d\n", sum);
     return 0;
 }