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
	while(true)
	{
		cout << "			=================MENU================\n";
		cout << "1. Nhap vao 1 loai hop dong in ra can bo \n";
		cout << "2. In ra can bo nang luong dung han\n";
		cout << "3. Hien thi luong can bo\n";
		cout << "4. Nhap vao 1 ma can bo,in ra bang luong can bo do\n";
		cout << "5. In ra can bo sap xep theo ten\n";
		cout << "6. Hien thi ra cac can bo ve huu (so nam lam viec > 40 nam)\n";
		cout << "7. Cho biet moi loai hop dong co bao nhieu can bo\n";
		cout << "8. Cho biet moi loai hop dong tong luong bao nhieu\n";
		cout << "0. Thoat!!!\n";
		cout << "			=====================================\n";
		
		int k ;
		cout<<"\nChon chuc nang cua menu :";
		cin>>k;
		switch(k)
		{
			case 1 :
			{
				cout<<"\n nhap vao 1 loai hop dong can in can bo: ";
				string s;
				fflush(stdin);
				getline(cin,s);
				for(int i=0;i<n-1;i++){
					if(ds[i]->loaihopdong==s)
						cout<<ds[i]->macb<<" "<<ds[i]->tencb<<" "<<ds[i]->diachi<<" "<<ds[i]->namvaolam<<" "<<ds[i]->hsl<<" "<<ds[i]->loaihopdong<<endl;
				}
				cout<<Nam()<<endl;
				break;
			}
	
			case 2 :
			{
				cout<<" \n danh sach can bo den han tang luong:\n";
				for(int i=0;i<n-1;i++){
					if((Nam()-ds[i]->namvaolam)%3==0)
						cout<<ds[i]->macb<<" "<<ds[i]->tencb<<" "<<ds[i]->diachi<<" "<<ds[i]->namvaolam<<" "<<ds[i]->hsl<<" "<<ds[i]->loaihopdong<<endl;
				}
				break;
			}
			
			case 3 : 
			{
				for(int i=0;i<n-1;i++){
					int c=(Nam()-ds[i]->namvaolam)/3;
					if(c>0){
						ds[i]->hsl=ds[i]->hsl+n*0.33;
					}
				}
				cout<<"\n Hien thi luong cua can bo :\n";
				for(int i = 0 ; i<n-1; i++)
				{
					cout<<"\n"<<ds[i]->macb<<" "<<ds[i]->tencb<<" "<<ds[i]->hsl*1490<<"\n";
				}
				break;
			}
	
			case 4 :
			{
			
				cout<<"\nDanh sach can bo sau khi sap xep : \n";
				canbo *tam;
				for(int i=0;i<n-1;i++)	
	 				 for(int j=i+1;j<n;j++)
	 				 {
	  					if(ds[i]->tencb > ds[j]->tencb)
	  					{
	  						tam = ds[i];
	  						ds[i] = ds[j];
	  						ds[j] = tam;
	  					}
					}
				for(int i = 0 ; i < n-1; i++)
					cout<<ds[i]->macb<<" "<<ds[i]->tencb<<" "<<ds[i]->diachi<<" "<<ds[i]->namvaolam<<" "<<ds[i]->hsl<<" "<<ds[i]->loaihopdong<<endl;
				break;
			}
			
			case 6 : 
			{
				cout<<"\nDanh sach can bo ve huu :\n";
				for(int i = 0 ; i<n-1;i++)
				{
					if((Nam() - ds[i]->namvaolam)>40)
						cout<<ds[i]->macb<<" "<<ds[i]->tencb<<" "<<ds[i]->diachi<<" "<<ds[i]->namvaolam<<" "<<ds[i]->hsl<<" "<<ds[i]->loaihopdong<<endl;
				}
				break;
			}
			
			case 7 : {
				int nh= 0,dh = 0,bc = 0;
				for(int i = 0 ; i<n-1;i++)
				{
					if(ds[i]->loaihopdong == "ngan han")
						nh++;
					else if (ds[i]->loaihopdong=="dai han")
						dh++;
					else
						bc++;
				}
				cout<<"\nMoi loai hop dong co so can bo :\n";
				cout<<"\nNgan han :"<<nh<<" can bo";
				cout<<"\nDai han :"<<dh<<" can bo";
				cout<<"\nBien che :"<<bc<<" can bo\n";
				break;
			}
	
	
			case 0 :
			{
				exit(0);
				break;
			}

		}
	}
}
