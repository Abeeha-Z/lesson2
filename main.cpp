#include <iostream>

// 869148426000
// expected output: 8

int main()
{
    char EAN[12];
    int sum1 = 0;
    int sum2 = 0;
    printf("Enter the first 12 digits of an EAN: ");
    scanf("%12s", EAN);
    for (int i = 1; i < 12; i+=2)
    {
        int digit = EAN[i] - '0';
        sum1 = sum1 + digit;
    }
    for (int i = 0; i < 12; i+=2)
    {
        int digit = EAN[i] - '0';
        sum2 = sum2 + digit;
    }
    int checkdig = 9 - ((((sum1 * 3) + sum2) - 1) % 10);
    printf("Check Digit: %d\n", checkdig );
    return 0;
}