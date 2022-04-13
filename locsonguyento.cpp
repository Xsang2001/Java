#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int i,num=0,c=0;
	for(i=0;i<=s.length();i++)
	{
		if(s[i]>='0'&& s[i]<='9')
		{
			num=num*10+s[i]-'0';
		}
		else
	    {
	    	for(int j=2;j<=sqrt(num);j++)
	    	{
	    		if(num!=0)
	    		{
	    			if(num%j==0)
	    			{
	    				c++;
	    			}
	    		}
	    		num=0;
	    		c=0;
	    		
	    	}
	    }
	}
	if(c==0)
	{
		cout << num <<endl;
	}
}




	    		


			    
	
