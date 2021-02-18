#include<stdio.h>
int main()
{
int a,b,c,sum,avg;
printf("enter three numbers:");
scanf("%d\n %d\n %d",&a,&b,&c);
sum=a+b+c;
printf("sum: %d",sum);
avg=sum/3;
printf("\naverage : %d", avg);
return 0;
}