#include <bits/stdc++.h>
using namespace std;
int main()
{
	while(!cin.eof()
	{
		int dem=0;
		string s;
		getline(cin,s);
		for(int i=0;i<=s.length();i++)
		{
			if(s[i]=='a'&&s[i]=='o'&&s[i]=='y'&&s[i]=='i'&&s[i]=='e'&&s[i]=='u')
			{
				dem++;
			}
			i++;
		}
        cout<<dem;
    }
}
