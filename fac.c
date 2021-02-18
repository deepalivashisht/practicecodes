#include<stdio.h>
int main()
{
     int n,i;
     unsigned long long fac=1;
     printf("enter the number:");
     scanf("%d",&n);
     if(n<0)
        printf("factorial does not exist");
     else
        {
             for(i=2;i<=n;i++)
             fac*=i;
             printf("factorial:%llu",fac);
        }
}	