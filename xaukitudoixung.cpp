#include<stdio.h>
#include<string.h>

char *xoakt(char*s)
{
	int n=strlen(s);
	for(int i=0;i<n;i++)
	{
		if(s[i]==32)
		{
			for(int g=i;g<n;g++)
			    s[g]=s[g+1];
			i--;
			n--;    
		}      
	}
	return s;
}
char kiemtra(char a[])
{
	int n=strlen(a)-1;
	for(int i=0;i<n/2;i++)
	{
		if(a[i]!=a[n-1-i])
		return 0;
	}
	return 1;
}
int main()
{
	char s[81];
    while(gets(s)){
	xoakt(s);
	if(kiemtra(s)==1)
		printf("YES\n");
	else
	    printf("NO\n");
    }
	return 0;
}

