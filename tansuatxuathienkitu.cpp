#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int dadem,dem;
	getline(cin,s);
	for(int i=0;i<s.length();i++)
	{
		dadem=0;
		for(int j=0;j<i;j++)
		{
			if(s[i]==s[j])
			{
				dadem=1;
				break;
		 	}
	    }
	    if(dadem==0)
	    {
	    	dem=0;
	    	for(int k=i;k<s.length();k++)
	    	{
	    		if(s[i]==s[k])
	    		dem++;
			}
		}
		cout << s[i]<< setw(4) << right << dem <<'\n';
    }
}
	
