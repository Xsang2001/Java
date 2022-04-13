#include<bits/stdc++.h>
using namespace std;
char *firstmax(char s[])
{
	int n=strlen(s);
	char *b=(char*)calloc(1400,sizeof(char));	
    char *c=(char*)calloc(1400,sizeof(char));	
    int j = 0, max = 0;
    for(int i = 0; i <= n; i++){
        if(s[i] != ' ' && s[i] != '\0')
		{
	    b[j++] = s[i];
		}
		else
		{
            b[j] = '\0';
            if(strlen(b) > max)
			{
                strcpy(c, b);	
                max = strlen(b);	
            }
            j = 0;
        }
    }
    return c;
}
char *firstmin(char s[])
{
	char *d=(char*)calloc(1400,sizeof(char));	
    char *e=(char*)calloc(1400,sizeof(char));	
    int j = 0,min=strlen(s);
    int n=strlen(s);
    for(int i=0;i<=n;i++)
    {
    	if(s[i]!=' ' && s[i]!='\0')
    	{
    		d[j++]=s[i];
		}
		else
		{
			d[j]='\0';
			if(strlen(d)<min)
			{
				strcpy(e,d);
				min=strlen(d);
			}
			j=0;
		}
	}
	return e;
}
int main ()
{
	char s[50];
	gets(s);
	puts(firstmax(s));
	puts(firstmin(s));
}
