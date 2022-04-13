#include <stdio.h>
#include <string.h>


int DemTu( char s[])
{
	int Dem=(s[0]!=' ');
		for(int i=0;i<strlen(s)-1;i++)
		{
			if(s[i]==' '&&s[i+1]!=' ')
			{
				Dem++;
			}
		}
		return Dem;
}

int main()
{
	char s[200];
	int dem;
	int n;
	printf("\nNhap so chuoi:");
	scanf("%d\n",&n);
	for(int i=0;i<n;i++)
	{
		gets(s);
		dem=DemTu(s);
		printf("%d\n",dem);	
	}
	return 0;
	
}

