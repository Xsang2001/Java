#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
struct sv
{
	char masv[30],hoten[30],gioitinh[30];
	float diem1,diem2,diem3,diemtb;
};
int checkmasv(sv a[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(!(strcmp(a[n].masv,a[i].masv)))
			return 1;
	}
	return 0;
}
void nhap(sv a[],int n)
{
	for(int i=0;i<n;i++)
	{
		do
		{
			printf("nhap vao ma sinh vien %d: ",i+1);
			fflush(stdin);
			gets(a[i].masv);
			if(checkmasv(a,i)==1)
			{
				printf("\nma sinh vien khong hop le! Vui long nhap lai\n");
				
			}
			else
				break;
		}while(1);
		printf("\nnhap vao ho ten sinh vien %d: ",i+1);
		fflush(stdin);
		gets(a[i].hoten);
		printf("\nnhap vao gioi tinh sinh vien %d: ",i+1);
		fflush(stdin);
		gets(a[i].gioitinh);
		printf("\nnhap diem cho 4 mon thi cua sinh vien %d: ",i+1);
		scanf("%f %f %f",&a[i].diem1,&a[i].diem2,&a[i].diem3);
		a[i].diemtb=(a[i].diem1+a[i].diem2+a[i].diem3)/3;
	}
}
char *trichten(char a[])
{
	int i = strlen(a) - 1;
	while(a[i] != ' ' && i > -1)	i --;
	char ten[30];
	int k = 0;
	for(int j = i + 1; j < strlen(a); j ++, k ++)
		ten[k] = a[j];
	ten[k] = '\0';
	printf("%s\n", ten);
	return ten;
}
void swap(sv *a, sv *b){
	sv tam = *a;
	*a = *b;
	*b = tam;
}
int strcmp(char a[], char b[]){
	int i = 0;
	for(i; a[i] != '\0' && b[i] != '\0'; i ++);
	return a[i] - b[i];
}
void xuat(sv a[], int n){
	for(int i = 0; i < n; i ++){
		printf("Ma sinh vien: %s\n", a[i].masv);
		printf("Ho va ten: %s\n", a[i].hoten);
		printf("Gioi tinh: %s", a[i].gioitinh);
		printf("Diem 3 mon: %f %f %f\n", a[i].diem1, a[i].diem2, a[i].diem3);
	}
}
void gan(sv *a, sv *b){
	*a = *b;
}
void xoa(sv a[], int *n){
	for(int i = 0; i < *n; )
		if(a[i].diemtb < 5){
			for(int j = i + 1; j < *n; j ++)
				gan(&a[i], &a[j]);
			(*n) --;
		}
		else	i ++;
}
int main()
{
	sv a[100];
	int n;
	printf("nhap vao so luong sinh vien: ");
	scanf("%d",&n);
	nhap(a,n);
	xoa(a, &n);
	xuat(a,n);
	
	return 0;
}
	

	
