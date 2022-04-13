#include<iostream>
#include<string.h>

using namespace std;

class Khachhang{
	private:
		char *ht;
		char *dc;
		int chiso_tt;
	public:
		Khachhang(){};
		Khachhang(char *a,char *b,int c);
		int get_cstt();
		char *get_ht();
		char *get_dc();
		float sotien_pt();
		void set(char *a,char *b,int c);
};
void Khachhang::set(char *a,char *b,int c)
{
	ht=new char[strlen(a)+1];
	strcpy(ht,a);
	dc=new char[strlen(b)+1];
	strcpy(dc,b);
	chiso_tt=c;
}
Khachhang::Khachhang(char *a,char *b,int c)
{
	ht=new char[strlen(a)+1];
	strcpy(ht,a);
	dc=new char[strlen(b)+1];
	strcpy(dc,b);
	chiso_tt=c;
}
char *Khachhang::get_ht()
{
	return ht;
}
char *Khachhang::get_dc()
{
	return dc;
}
int Khachhang::get_cstt(){
	return chiso_tt;
}
float Khachhang::sotien_pt()
{
	int k=chiso_tt;
	float s=0;
	if(k>0 && k<=100)
		s=chiso_tt*2000;
	else
	{
		if( k<=200)
			s+=(k-100)*3000+100*2000;
		if(k>200)
			s+=(k-200)*5000+100*3000+100*2000;
	}
	return s;
	
}
void Nhap( Khachhang *ds,int n)
{
	char ht[20];
	char dc[30];
	int cso;
	for(int i=0;i<n;i++)
	{
		cout<<"\n\tNhap tt khach hang "<<i+1<<":";
		cout<<"\nhap ho ten : ";
		fflush(stdin);
		gets(ht);
		cout<<"\nhap dia chi : ";
		gets(dc);
		cout<<"\nhap chi so tieu thu : ";
		cin>>cso;
		ds[i].set(ht,dc,cso);
	}
}
float maxtien(Khachhang *ds,int n)
{
	float max=ds[0].sotien_pt();
	for(int i=1;i<n;i++)
	{
		if(ds[i].sotien_pt()>max)
			max=ds[i].sotien_pt();
	}
	return max;
}
void Xuat(Khachhang *ds,int n)
{
	for(int i=0;i<n;i++)
	{
			cout<<"\n\t thong tin kh "<<i+1<<":";
			cout<<"\n ho ten:"<<ds[i].get_ht();
			cout<<"\n dia chi:"<<ds[i].get_dc();
			cout<<"\n chi so tieu thu:"<<ds[i].get_cstt();
			cout<<"\n so tien tra :"<<(size_t)ds[i].sotien_pt();
	}
}
void xuatmax(Khachhang *ds,int n)
{
	for(int i=0;i<n;i++)
	{
		if(ds[i].sotien_pt()==maxtien(ds,n))
		{
			cout<<"\n\t thong tin kh "<<i+1<<":";
			cout<<"\n ho ten:"<<ds[i].get_ht();
			cout<<"\n dia chi:"<<ds[i].get_dc();
			cout<<"\n chi so tieu thu:"<<ds[i].get_cstt();
			cout<<"\n so tien tra :"<<(size_t)ds[i].sotien_pt();
		}
	}
}
void sapxep(Khachhang *ds,int n)
{
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
		{
			if(ds[i].get_cstt()>ds[j].get_cstt())
			{
				char ht[15];
				char dc[20];
				int cso;
				strcpy(ht,ds[i].get_ht());
				strcpy(dc,ds[i].get_dc());
				cso=ds[i].get_cstt();
				ds[i].set(ds[j].get_ht(),ds[j].get_dc(),ds[j].get_cstt());
				ds[j].set(ht,dc,cso);
			}
		}
}
int main()
{
	Khachhang *ds=new Khachhang[50];
	cout<<"\nnhap so luong khanh hang:";
	int n;
	cin>>n;
	Nhap(ds,n);
	cout<<"\n----ds kh co so tien phai tra lon nhat:----";
	xuatmax(ds,n);
	cout<<"\n\n----ds da sap xep tang dan theo cstt:----";
	sapxep(ds,n);
	Xuat(ds,n);
	return 0;
	
}
