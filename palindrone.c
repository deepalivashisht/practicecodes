#include<stdio.h>
int main()
{
int n, num, rev=0, rem;
printf("enter the number:");
scanf("%d",&n);
num=n;
while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n/=10;
}
(num==rev)?printf("palindrone"):printf("not palindrone");
return 0;
}