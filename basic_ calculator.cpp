//basic calculator
#include<iostream>
using namespace std;
int main()
{
          char operatorr;
          double a,b;
          cout<<"Enter the operator (+,-,*,/):";
          cin>>operatorr;
          cout<<"\nEnter two operands";
          cin>>a>>b;
          switch (operatorr)
          {
                 case '+' : cout<<"Addition:"<<a+b;
                            break;
                 case '-' : cout<<"Subtraction:"<<a-b;
                            break;
                 case '*' : cout<<"Multiplication:"<<a*b;
                            break;
                 case '/' : b==0?cout<<"Division by 0 is not allowed":cout<<"Division:"<<a/b;
                            break;
                 default:   cout<<"Invalid";
          }
          return 0;
}
 
