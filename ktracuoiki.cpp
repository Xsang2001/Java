#include<iostream>
#include<string>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<cmath>
#include <stdlib.h>
#include<time.h>
using namespace std;

struct NhanVien{	
	string manv;
	string hoten;
	string loaihopdong;
	float hsl;	
	
};
 struct DSNV{
 	NhanVien nv;
 	DSNV *next;
 }*first,*last;

DSNV * LIFO(){
	FILE *f= fopen("ds.txt","r");
	first=NULL;
	while(!feof(f)){
		
		char manv[200];
		fgets(manv,200,f);
		manv[strlen(manv) - 1] = '\0';
		
		char hoten[200];
		fgets(hoten,200,f);
		hoten[strlen(hoten) - 1] = '\0';
		
		
		
	
    	
    	char hd[200];
		fgets(hd,200,f);
		hd[strlen(hd) - 1] = '\0';
		
			char hsl[50];
	 	fgets(hsl,100,f);
	 	hsl[strlen(hsl)-1]='\0';
    	float d= atof(hsl);
    	
    	DSNV *nv= new DSNV;

		
    	nv->nv.manv=manv;
    	nv->nv.hoten=hoten;
    	nv->nv.loaihopdong=hd;
    	nv->nv.hsl=d;
    	
    	nv->next=NULL;
    	if(first==NULL){
    		first=nv;
    		last=nv;
		}
		else{
			last->next= nv;
			last=nv;
		}
		
	}
	fclose(f);
	return first;
}
void XuatDSNV(){
	for(DSNV *p=first;p!=NULL;p=p->next){
		cout<<p->nv.manv<<";"<<p->nv.hoten<<";"<<p->nv.loaihopdong<<";"<<p->nv.hsl<<endl;
}
}

void DoiHSL(string manv,float hsl){
	int k=0;
	for(DSNV * p=first;p!=NULL;p=p->next){
		if(p->nv.manv==manv){
		
			k=1;
		}
}
	
	
	for(DSNV * p=first;p!=NULL;p=p->next){
		if(k==1){
			p->nv.hsl=hsl;
			return;
		}
	
	}
	
}



 void luufileBin(){
 	FILE *f=fopen("LUU.dat","wb");
 	for(DSNV *p=first;p!=NULL;p=p->next)
 		fwrite(&p->nv,sizeof(NhanVien),1,f);
 	fclose(f);
 	
 	cout<<"\nluu file thanh cong\n";
 	f=fopen("LUU.dat","rb");
 	NhanVien p;
 	while(fread(&p,sizeof(NhanVien),1,f)){
 		cout<<p.manv<<";"<<p.hoten<<";"<<p.loaihopdong<<";"<<p.hsl<<endl;
	 }
	 fclose(f);
 }
void Menu(){

	cout<<"1.  Xuat cac nhan vien ra man hinh.\n";
	cout<<"2.  doi hsl.\n";

	cout<<"3.  luu file \n";
	cout<<"4.  thoat.\n";
	cout<<" Lua chon cua ban la: ";
}
int main(){
	first=LIFO();
	int n;
	while(true){
		Menu();
		cin>>n;
	
		switch(n){
			case 1:{
				XuatDSNV();
				break;
			}
			case 2:{
			
				 string manv;
				 cout<<"nhap vao mot manv can doi hsl: ";
				 fflush(stdin);
				 getline(cin,manv);
				 
				 
				 float hsl;
				 cout<<"\nnhap vao hsl :";
				cin>>hsl;
				 DoiHSL(manv,hsl);
				
				break;
			}
			
			case 3:{
				luufileBin();
				
				break;
			}
			case 5:{
				return 0;
				break;
			}
			default:{
				cout<<" khong co chuc nang nay";
				break;
			}
		}
		cout<<"\n nhan phim bat ki de tiep tuc.\n";
		if(getch()==27)
			return 0;

		system("cls");
	}
	
}
