#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int i,num1=0,num2=0,sotien,giatridau,giatrisau,tong=0;
	for(i=0;i<=s.length();i++)
	{
		if(s[i]>='0' && s[i]<='9')
		{
			num1=num1*10+s[i]-'0';
		}
		else
		{
			if(num1!=0)
			{
				giatrisau=num1;
				num1=0;
			}
		}
		if(s[i]>='0' && s[i]<='9')
		{
			num2=num2*10+s[i]-'0';
		}
		else
		{
			if(num2!=0)
			{
				tong+=num2;
				num2=0;
				
			}
			
		}

	}
	giatridau=tong-giatrisau;
	sotien=abs(giatrisau-giatridau)*1200;
	cout<< sotien <<'\n';
}
