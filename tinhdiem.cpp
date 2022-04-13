#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	while(getline(cin,s))
	{
		int giatri=0,tongtatca,tong1=0,tong2=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='U')
			{
				giatri=0;
				tong1+=giatri;
			}
			if(s[i]=='S')
			{
				giatri++;
				tong2+=giatri;
			}
		}
		tongtatca=tong1+tong2;
		cout<<tongtatca<<'\n';
	}
}
			
