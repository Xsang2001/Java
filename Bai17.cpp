#include<bits/stdc++.h>
using namespace std;
int solanxh(char *st,char ch)
{
	int c=0;
	int n=strlen(st);
	for(int i=0;i<n;i++)
	{
		if(st[i]==ch)
		{
			c++;
		}
	}
	return c;
}
int main ()
{
	char *st;
	char ch;
	st=(char*)calloc(80,sizeof(char));
	gets(st);
	scanf("%c",&ch);
	if(st==NULL)
	{
		printf("k du bo nho cap phat \n");
		exit(0);
	}
	printf("%d",solanxh(st,ch));
}
