
//BaiTap 5: Ham so sanh 2 chuoi da cho

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int strcmp(char *s, char *t);
int main()
{
	char *s = (char *)malloc(50*sizeof(char));
	char *t = (char *)malloc(50*sizeof(char));
	if(s == NULL || t == NULL)
	{
		printf("\nLoi cap phat bo nho !!");
		exit(0);
	}
	printf("\nNhap chuoi 1: ");
	fflush(stdin);
	gets(s);
	printf("\nNhap chuoi 2: ");
	fflush(stdin);
	gets(t);		
	if(strcmp(s,t) > 0)
		printf("\nKQ: Chuoi 1 lon hon chuoi 2 !");
	else if(strcmp(s,t) < 0)
		printf("\nKQ: Chuoi 2 lon hon chuoi 1 !");
	else 
		printf("\nKQ: Hai chuoi bang nhau !");
	free(s); free(t);
	return 0;
}
int strcmp(char *s, char *t)
{
	int length_s = strlen(s), length_t = strlen(t), n = 0;
	n = length_s > length_t ? length_s : length_t;
    for(int i = 0; i < n; i++)
		if(*(s+i)>*(t+i))
			return 1;
		else if (*(s+i)<*(t+i))
			return -1;
    return 0;
}

