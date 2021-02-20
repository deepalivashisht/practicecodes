//celsius-fahrenheit converter
#include<iostream>
using namespace std;
int main()
{
             float c,fahr,celsius;
             cout<<"Press 1 for the conversion from fahrenheit to celsius and 0 for celsius to fahrenheit"<<endl;
             cin>>c;
             if(c==1)
             {
                     cout<<"Enter faherneit value:";
                     cin>>fahr;
                     celsius=5*(fahr-32)/9;
                     cout<<"\nCelsius="<<celsius;
             }
             else if(c==0)
             {
                     cout<<"Enter celsius value:";
                     cin>>celsius;
                     fahr=(9*celsius)/5+32;
                     cout<<"\nFahrenheit="<<fahr;
             }
             else
                     cout<<"Invalid Number";
return 0;
}
