#include <iostream>
using namespace std;
int main()
{
   int age;
   char gender;
   cout<<"enter age\n";
   cin>>age;
   cout<<"press M for male"<<endl<<"press F for female\n";
   cin>>gender;
   if(gender=='M')
     {
        cout<<"male ";
        if (age<18)
           cout<<"kid";
        else 
           cout<<"Adult";
     }
   else if(gender=='F')
    {
        cout<<"female ";
        if (age<18)
          cout<<"kid";
        else 
          cout<<"Adult";
    } 
   else
        cout<<"invalid gender";

   return 0;
}
