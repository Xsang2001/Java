#include <iostream>
#include<string.h>
using namespace std;
int main() 
{
	string s;
	int open = 0,  close = 0 ;
	cout<<"Nhap xau :";
	getline(cin,s);
	int n = s.length();
	for(int i = 0 ; i < n ; i++)
	{
		if( s[i] == '(')
		{
			open++;
		}
		if(s[i] == ')')
		{
			++close;
			if(close >  open)
			{
				cout<<"Xau khong hop le !";
				return 0;
			}
		}
	}
	if(open == close)
	{
		cout<<"Xau hop le !";
	}
	else if(open == 0 && close == 0)
	{
		cout<<"Xau hop le !";
	}
	else
	{
		cout<<"Xau k hop le !";
	}	
}
