#include<stdio.h>
#include<conio.h>
#include<string.h>
int kiemtra(char st[],int i)
   {
   char t=st[i];
   int j;
   for(j=0;j<i;j++)
       {
       if(t==st[j])
           return 0;
       else
           return 1;
      }
   }
int dem(char st[],int i)
   {
   char t=st[i];
   int dem=0;
   int j;
   for(j=0;j<strlen(st);j++)
       {
       if(t==st[j])
           dem=dem+1;
       }
   return dem;
   }
int main()
{
char st[255];
printf("Nhap vao chuoi:");
gets(st);
printf("Ki tu %c: xuat hien %d\n",st[0],dem(st,0));
int i;
for(i=1;i<strlen(st);i++)
    {
    if(kiemtra(st,i))
      printf("Ki tu %c xuat hien:%d\n",st[i],dem(st,i));
    }
getch();
} 
