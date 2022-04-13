#include<bits/stdc++.h>
using namespace std;
void thongke(char st[])
{
	int kt=0,cs=0,ktk=0;
	int n=strlen(st);
	for(int i=0;i<=n;i++)
	{
		if(st[i]=='a' || st[i]=='z')
		{
			kt++;
		}
		else if(st[i]>=0 && st[i]<=9)
		{
		    cs++;
		}
		else if(st[i]==' ')	
		{
			ktk++;
		}
	}
     	printf("so kt co trong chuoi la : %d\n",kt);
	    printf("so cs co trong chuoi la : %d\n",cs);
	    printf("so ktk co trong chuoi la : %d\n",ktk);
}
int main()
{
	char st[30];
	gets(st);
	thongke(st);
}
	




