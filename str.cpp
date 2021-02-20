//Remove characters from the first string which are present in second string.
#include<iostream>
using namespace std;
void s1erase(string a,string b)
{
	int i,j,flag;
     for(i=0;i<=a.length();i++)
	 {
		 flag=1;
		 for(j=0;j<=b.length();j++)
		 {
		     if(a[i]==b[j])
		     {
			     flag=0;
		         break;
		     }
		 }
		 if(flag==1)
	     cout<<a[i];
	 }
}
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	
	s1erase(s1,s2);;
	
	return 0;
}
	