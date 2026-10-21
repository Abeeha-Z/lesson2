#include <iostream>
int main()
{
    float num = 0;
    char letter;
    printf("Enter a numerical grade: ");
    scanf("%f", &num);
    if (num < 0 || num > 100)
    {
        printf("numerical grade must be between 0 & 100");
        return 1;
    }
    switch ((int)num / 10)
    {
    case 10:
        case 9:
        letter = 'A';
        break;
    case 8:
        letter = 'B';
        break;
    case 7:
        letter = 'C';
        break;
    case 6:
        letter = 'D';
        break;
    default:
        letter = 'F';
        break;
    }

    printf("Letter Grade: %c\n", letter);
    return 0;
}