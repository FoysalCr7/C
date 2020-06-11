#include <stdio.h>
int main()
{
     int i;
     printf("enter the number: ");
     scanf("%d", &i);
     switch (i)
     {
        case 1:
           printf("add ");
break;
        case 2:
           printf("delete ");
break;
        case 3:
           printf("sell ");
break;
        default:
           printf("exit ");
     }
    return 0;
}
