#include <iostream>
#include <iomanip>

struct Hocsinh
{
	char hoten[25];
	float d1,d2,d3,tongdiem;
};
void Nhap(Hocsinh hs[], int n)
{
	for(int i=0;i<n;++i)
	{
		cout<<"\n thi sinh:"<<i;
		cout<<"\n ho ten:";
		cin.ignore(1);
		cin.get(hs[i].hoten,25);
		cout<<"diem cac mon thi :";
		cin>>hs[i].d1>>hs[i].d2>>hs[i].d3;
		hs[i].tongdiem=hs[i].d1+hs[i].d2+hs[i].d3;
	}
}
void Sapxep(Hocsinh hs[],int n)
{
	int tam=0;
	for(int i=0;i<n-1;++i)
	  for(int j=1;j<n;j++)
	     if(hs[i].tongdiem<hs[j].tongdiem)
	     {
	     	tam=hs[i];
	     	hs[i]=hs[j];
	     	hs[j]=tam;
	    }
}
void Xuat(Hocsinh hs[],int n)
{
	cout<<"\n danh sach cac hoc sinh da sap xep :";
	for(int i=0;i<n;++i)
	   cout<<"\n"<<setw(25)<<hs[i].hoten<<setw(5)<<hs[i].tongdiem;
}
int main()
{
	Hocsinh hs[100];
	int n;
	cout<<"Nhap so hoc sinh:";
	cin>>n;
	Nhap(hs,n);
	Sapxep(hs,n);
	Xuat(hs,n);
	return 0;
}
