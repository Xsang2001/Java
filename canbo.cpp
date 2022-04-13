#include<bits/stdc++.h>
using namespace std;

int Nam(){
	time_t now;
	struct tm *timeinfo;
	time(&now);
	timeinfo= localtime(&now);
	int Nam= 1900+timeinfo->tm_year;
	return Nam;
}
string getten(string hoten)
{
	string ht;
	int vt = ht.find_last_of(" ");
	string ten= ht.substr(vt+1);
	cout<<ten<<endl;
	return ten;
}
					
struct canbo{
	string macb;
	string tencb;
	string diachi;
	int namvaolam;
	float hsl;
	string loaihopdong;
}*ds[100];
float tongl(canbo *ds[100],int n){
	float luong=1;
		
		
		luong=luong*ds[n]->hsl *1490;
		
		return luong;
}
int main(){
	FILE * f= fopen("qlcanbo.txt","r");
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
	cout<<"\n____________________________________________\n";
	cout<<"\n nhap vao 1 loai hop dong can in can bo: ";
	string s;
	fflush(stdin);
	getline(cin,s);
	for(int i=0;i<n-1;i++){
		if(ds[i]->loaihopdong==s)
			cout<<ds[i]->macb<<" "<<ds[i]->tencb<<" "<<ds[i]->diachi<<" "<<ds[i]->namvaolam<<" "<<ds[i]->hsl<<" "<<ds[i]->loaihopdong<<endl;
	}
	
	cout<<Nam()<<endl;
	cout<<"\n_____________________________________________\n";
	cout<<"\n danh sach can bo sau khi tang hsl: \n";
	for(int i=0;i<n-1;i++){
		int c=(Nam()-ds[i]->namvaolam)/3;
		if(c>0){
			ds[i]->hsl=ds[i]->hsl+n*0.33;
			cout<<ds[i]->macb<<" "<<ds[i]->tencb<<" "<<ds[i]->diachi<<" "<<ds[i]->namvaolam<<" "<<ds[i]->hsl<<" "<<ds[i]->loaihopdong<<endl;
		}
	}
	cout<<"\n_____________________________________________\n";
	cout<<" \n danh sach can bo den han tang luong:\n";
	for(int i=0;i<n-1;i++){
		if((Nam()-ds[i]->namvaolam)%3==0)
			cout<<ds[i]->macb<<" "<<ds[i]->tencb<<" "<<ds[i]->diachi<<" "<<ds[i]->namvaolam<<" "<<ds[i]->hsl<<" "<<ds[i]->loaihopdong<<endl;
	}
	cout<<"\n_______________________________________________\n";
	cout<<" nhap macb can in bang luong: ";
	float pc=1;
	string macanbo;
	fflush(stdin);
	getline(cin,macanbo);
	for(int i=0;i<n-1;i++){
		if(ds[i]->macb== macanbo){
		float luong=tongl(ds,i);
		float bhyt= 0.01 * luong;
float bhxh= 0.05 *luong;
		if(ds[i]->loaihopdong=="bien che")
			pc= 0.25 *luong;
		else
			 pc=0;
		cout<<ds[i]->macb<<" "<<ds[i]->tencb<<" "<<ds[i]->hsl<<" "<<"luong: "<<luong<<" "<<"bhxh: "<<bhyt<<" "<<"bhxh: "<<bhxh<<" "<<"pc: "<< pc<<endl;
		}
	}
	cout<<"\n________________________________________________\n";
	cout<<"\nDanh sach can bo sau khi sap xep theo ten la :\n";
	canbo *tam;
	for(int i=0;i<n-1;i++)
	{
	  	for(int j=i+1;j<n;j++)
	  	{
	  		if(getten(ds[i]->tencb)>getten(ds[j]->tencb))
	  		{
	  			tam = ds[i];
	  			ds[i] = ds[j];
	  			ds[j] = tam;
	  		}
		}
	}
	for(int i = 0 ; i < n-1; i++){
		cout<<ds[i]->tencb<<endl;}
	cout<<"\n____________________________________________________\n";
	cout<<"\nDanh sach can bo ve huu :\n";
	for(int i = 0 ; i<n-1;i++)
	{
		if((Nam() - ds[i]->namvaolam)>40)
			cout<<ds[i]->macb<<" "<<ds[i]->tencb<<" "<<ds[i]->diachi<<" "<<ds[i]->namvaolam<<" "<<ds[i]->hsl<<" "<<ds[i]->loaihopdong<<endl;
	}
	cout<<"\n____________________________________________________\n";
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
	cout<<"Ngan han :"<<nh<<" can bo"<<endl;
	cout<<"Dai han :"<<dh<<" can bo"<<endl;
	cout<<"Bien che :"<<bc<<" can bo";
	
	cout<<"\n_____________________________________________________\n";
	int tonglnh=0,tongldh=0,tonglbc=0;
	for(int i=0;i<n-1;i++){
		if(ds[i]->loaihopdong=="ngan han")
			tonglnh+=tongl(ds,i);
		if(ds[i]->loaihopdong=="dai han")
			tongldh+=tongl(ds,i);
		if(ds[i]->loaihopdong=="bien che")
			tonglbc+=tongl(ds,i);
	}
	cout<<"Tong luong cua hop dong ngan han la: "<<tongl<<endl;
	cout<<"Tong luong cua hop dong dai han la: "<<tongl<<endl;
	cout<<"Tong luong cua hop dong bien che la: "<<tongl<<endl;
}
