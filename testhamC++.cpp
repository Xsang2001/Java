#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	getline(cin,s);
	s.push_back('s');
	cout<<"chuoi sau khi dc them la:"<<s<<endl;
	string s1=s.substr(2,8);
	cout<<"chuoi con la:"<<s1<<endl;
	strrev(s1);
	cout<<"chuoi sau khi dao nguoc la:"<<s1<<endl;	
	return 0;
}
