#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;

char *biendoi(char s[])
{
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]==',')
		{
			s[i]=' ';
		}
	}
}
int main()
{
	char s[19];
	printf("\nNhap vao mot chuoi: ");
	gets(s);
	biendoi(s);
	printf("\nChuoi sau khi dc bien doi: ");
	puts(s);
}
