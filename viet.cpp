#include<iostream>
using namespace std;

int KTramangdx(int a[], int n){
	int k = n;
    for(int i = 1 ; i <= k  ; i++)
	{
        if(a[i] != a[k])        //Ph�p to�n t�ch c?c l� if(a[i]!=a[n-1-i])
    	{                         //S? l?n th?c hi?n c?a ph�p to�n n�y l� n l?n
    		return false;              //V?y d? ph?c t?p thu?t to�n l� O(n)
		 }
		k--;
    }      
	return true;
}
void nhap(int a[], int n) 
{
    for (int i = 1; i <= n; i++) 
	{
        cout << "Nhap vao phan tu a[" << i << "] : ";
        cin >> a[i];
    }
}
void xuat(int a[], int n) {
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
}
int main()
{
  int n,a[100];
  cout<<"Nhap vao so luong phan tu: ";
  cin>>n;
  nhap(a,n);
  if(KTramangdx(a,n)==false)
  {
  	cout<<"\nMang khong doi xung";
  }
  else
  {
  	cout<<"\nMang doi xung";
  }
}
