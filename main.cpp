#include <iostream>
int main()
{
    float num = 0;
    char letter;
    printf("Enter a numerical grade: ");
    scanf("%f", &num);
    if (num >= 0 && num <= 59)
    {
        letter = 'F';
    }
    else if (num >= 60 && num <= 69)
    {
        letter = 'D';
    }
    else if (num >= 70 && num <= 79)
    {
        letter = 'C';
    }
    else if (num >= 80 && num <= 89)
    {
        letter = 'B';
    }
    else if (num >= 90 && num <= 100)
    {
        letter = 'A';
    }
    else
    {
        printf("numerical grade must be between 0 & 100");
        return 0;
    }
    printf("Letter Grade: %c", letter);
    return 0;
}