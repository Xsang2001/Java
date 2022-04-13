#include<bits/stdc++.h>
using namespace std;
char *strupr(char st[])
{
	for(int i=0;i<strlen(st);i++)
	{
		if(st[i]>=97 && st[i]<=122)
    	{
	 		st[i]=st[i]-32;
	    }
	}
	return st;
}
int main()	
{
	char st[100];
	printf("\nNhap vao mot chuoi: ");
	gets(st);
	strupr(st);
	printf("\nChuoi da duoc in hoa: ");
	puts(st);
	return 0;
}
	
	
		


