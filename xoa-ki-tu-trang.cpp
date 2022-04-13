#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *ch(char *a)
{
	for (int i = 0;i<strlen(a);i++)
	{
		while (a[i] ==' ' && (a[i + 1] ==' ' || i == 0 || i == strlen(a)-1))
		strcpy((a+i),(a+1+i));
	if((a[i] >= 'a' && a[i] <= 'z' ) && ( i == 0 || a[i - 1] ==' ' ))
	a[i] -= 32;
	}
	return a;
}
char *trichten(char *st)
{
	
	char *ten = (char *)malloc(100 * sizeof(char));
	int i;
	for ( i = strlen(st) - 1 ; st[i] != ' '; i-- )
	ten = st + i  ;
	return ten;
}
char *trichho(char *st)
{
	char *ho = ( char *)malloc(100 * sizeof(char));
	int i;
	for( i = 0;st[i] !=' ';i ++ )
	{
		ho[i] = st[i];
	}
	ho[i]='\0';
	return ho;
}

 	
int main ()
{
	char *a;
	char *ho;
	char *ten;
	a= ho = ten = (char *)malloc(100 * sizeof(char));	
	gets(a);
	a=ch(a);
	printf("%s",a);
	ten = trichho(ten);
	printf("\nHo : %s",ten);
	ho = trichten(ho);
	printf("\nTen : %s",ho);
	return 0;
}

