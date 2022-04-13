#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

class Vecto{
	private:
		int n;
		int a[5];
	public:
		void Nhap();
		void Xuat();
		float Dodai();
		Vecto timvtdoi();
		int kiemtra(Vecto h);
};
void Vecto::Nhap()
{
	cout<<"\nNhap so kich thuoc vecto:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"a["<<i+1<<"]=";
		cin>>a[i];	
	}
}
void Vecto::Xuat()
{
	for(int i=0;i<n;i++)
	{
		cout<<" "<<a[i]<<" ";
	}
}
float Vecto::Dodai()
{
	float s=0;
	for(int i=0;i<n;i++)
	{
		s+=a[i]*a[i];
	}
	return sqrt(s);
}
Vecto Vecto::timvtdoi()
{
	Vecto h1;
	for(int i=0;i<n;i++)
	{
		h1.a[i]=a[i]*-1;
	}
	h1.n=n;
	return h1;
}
int Vecto::kiemtra(Vecto h)
{
	if(n!=h.n)
		return 0;
	for(int i=0;i<n;i++)
	{
		if(a[i]!=h.a[i])
			return 0;
	}
	return 1;
}
float Maxdodai(Vecto *ds,int n)
{
	float max=ds[0].Dodai();
	for(int i=1;i<n;i++)
	{
		if(ds[i].Dodai()>max)
			max=ds[i].Dodai();
	}
	return max;
}
int main()
{
	int k;
	Vecto *ds=new Vecto[50];
	cout<<"\nNhap ds vecto:";
	cin>>k;
	for(int i=0;i<k;i++)
	{	cout<<"\n vecto "<<i+1<<":";
		ds[i].Nhap();
	}
	cout<<"\n\t ds vecto co do dai lon nhat la:";
	float d=Maxdodai(ds,k);
	for(int i=0;i<k;i++)
	{
		if(ds[i].Dodai()==d)
		{
			cout<<"\n vecto "<<i+1<<":";
			ds[i].Xuat();
			cout<<setprecision(2)<<fixed<<"do dai:"<<ds[i].Dodai();
		}
	}
	return 0;
}
