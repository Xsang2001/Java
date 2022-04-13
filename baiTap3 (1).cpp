
//BaiTap 3: Trich mot chuoi con ben phai cua chuoi da cho

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

char *right (char *st, int n);
int main()
{
	int n;
	char *st = (char *)malloc(50*sizeof(char));
	if(st == NULL)
	{
		printf("\nLoi cap phat bo nho !!");
		exit(0);
	}
	printf("\nNhap chuoi: ");
	fflush(stdin);
	gets(st);
	printf("\nTinh tu phai sang trai, chuoi con co do dai la: ");
	scanf("%d",&n);
	printf("\nKet Qua: |%s|",right(st,n));
	
}
char *right(char *st, int n)
{
	char *st_temp = (char *)malloc(n*sizeof(char));
	int j = 0;
	int length = strlen(st);
	for(int i = length - n; i < length; i++)
	{
		*(st_temp + j) = *(st+i);
		j++;
	}
	*(st_temp + n) = '\0';
	return st_temp;
}
