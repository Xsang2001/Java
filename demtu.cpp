#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

void nhap(char *s[],int n)
{
	for(int i=0;i<n;i++)
	{
		fflush(stdin);
		s[i]=(char *)calloc(10,sizeof(char));
		printf("\nNhap vao mot chuoi: ");
		gets(s[i]);
	}
}
int strcmp(char *p,char *t)
{
	int i;
	for(i=0;p[i]=t[i];i++)
	{
	   if(p[i]==' ')
	   return 0;
	   return p[i]-t[i];
	}
}
void sapxep(char *s[],int n)
{
	char *tam;
	tam=(char*)calloc(10,sizeof(char));
	for(int i=0;i<n-1;i++)
	  for(int j=i+1;j<n;j++)
	  {
	  	if(strcmp(s[i],s[j])>0)
	  	{
	  		strcpy(tam,s[i]);
	  		strcpy(s[i],s[j]);
	  		strcpy(s[j],tam);
	  	}
	}
}
void hienthi(char *s[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\n %2d. %s",i+1,s[i]);
	}
}
int main()
{
	int n;
	char *s[10];
	printf("\n Nhap so chuoi: ");
	scanf("%d",&n);
	nhap(s,n);
	sapxep(s,n);
	printf("\n Danh sach cac chuoi sau khi duoc sap xep la: ");
	hienthi(s,n);
	return 0;
}
	
		
	   
	
