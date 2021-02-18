#include<stdio.h>
int main(void)
{
int i,j;
scanf("%d%d",&i,&j);
printf("i:%d\tj:%d\n",i,j);
___asm___  ("mov1 %%eax, %%ecx;"
          "mov1 %%ebx, %%eax;"
          "mov1 %%ecx, %%ebx;"
        :"=a"(i),"=b"(j) :"a"(i),"b"(j));
printf("i:%d\tj:%d",i,j);
return 0;
}