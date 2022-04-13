#include<bits/stdc++.h>
using namespace std;

struct toado{
	char tentp[100];
	int x;
	int y;
	
}ds[100];

void xuat(toado ds[100],int n){
		printf("%s(%d,%d)\n",ds[n].tentp,ds[n].x,ds[n].y);
		
}
void space()
{
	printf("\n_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n\n");
}
int main(){
	FILE *f=fopen("tam.txt","r");
	int n=0;
	while(!feof(f)){
		char tp[255];
		fscanf(f,"%s",&tp);
		strcpy(ds[n].tentp,tp);
		fscanf(f,"%d\n",&ds[n].x);
		fscanf(f,"%d\n",&ds[n].y);
		n++;
	}
	fclose(f);
	for(int i =0;i<n;i++)
		xuat(ds,i);
	space();
	int a;
	printf("Nhap vao 1 goc phan tu  :");
	scanf("%d",&a);
	for(int i=0;i<n-1;i++){
		if(a==1)
		{
			if(ds[i].x>0 && ds[i].y>0)
				xuat(ds,i);	
		}
		if(a==2)
		{
			if(ds[i].x<0 && ds[i].y>0)
				xuat(ds,i);
		}
		if(a==3)
		{
			if(ds[i].x<0 && ds[i].y<0)
				xuat(ds,i);
		}
		 if(a==4)
		{
			if(ds[i].x>.0 && ds[i].y<0)
				xuat(ds,i);	
		}
	}
	space();
	printf("Cac Thanh pho nam tren tuc toa do la: \n");
	for(int i=0;i<n-1;i++){
		if(ds[i].x==0 || ds[i].y==0)
		{
			xuat(ds,i);
		}
	}
	space();
	char tp1[50],tp2[50];
	printf("Nhap 2 thanh pho can tinh khoang cach:");
	fflush(stdin);
	gets(tp1);
	gets(tp2);
	fflush(stdin);
	float kc=1;
	for(int i =0;i<n;i++){
		for(int j=1;j<n;j++)
		{
			if(strcmp(ds[i].tentp,tp1)==0 && strcmp(ds[j].tentp,tp2)==0)
			{
				kc= kc*sqrt(pow(ds[i].x-ds[j].x,2)+pow(ds[i].y-ds[j].y,2));
				printf("Khoang cach tu %s den %s la : %f\n",tp1,tp2,kc);
				break;
			}
		}
	}
	space();
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++)
		{
			double distance=1;
			distance= distance*sqrt(pow(ds[i].x-ds[j].x,2)+pow(ds[i].y-ds[j].y,2));
			printf("%s -->  %s :  %lf\n",ds[i].tentp,ds[j].tentp,distance);		
		}
		printf("\n");
	}
	int max=ds[0].x;
	for(int i=1;i<n-1;i++)
		if(max<ds[i].x)
			max=ds[i].x;
	for(int i=0;i<n-1;i++)
		if(max==ds[i].x){
			printf("Thanh pho co hoanh do lon nhat");
			xuat(ds,i);
}
}
