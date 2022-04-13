#include <bits/stdc++.h>

using namespace std;

int main()
{   int n,k;
    scanf("%d",&n);
     
	string s;
	getline(cin,s);
    getline(cin,s);
    k=s.length();
    n=n%k;
    
    for(int i=n;i<k;i++)
    cout<<s[i];
    for(int i=0;i<n;i++)
    cout<<s[i];}
