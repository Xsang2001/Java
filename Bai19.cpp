#include<bits/stdc++.h>
using namespace std;
void ktmax(char s[])
{
	int max=0;
	char a[255];
	for(int i=0;i<strlen(a);i++)
	{
		a[i]=0;
	}
	int n=strlen(s);
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(s[i]==s[j])
			{
				a[i]++;
			}
		}
		if(a[i]>max)
			max=a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(max==a[i])
		printf("%c",s[i]);
	}
}
int main ()
{
	char s[100];
	gets(s);
	ktmax(s);
}
