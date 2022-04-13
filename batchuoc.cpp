#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	string s1=" ";
	string s2=" ";
	int n,i;
	cin>>n>>s;
	if(n%2!=0)
	{
		cout<<"NO";
	}
	else if(n%2==0)
	{
		for(i=0;i<n/2;i++)
		{
			s1+=s;
		}
		for(i=0;i<n/2;i++)
		{
			s2+=s;
		}
		if(s1==s2)
		{
			cout<<"YES";
		}
		else
		{
			cout<<"NO";
		}
	}
	return 0;
}
	
		
	
