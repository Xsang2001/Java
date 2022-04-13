#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void Thongke()
{
	char st[30];
	int i;
	int chucai=0,chuso=0,kitukhac=0;
	printf("\n\nDem tong so chu cai,chuso,cac ki tu khac:\n");
	printf("----------------------------------------------\n");
	printf("\nNhap vao mot chuoi:");
	gets(st);
	while(st[i]!='\0')	
	{
		if((st[i]>=97 && st[i]<=12)|| (st[i]>=65 && st[i]<=90))
		{
			chucai++;
		}
		else if(st[i]>=0 && st[i]<=9)
		{
			chuso++;
		}
		else
		{
			kitukhac++;
		}
		i++;
	}
	printf("\nSo luong chu cai la:%d",chucai);
	printf("\nSo luong chu so la:%d",chuso);
	printf("\nSo luong ki tu khac la:%d",kitukhac);
}
int main()
{
    Thongke();
	return 0;
}
