#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int Length(char s[])
{
    int i = 0;
    while (s[i] != NULL)
        ++i;
    return i - 1;
}
char *DaoNguoc(char *st)
{
    int length = Length(st);
    char *temp = new char[length + 1];
    for (int i = 0; i < length; i++)
    {
        temp[i] = st[length - 1 - i];
    }
    temp[length] = NULL; 
    return temp;
}
 
void InDaoNguoc(char *st){
    int length = Length(st);
    for (int i = length - 1; i >= 0; i--)
    {
        printf("%c", *st);
    }
}
 
int main()
{
    char s[100];
    printf("\nNhap chuoi: ");
    fgets(s, 100, stdin); 
    char *kq = DaoNguoc(s);
    InDaoNguoc(s);
    printf("\nChuoi sau khi dao nguoc la: %s", kq);
    return 0;
}
