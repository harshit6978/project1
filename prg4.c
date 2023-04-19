#include<stdio.h>
    int main()
    {
        char day;
        printf("enter a day:");
        scanf("%c",&day);
        
        switch(day)
        {
            case 'm':
                printf("Monday");
                break;
            case 't':
                printf("Tuesday");
                break;
            case 'w':
                printf("Wednesday");
                break;
            case 'th':
                printf("Thursday");
                break;
            case 'f':
                printf("Friday");
                break;
            case 'sa':
                printf("Saturday");
                break;
            case 's':
                printf("Sunday");
                break;
            default :
                printf("Invalid Input");
                break;
        }
        return 0;
    }
