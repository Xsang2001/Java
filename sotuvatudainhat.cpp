#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	while(getline(cin,s)){ s+=' ';
	int sotu=0,max=0,dem=0,i;
	for(i=0;i<s.length();i++)
	{
		if(isalpha(s[i]))
		{
			dem++;
		}
		else
		{
			if(max<dem)
			{
				max=dem;
			}
			dem=0;
			if(isalpha(s[i-1]))
			{
				sotu++;
			}
		}
	}
	cout << max <<endl;
	cout << sotu <<endl;
	}
	return 0;
}
	
