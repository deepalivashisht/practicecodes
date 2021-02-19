//calender
#include<iostream>
#include<conio.h>
using namespace std;

int yearodddays(int y)
{
                int rem1,quot1,quot2,ly,nly,leapodd,nleapodd,yearodd;
                rem1=(y-1)%400;
                quot1=rem1/4;
                quot2=rem1/100;
                ly=quot1-quot2;
                nly=rem1-ly;
                leapodd=(ly*2)%7;
                nleapodd=(nly*1)%7;
                yearodd=(leapodd+nleapodd)%7;
                return yearodd;
}
int monthodddays(int m,int y,int d)
{
                int monodd=0,monthodd;
                int mon[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
               
                if((y%400)==0||(y%4)==0)
                            mon[2]++;         
                if(d>mon[m])
                 {
                             cout<<"Invalid";
                             exit(0);
                 }
                if(m>((sizeof(mon)/sizeof(mon[0]))-1))
                 {
                             cout<<"Invalid";
                             exit(0);
                 }
                
                for(int i=0;i<m;i++)
                {
                      monodd+=mon[i];
                }
                monthodd=monodd%7;
                return monthodd;
}
int main()
{
                int month,date,year,dateodd,totalodd;
                string day[]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
                printf("\nEnter your Date in (dd/mm/yyyy) format : ");
                scanf("%d/%d/%d", &date,&month,&year);
                dateodd=date%7;
                totalodd=(yearodddays(year)+monthodddays(month,year,date)+dateodd)%7;
                cout<<day[totalodd];
                return 0;
}
