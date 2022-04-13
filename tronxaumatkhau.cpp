#include <bits/stdc++.h>
using namespace std;

int main()
{
	string o,e;
	getline(cin,o);
	getline(cin,e);
	size_t n=max(o.length(),e.length());
	for(size_t i=0;1<n;i++)
	{
		if(i<o.length()) cout<<o[i];
		if(i<e.length()) cout<<e[i];
	}
	return 0;
}
