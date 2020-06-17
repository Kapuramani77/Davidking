#include<stdio.h>
int main()
{
int a=0,b=1,c,i;
printf("Enter the number: ");
scanf("%d\t%d\t",&a,&b);
for(i=0;i<=10;i++)
{
c=a+b;
printf("%d\t",c);
a=b;
b=c;
}
return 0;
}
