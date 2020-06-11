#include <stdio.h>
#include <conio.h>

void main(){
int i, n, sum=0;
printf("How Many");
scanf("%d", &n);
for(i=1; i<=n; i++)
    sum = sum+1*(i+1);
printf("Sum = %d", sum);
getch();
}
