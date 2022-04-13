#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
class Nhanvien{
	private:
		char *mnv;
		char *ht;
		int heso;
	public:
		Nhanvien(){};
		Nhanvien(char *a,char *b,int c);
		void Nhap();
		void Xuat();
		char *get_mnv();
		char *get_ht();
		int get_hs();
		float Luong();
		void set(char *a,char *b,int c);
};
void Nhanvien::set(char *a,char *b,int c)
{
	mnv=new char[strlen(a)+1];
	strcpy(mnv,a);
	ht=new char[strlen(b)+1];
	strcpy(ht,b);
	heso=c;
}
char *Nhanvien::get_mnv()
{
	return mnv;
}
char *Nhanvien::get_ht()
{
	return ht;
}
int Nhanvien::get_hs()
{
	return heso;
}
Nhanvien::Nhanvien(char *a, char *b ,int c)
{
	mnv=new char[strlen(a)+1];
	strcpy(mnv,a);
	ht=new char[strlen(b)+1];
	strcpy(ht,b);
	heso=c;
}
void Nhanvien::Nhap()
{
	char ma[15];
	char hot[15];
	int hs;
	cout<<"\nNhap ma nhan vien:";
	fflush(stdin);
	gets(ma);
	cout<<"\nNhap ho ten: ";
	gets(hot);
	cout<<"\nNhap he so luong: ";
	cin>>hs;
	set(ma,hot,hs);
	
}
float Nhanvien::Luong()
{
	float s=0;
	if(heso<3)
		s=heso*1350000+700000;
	if(heso>=3 && heso<4)
		s=heso*1350000+500000;
	if(heso>=4)
		s=heso*1350000+300000;
	return s;
}
void Nhanvien::Xuat(){
	cout<<"\nmnv:"<<mnv;
	cout<<"\nho ten :"<<ht;
	cout<<"\nhe so luong:"<<heso;

}
void Sapxep(Nhanvien *ds,int n)
{
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
		{
			if(strcmpi(ds[i].get_mnv(),ds[j].get_mnv())>0)
			{
				char ht[15];
				char ma[15];
				int hs;
				strcpy(ht,ds[i].get_ht());
				strcpy(ma,ds[i].get_mnv());
				hs=ds[i].get_hs();
				ds[i].set(ds[j].get_mnv(),ds[j].get_ht(),ds[j].get_hs());
				ds[j].set(ma,ht,hs);
			}
		}
}
float Luongtb(Nhanvien *ds,int n)
{
	float sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=ds[i].Luong();
	}
	return sum/n;
}
int main()
{
	int  k;
	Nhanvien *ds=new Nhanvien[50];
	cout<<"\nNhap ds nhan vien:";
	cin>>k;
	for(int i=0;i<k;i++)
	{
		cout<<"\n\tNhan vien "<<i+1<<":";
		ds[i].Nhap();
	}
	cout<<"\n\t---ds da sap xep tangdan theo mnv---";
	Sapxep(ds,k);
	for(int i=0;i<k;i++)
	{
		cout<<"\n\tNhan vien "<<i+1<<":";
		ds[i].Xuat();
		cout<<"\nLuong:"<<(size_t)ds[i].Luong();
	}
	cout<<"\nluong trung binh cua nhan vien la:";
	cout<<setprecision(2)<<fixed<<(size_t)Luongtb(ds,k);
	delete ds;
	return 0;
}
