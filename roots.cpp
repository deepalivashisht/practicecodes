//Roots of quadratic equations
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
double a,b,c,discriminant,root1,root2;
cout<<"Enter the value of a,b and c";
cin>>a>>b>>c;
discriminant=(b*b)-(4*a*c);
cout<<"Discriminant="<<discriminant<<endl;
if(discriminant==0)
cout<<"Quadratic equation has equal and real roots."<<endl;
else if(discriminant>0)
cout<<"Quadratic equation has unequal and real roots."<<endl;
else 
cout<<"Quadratic equation has imaginary roots."<<endl;
root1=(-b+pow(discriminant,1/2))/(2*a);
root2=(-b-pow(discriminant,1/2))/(2*a);
cout<<"Roots of Quadratic equation are:"<<endl<<root1<<endl<<root2;
return 0;
}

