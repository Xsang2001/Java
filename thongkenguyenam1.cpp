#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
	char s[30];
	int i,dem=0;
	int n=strlen(s);
	gets(s);
	while(s[i]!='\0')
	{
		 for(i=0;i<n;i++)
	{
	  if((s[i]=='a')||(s[i]=='y')||(s[i]=='i')||(s[i]=='e')||(s[i]=='u'))	
	  {
	     dem++;
	  }
	  i++;
	  }
	}
	printf("%d",dem);
	return 0;
}
	
