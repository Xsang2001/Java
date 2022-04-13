#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

char nhap(char *s[],int n)
{
	for(int i=0;i<n;i++)
	{
		fflush(stdin);
		s[i]=(char *)calloc(10,sizeof(char));
		printf("\n Nhap vao mot chuoi: ");
		gets(s[i]);
	}
}
void *trichho(char hoten[])
{
	char *ho=(char*)calloc(10,sizeof(char));
	int i;
	for(i=0;hoten[i]!=' ';i++)
	{
		ho[i]=hoten[i];
	}
	ho[i]=NULL;
	return ho;
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
void sapxep(char hoten[],int n)
{
	char *tam;
	tam=(char*)calloc(10,sizeof(char));
	for(int i=0;i<n-1;i++)
	  for(int j=i;j<n;j++)
	  {
	  	if(trichho(hoten[i]),trichho(hoten[j])>0)
	  	{
	  	  strcmp(tam,hoten[i]);
	  	  strcmp(hoten[i],hoten[j]);
	  	  strcmp(hoten[j],tam);
	  	}
	}
}
int hienthi(char *s[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\n %d.%s",i+1,s[i]);
	}
}
int main()
{
	int n;
	char *s[50];
	printf("\n Nhap vao so chuoi: ");
	scanf("%d",&n);
	trichho(hoten);
	sapxep(hoten,n);
	printf("\n Chuoi sau khi duoc sap xep theo ho la: ");
	hienthi(s,n);
	return 0;
}
	


