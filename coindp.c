#include<stdio.h>
int coinchange(coin[],int a){
int r;
int c=a+1;
table [r][c];
for(int i=1;i<r;i++)
{
table[i][0]=0;
   }
   for(int i=1;i<r;i++){
  for(int j=1;j<c;j++){

  table[i][j]=min(table[i-1][j-1]);
  table[i][j-coin[i]]+1;

  }
   }
   }
   int main(){
   {
    int arr[] = {1, 2, 3,4,5,6};
    int r = sizeof(arr)/sizeof(arr[0]);
    int a = 10;
    printf(" %d ", coinchange(arr, r, a));
    return 0;

}
