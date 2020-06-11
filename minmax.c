#include <stdio.h>

int main(){
int a[100000],b[100000],i,j,n,sum=0,min,max;

scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&a[i]);
sum=sum+a[i];
}
min=sum;
max=a[0];
for(i=0;i<n;i++){
b[i]=sum-a[i];
if(max<b[i]){max=b[i];}
if(min>b[i]){min=b[i];}
}

printf("%d %d",min,max);

return 0;
}
