#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s,r;
	int n=s.length();
	while(getline(cin,s))
	{
       r=s;
       reverse(r.begin(),r.end());
       if(s==r)
      {
    	return 'YES';
      }
      else
      {
    	 return 'NO';
      }
    }
    
}
	
	
