#include <stdio.h>
int main() {
    int choice, n, temp, digit, sum, reverse;
    printf("1 Sum  2 Reverse  3 Palindrome\n");
    scanf("%d%d", &choice, &n);
    temp = n;
    sum = 0;
    reverse = 0;
    while (temp > 0) {
        digit = temp % 10;
        sum = sum + digit;
        reverse = reverse * 10 + digit;
        temp = temp / 10;
    }
    if (choice == 1)
        printf("Sum = %d", sum);
    else if (choice == 2)
        printf("Reverse = %d", reverse);
    else if (choice == 3 && reverse == n)
        printf("Palindrome");
    else if (choice == 3)
        printf("Not palindrome");
    else
        printf("Invalid choice");
    return 0;
}