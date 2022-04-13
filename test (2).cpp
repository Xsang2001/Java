#include <iostream>
using namespace std;

void Nhap (int a[],int n)
{
	for(int i = 0 ; i < n; i++)
	{
		cout<<"Nhap a["<<i<<"] :";
		cin>>a[i];
	}
}
int max(int a[],int n)
{
    int max = a[0];
    for(int i = 0 ; i < n ; i++)
    {
        if(max < a[i])
          max = a[i] ;
    }
    return max;
}

void reverse(int a[],int n)
{
    int b = n-1;
    for(int i = 0 ; i < n/2 ; i++)
    {
        int tam = a[i];
        a[i] = a[b];
        a[b] = tam ;
        b--;
    }
}

void KTmangdx(int a[], int n){
    int k = 0;
    for(int i = 0 ; i < n ; i++)
	{
        if(a[i] != a[n-1-i])
    	{
    		cout<<"Mang k doi xung";
    		return;
		}
    }
    cout<<"Mang doi xung";
}

int Demnd(int a[],int n)
{
	int dem = 0 ;
	for( int i  = 0 ; i < n-1 ; i++)
		for(int j = i+1 ; j < n ; j++)
			if(a[i]  > a[j])            
				dem++;
	return dem;
}

int demCT(int a[],int n , int x)
{
	int dem = 0 ;
	for( int i  = 0 ; i < n-1 ; i++)
		for(int j = i+1 ; j < n ; j++)
			if(a[i] + a[j] == x)
				dem++;
	return dem;
}
void Xuat(int a[],int n)
{
	for(int i = 0 ; i < n ; i++)
	{
		cout<<"a["<<i<<"] = "<<a[i]<<endl;
	}
}
void Cau6(int a[],int n)
{
	int dem = 0;
	cout<<"Day D = (";
	for(int i = 0 ; i < n ; i++)
	{
		for(int j = i + 1 ; j < n ;j++)
		{
			if(a[j] <= a[i])
				dem++;
		}
		cout<<dem<<", ";
		dem = 0 ;
	}
	cout<<")";
}
int main() {
	int a[100];
	int n ,x,i;
	cout<<"Nhap so phan tu cua mang : ";
	cin>>n;
	Nhap(a,n);
 	//Câu 1 :
	 cout<<"Max = "<<max(a,n)<<endl;
   //Câu 2 :
	 cout<<"\nMang sau khi dao nguoc :\n";
	 reverse(a,n);
	 Xuat(a,n);
   //Câu 3 :
	 KTmangdx(a,n);
   //Câu 4 :
	 cout<<"\nSo cap doi xung :"<<Demnd(a,n)<<endl;
   // Câu 5 :
	 cout<<"\nNhap x : ";
	 cin>>x;
	 cout<<"So cap co tong = x : "<<demCT(a,n,x)<<endl;
	//	 Cau 6
	Cau6(a,n);

}
