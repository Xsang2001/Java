#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	while(getline(cin,s)){
	s+=' ';
	int dem=0,max=0,i;
	for(i=0;i<s.length();i++)
	{
		if(isalpha(s[i]) ||s[i]=='\'' && isalpha(s[i-1]) && isalpha(s[i+1]))
		{
			dem++;
		}
		if(s[i]==' ')
		{
			if(max<dem)
			{
				max=dem;
			}
			dem=0;
		}
	}
	cout << max <<'\n';
}
}

			

