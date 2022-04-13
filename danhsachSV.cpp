#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
struct SinhVien
{
	char hoten[30];
	char masv[12];
	float dtb;
};
void nhap(SinhVien a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\nNhap vao ho ten: ");
		gets(a[i].hoten);
		printf("\nNhap vao ma sinh vien: ");
		gets(a[i].masv);
		printf("\nNhap vao diem TB: ");
		scanf("%f",&a[i].dtb);
	}
}
void xuat(SinhVien a[],int n)
{
	printf("\n ho ten \t\t masv \t\t dtb \n ");
	for(int i=0;i<n;i++)
	{
		fflush(stdin);
		printf("%s",a[i].hoten);
		printf("\t%s ",a[i].masv);
		printf("\t %.2f",a[i].dtb);
	}
}
void hoanvi(SinhVien *a,SinhVien *b)
{
	SinhVien tam;
	tam=*a;
	*a=*b;
	*b=tam;
}
void sapxep(SinhVien sv[],int n)
{
	int i,j;
	for(i=0;i<n-1;++i)
	for(j=i+1;j<n;++j)
    	if(sv[i].dtb>sv[j].dtb);
	    hoanvi(&sv[i],&sv[j]);
}
int main()
{
	SinhVien sv[100];
	int n;
	printf("\nNhap so sinh vien :");
	scanf("%d",&n);
	nhap(sv,n);
	sapxep(sv,n);
	xuat(sv,n);
	return 0;
}
	
	
	  
	
		
