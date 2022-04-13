#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main()
{
	char s[30];
	char *dc;
	for(int i=0;i<strlen(s);i++)
	{
		fflush(stdin);
	    gets(s);
	}
	dc=(char*)malloc(100 * sizeof(char));
	dc=strrev(s);
	puts(dc);
	return 0;
}
