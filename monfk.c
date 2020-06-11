#include <stdio.h>

int main()
{
int N[1000],n,i,sum;
scanf("%d",&n);
for(i=0; i<n; i++)
{
scanf("%d",&N[i]);
}
sum=0;
for(i=0; i<n; i++)
{
if(N[i]%2 == 0)
{
printf("%d ",N[i]);
sum += N[i];
}
}
printf("%d ",sum);
sum=0;
for(i=0; i<n; i++)
{
if(N[i]%2 != 0)
{
printf("%d ",N[i]);
sum += N[i];
}
}
printf("%d",sum);
return 0;
}
