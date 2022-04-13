#include <bits/stdc++.h>
using namespace std;

int main()
 {
    int dem=0;
	char r;
	string s;
	getline(cin,s);
	r=s[0];
	for(int i=0;i<s.length();i++)
		if(r==s[i]) dem++;
		else{
			if(dem>1) cout<<r<<dem;
			else cout<<r;
			r=s[i];
			dem=1;
		}
		if(dem>1) cout<<r<<dem;
		else cout<<r;
	
	return 0;
}
    
    
   
  
    	

	
