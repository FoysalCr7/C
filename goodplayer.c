
#include<string.h>


int main()
{
int n,t,f[20],temp;
char s[50][50],tem[10];
cin>>n>>t;
for(int i=1;i<=n;i++)
{
cin>>s[i]>>f[i];
}
for(int j=0;j<n-1;j++)
{
for(int i=0;i<n-j-1;i++)
if(f[i]>f[i+1])
{
temp=f[i];
f[i]=f[i+1];
f[i+1]=temp;
strcpy(tem,s[i]);
strcpy(s[i],s[i+1]);
strcpy(s[i+1],tem);
}
}
for(int i=0;i<t;i++)
{

cout<<s[i]<<"\n";

}
return 0;
}
