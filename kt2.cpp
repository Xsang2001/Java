#include<stdio.h>
#include<conio.h>
#include<string.h>
int kiemtra(char *p,int i)
{
     int kt=0;
     for(int j=0;j<=i;j++)
     if(p[i]==p[j]) kt++;  
     if(kt>1)return 0;
     return 1;  
}
int dem(char *p,int i)
{
   int dem=0;
   for (int j=i;j<strlen(p);j++)
   {
       if(p[i]==p[j]) dem++;
   }
   return dem;
}
int main ()
{
    char st[255];
    int tmp=0;
    printf("Nhap vao chuoi:");
    gets(st);
    for(int i=0;i<strlen(st);i++)
    {
       if((st[i]!=' ')&&(kiemtra(st,i))==1)
       printf("ki tu %c co %d lan xuat hien\n",st[i],dem(st,i));
       if(st[i]==' ') tmp++;
    }
    printf("ki tu space co %d lan xuat hien",tmp);
getch();
}
