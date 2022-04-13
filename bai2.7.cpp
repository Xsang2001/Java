#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;
struct Sinhvien
{
	char masv;
	char hoten[20];
	char lop;
	float diemtb;
};
void nhap(Sinhvien * sv, int n)
{
	for(int i=0;i<n;++i)
	{
		cout<<"\n sinh vien thu: "<<i+1;
		cout<<"\n ma sinh vien: ";
		cin.ignore(1);
		cin>>sv[i].masv;
		cout<<"\n ho ten: ";
		cin.ignore(1);
		cin.get(sv[i].hoten,20);
		cout<<"\n lop: ";
		cin.ignore(1);
		cin>>sv[i].lop;
		cout<<"\n diem trung binh: ";
		cin>>sv[i].diemtb;
	}
}
void sapxep(Sinhvien *sv, int n)
{
	for(int i=0;i<n-1;++i)
	  for(int j=i;j<n;j++)
	   if(sv[i].diemtb>sv[j].diemtb)
	   {
	   	 Sinhvien tg = sv[i];
	   	 sv[i] = sv[j];
	   	 sv[j] = tg;
	   	}
}
void xuat(Sinhvien *sv, int n)
{
	cout<<"\n danh sach sinh vien da sap xep la: ";
	for(int i=0;i<n;i++)
	  cout<<"\n ma sinh vien la :"<<sv[i].masv;
	  cout<<"\n Ho ten sinh vien la :"<<sv[i].hoten;
	  cout<<"\n lop: "<<sv[i].lop;
	  cout<<"\n diem trung binh cua sinh vien la :"<<sv[i].diemtb;
}
int main()
{
	Sinhvien *sv;
	int n;
	cout<<"\n so sinh vien n= ";
	cin>>n;
	hs=new Sinhvien[n];
	if(sv == NULL)
	{
		cout<<" loi cap phat vung nho: ";
		exit(1);
	}
}
nhap(sv,n);
sapxep(sv,n);
xuat(sv,n);
delete sv;
return 0;
}
	  
	  
		
		

