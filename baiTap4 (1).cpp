
//BaiTap 4: Ham trich mot chuoi con tuy y tu chuoi da cho

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *trich(char *st, int m, int n);
int main()
{
	int n, m;
	char *st = (char*)malloc(50*sizeof(char));
	if(st==NULL)
	{
		printf("\nLoi cap phat bo nho !!");
		exit(0);
	}
	printf("\nNhap chuoi: ");
	fflush(stdin);
	gets(st);
	printf("\nChieu dai cua chuoi con can trich la: ");
	fflush(stdin);
	scanf("%d",&n);
	printf("\nTinh tu vi tri thu 0. Chuoi con duoc trich tu vi tri thu: ");
	fflush(stdin);
	scanf("%d",&m);
	printf("\nKet Qua: |%s|",trich(st,m,n));
	free(st);
	return 0;
}
char *trich(char *st, int m, int n)
{
	int j = 0;
	char *st_trich = (char *)malloc(n*sizeof(char));
	for (int i=m; i<m+n; i++)
	{
		*(st_trich + j) = *(st+i);
		j++;
	}
	*(st_trich+n)= '\0';
	return st_trich;	
}
