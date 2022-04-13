#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define PI 3.14
struct HinhTron
{
	float x,y,r;
};
void Nhap(HinhTron a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\nNhap x :");
		scanf("%f",&a[i].x);
		printf("Nhap y :");
		scanf("%f",&a[i].y);
		printf("Nhap r :");
		scanf("%f",&a[i].r);
	}
}
void in(HinhTron a[],int n)
{
	printf("\nToa do, ban kinh , chu vi cua nhung duong tron cat truc hoanh tai hai 2 diem phan biet la :\n");
	for(int i=0;i<n;i++)
	{
		if(abs(a[i].r)> abs(a[i].y))
		{
			printf("\ntoa do x :%.2f\n",a[i].x);
			printf("toa do y :%.2f\n",a[i].y);
			printf("ban kinh r :%.2f\n",a[i].r);
			printf("Chu vi :%.2f\n",2*a[i].r*PI);	
		}
	}
	
}
void ghifile(HinhTron a[],int n)
{
	FILE *f;
	f=fopen("C:\\Users\\DELL\\OneDrive\\Documents\\DevC++\\NNLTBC\\TIEPXUC.DAT","wb+");
	for(int i=0;i<n;i++)
	{
		if(a[i].x == a[i].r)
		{
			fwrite(&a[i].x,sizeof(struct HinhTron),1,f);
			fwrite(&a[i].y,sizeof(struct HinhTron),1,f);
			fwrite(&a[i].r,sizeof(struct HinhTron),1,f);
		}
	}
	fclose(f);
}
int main ()
{
	HinhTron a[50];
	int n;
	scanf("%d",&n);
	Nhap(a,n);
	in(a,n);
	ghifile(a,n);
	
}
