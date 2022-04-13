#include<bits/stdc++.h>
using namespace std;
void dem(char s[])
{
	int na=0,pa=0,so=0,kt=0;
	int n=strlen(s);
	for(int i=0;i<n;i++)
	{
		if(isalpha(s[i]))
		{
			if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u')
				na++;
			else
				pa++;
		}
		else if(s[i]>='0' && s[i]<='9')
			so++;
		else if(s[i]==' ')
			kt++;
	}
	printf("so nguyen am : %d\n",na);
	printf("so phu am : %d\n",pa);
	printf("so chu so : %d\n",so);
	printf("cac ki tu khac : %d\n",kt);
}
int main ()
{
	char s[50];
	gets(s);
	dem(s);
}
