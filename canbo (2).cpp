#include<iostream>
#include<string>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<cmath>
#include <stdlib.h>
#include<time.h>

using namespace std;
int Nam(){
	time_t now;
	struct tm *timeinfo;
	time(&now);
	timeinfo= localtime(&now);
	int Nam= 1900+timeinfo->tm_year;
	return Nam;
}
struct canbo{
	string macb;
	string tencb;
	string diachi;
	int namvaolam;
	float hsl;
	string loaihopdong;
}*ds[100];
int main(){
	FILE * f= fopen("canbo.txt","r");
	int n=0;
	
	while(!feof(f)){
		ds[n]= new canbo();
		char temp[200];
		fgets(temp,200,f);
		temp[strlen(temp) - 1] = '\0';
		ds[n]->macb = temp;
		
	
		fgets(temp,200,f);
		temp[strlen(temp) - 1] = '\0';
		ds[n]->tencb = temp;
		

		fgets(temp,200,f);
		temp[strlen(temp) - 1] = '\0';
		ds[n]->diachi = temp;
		
		
		fgets(temp,200,f);
		temp[strlen(temp) - 1] = '\0';
	
		int year= atoi(temp);
		ds[n]->namvaolam = year;	
	

		fgets(temp,200,f);
		temp[strlen(temp) - 1] = '\0';
		float HSL= atof(temp);
		ds[n]->hsl = HSL;
	
		
		
		fgets(temp,200,f);
		temp[strlen(temp) - 1] = '\0';
		ds[n]->loaihopdong = temp;
		n++;
	}
	fclose(f);
	for(int i=0;i<n-1;i++){
		
		cout<<ds[i]->macb<<" "<<ds[i]->tencb<<" "<<ds[i]->diachi<<" "<<ds[i]->namvaolam<<" "<<ds[i]->hsl<<" "<<ds[i]->loaihopdong<<endl;
	}
	cout<<"\n nhap vao 1 loai hop dong can in can bo: ";
	string s;
	fflush(stdin);
	getline(cin,s);
	for(int i=0;i<n-1;i++){
		if(ds[i]->loaihopdong==s)
			cout<<ds[i]->macb<<" "<<ds[i]->tencb<<" "<<ds[i]->diachi<<" "<<ds[i]->namvaolam<<" "<<ds[i]->hsl<<" "<<ds[i]->loaihopdong<<endl;
	}
	
	cout<<Nam()<<endl;
	cout<<"\n danh sach can bo sau khi tang hsl: \n";
	for(int i=0;i<n-1;i++){
		int c=(Nam()-ds[i]->namvaolam)/3;
		if(c>0){
			ds[i]->hsl=ds[i]->hsl+n*0.33;
			cout<<ds[i]->macb<<" "<<ds[i]->tencb<<" "<<ds[i]->diachi<<" "<<ds[i]->namvaolam<<" "<<ds[i]->hsl<<" "<<ds[i]->loaihopdong<<endl;
		}
	}
	cout<<" \n danh sach can bo den han tang luong:\n";
	for(int i=0;i<n-1;i++){
		if((Nam()-ds[i]->namvaolam)%3==0)
			cout<<ds[i]->macb<<" "<<ds[i]->tencb<<" "<<ds[i]->diachi<<" "<<ds[i]->namvaolam<<" "<<ds[i]->hsl<<" "<<ds[i]->loaihopdong<<endl;
	}
    canbo a[255];
    canbo tam;
//	char *tam;
//	tam=(char*)calloc(10,sizeof(char));
//	string *tam;
	cout<<"\nDanh sach can bo sau khi sap xep : \n";
	
	for(int i=0;i<n-1;i++)
	  for(int j=i+1;j<n;j++)
	  {
	  	if(a[i].tencb > a[j].tencb)
	  	{
	  		tam = a[i];
	  		a[i] = a[j];
	  		a[j] = tam;
	  	}
	}
	for(int i = 0 ; i < n-1; i++)
		cout<<ds[i]->macb<<" "<<ds[i]->tencb<<" "<<ds[i]->diachi<<" "<<ds[i]->namvaolam<<" "<<ds[i]->hsl<<" "<<ds[i]->loaihopdong<<endl;
	
	cout<<"\nDanh sach can bo ve huu :\n";
	for(int i = 0 ; i<n-1;i++)
	{
		if((Nam() - ds[i]->namvaolam)>40)
			cout<<ds[i]->macb<<" "<<ds[i]->tencb<<" "<<ds[i]->diachi<<" "<<ds[i]->namvaolam<<" "<<ds[i]->hsl<<" "<<ds[i]->loaihopdong<<endl;
	}
	int nh= 0,dh = 0,bc = 0;
	for(int i = 0 ; i<n;i++)
	{
		if(ds[i]->loaihopdong == "ngan han")
			nh++;
		else if (ds[i]->loaihopdong=="dai han")
			dh++;
		else
			bc++;
	}
	cout<<"\nMoi loai hop dong co so can bo :\n";
	cout<<"Ngan han :"<<nh<<" can bo";
	cout<<"Dai han :"<<dh<<" can bo";
	cout<<"Bien che :"<<bc<<" can bo";
	
}
