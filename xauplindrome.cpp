#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;

void  Nhap(char s[])
{
	int n=strlen(s);
	while(gets(s))
	{
		fflush(stdin);
		gets(s);
		i++;
	}
}
/*char KT(char s[])
{
	int i,j;
	int n=strlen(s);
  char *daochuoi;
  daochuoi=(char*)malloc(100 * sizeof(char));
  for(int i=0;i<n-1;i++ )
     for(int j=1;j<n;j++)
	 {
	 	s[i]=s[j];
	}
	daochuoi=strrev(s);
	for(int i=0;i<n-1;i++)
	{
		if(daochuoi[i]==s[i])
		{
			return 1;
		}
		else 
		{
			retuen 0;
		}
	}
*/
int main()
{
	char s[30];
	Nhap(s);
	return 0;
}
		
	   	
			
	
