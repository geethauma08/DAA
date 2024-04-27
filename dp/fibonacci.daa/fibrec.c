#include<stdio.h>
int fib(int);
int main()
{
int i,n,a[100];
printf("enter the value");
scanf("%d",&n);
int f=fib(n);
for(i=0;i<n;i++)
{
printf("%d",fib(i));
}
}
int fib(int n)
{
if(n==0 || n==1)
{
return 0;
}
else
{
return fib(n-1)+fib(n-2);
}
}
