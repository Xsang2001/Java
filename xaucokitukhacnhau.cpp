#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

char kiemtra(char s[])
{
	int n=strlen(s);
	int dem=0;
	for(int i=0;i<n-1;i++)
	  for(int j=i;j<n;j++)
	{
		if(s[i]==s[j])
		{
		  dem=1;
		}
	}
}
int main()
{
	char s[30];
	printf("\nNhap vao mot xau ki tu: ");
	gets(s);
    kiemtra(s);
    if(dem==1)
    {
    	printf("NO\n");
    }
    else
    {
    	printf("YES\n");
    }
    return 0;
}
		
