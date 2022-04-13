#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct SV{
	char msv[10], hoten[30];
	float d[5],dtb;	
};
int check(SV *a,int b)
{for(int i=0;i<b;i++)
 if(strcmp(a[i].msv,a[b].msv)==0)
  return 1;
  return 0;
}

void nhap(SV *a,int n)
{ for(int i=0;i<n;i++)
 { fflush(stdin);
 	 do{
 	 	printf("nhap msv %d : ",i+1);
 	 	gets(a[i].msv);
	  } while(check(a,i)==1&&printf("MSV da ton tai !!! \n"));
	  
	printf("nhap hoten sv :");
	gets(a[i].hoten);
	float dtb=0;
	for(int j=0;j<5;j++)
	{printf("\n nhap diem mon %d : ",j+1);
	 scanf("%f",&a[i].d[j]);
	 dtb+=a[i].d[j];
	}
	a[i].dtb=dtb/5;
 }
 
}
void SX(SV *a,int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		if(a[i].dtb<a[j].dtb)
		{
			SV t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
}

void cao(SV *a,int n)
{
	printf("\n%-10s%-30s%-4s%-4s%-4s%-4s%-4s%-4s","msv","hoten","d1","d2","d3","d4","d5","dtb");
	for(int i=0;i<n;i++)
	{if(a[i].dtb==a[0].dtb)
	 {
		printf("\n%-10s%-30s",a[i].msv,a[i].hoten);
		for(int j=0;j<5;j++)
		printf("%-2.2f",a[i].d[j]);
	 }
	 else
	 {printf("\ntong cong co %d sv\n",i);
	 break;
	 }}
	
}

void xoa(SV *a,int *n)
{ 

for(int i=0;i<*n;)
 {
 if(a[i].dtb<3)
   {
   for(int j=i;j<*n-1;j++)
   a[j]=a[j+1];
   --(*n);
   }
 else 
 i++;
 }
	
}
void xuat(SV *a,int n)
{
	printf("\n%-10s%-30s%-4s%-4s%-4s%-4s%-4s%-4s","msv","hoten","d1","d2","d3","d4","d5","dtb");
	for(int i=0;i<n;i++)
	{
		printf("\n%-10s%-30s",a[i].msv,a[i].hoten);
		for(int j=0;j<5;j++)
		printf("%-2.2f",a[i].d[j]);
	}
	
}
int main()
{
	int n;
	printf("nhap so luong sv : ");
	scanf("%d",&n);
	SV *a=(SV*)malloc(n*sizeof(SV));
	nhap(a,n);
	SX(a,n);
	printf("DS sau khi SX : \n");
	xuat(a,n);
	printf("DS cao nhat : \n");
	cao(a,n);
	printf("DS sau khi xoa: \n");
	xoa(a,&n);
	xuat(a,n);
}










