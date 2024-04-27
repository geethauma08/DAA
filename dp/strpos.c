#include<stdio.h>
int main()
{
char str[100],ch;
int i,f;
printf("enter the string");
gets(str);
printf("enter the character");
scanf("%c",&ch);
for(i=0;str[i]!='\0';i++)
{
if(str[i]==ch)
{
f=1;
break;
}
}
if(f==1)
{
printf("index of %c is %d",ch,i);
}
else
{
printf("%d",-1);
}
return 0;
}
