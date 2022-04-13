#include<stdio.h>
#include<conio.h>
#include<string.h>
int nam(char *a)
{
	int d=0;
	for(int i=0;i<strlen(a);i++)
    d=d*10+(a[i]-'0');
    return d;
}
int main()
{
	char a[20];
	scanf("%s",&a);
	printf("%d",nam(a));
}
