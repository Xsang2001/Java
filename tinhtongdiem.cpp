#include<stdio.h>
#include<string.h>
using namespace std;

char tinhdiem(char st[])
{
	int tam=0;
	int tamp=0;
	int tong=0;
	int vitri=0;
	for(int i=0;st[i]!='\0';i++)
	{
		if(st[i]=='U')
		{
			i++;
			vitri++;
			tam=0;
			tong+=tam*vitri;		
		}
		if(st[i]=='S')
		{
			i++;
			vitri++;
			tam++;
			tamp+=tam;
		}
	}
	printf("%d",(tong+tamp));
}
int main()
{
	char st[100];
	gets(st);
    tinhdiem(st);
	 
}
