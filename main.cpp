#include <iostream>
//21:11
//12:00
int main()
{
    int hour;
    int min;
    printf("Enter a 24-hour time (hh:mm): ");
    scanf("%d:%d", &hour, &min);
    if (hour <= 12)
    {
        printf("The current time is: %02d:%02d", hour, min);
        return 0;
    }
    else if (hour >= 12 && hour <= 23)
    {
        printf("The current time is: %02d:%02d PM", abs(12 - hour), min);
    }
    else
    {
        printf("The current time is: %02d:%02d AM", abs(hour - 12), min);
    }
    return 0;
}