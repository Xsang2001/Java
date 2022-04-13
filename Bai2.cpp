#include<stdio.h>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int ptbac2(float a, float b, float c,float *x1, float *x2){
    float delta = b*b - 4*a*c;
    if(delta<0)
	{
        return -1;
    }
    else if(delta==0)
	{
        *x1=*x2= -b/(2*a);
        return 0;
    }
    else
	{
        delta = sqrt(delta);
        *x1 = (-b + delta) / (2*a);
        *x2 = (-b - delta) / (2*a);
        return 2;
    }
}
int main(){
    float a,b,c;
    float x1,x2;
    float *d1,*d2;
    d1=&x1;
    d2=&x2;
    cout<<"nhap a :";
    cin>>a;
    cout<<"nhap b :";
    cin>>b;
    cout<<"nhap c :";
	cin>>c;
    int zet = ptbac2(a,b,c,d1,d2);
        if(zet == -1) {
        cout<<"phuong trinh  vo nghiem";
    }
    else if(zet == 0){
    	cout<<"phuong trinh co nghiep kep x1 = x2 ="<<x1;
    }
    else{
    	cout<<"phuong trinh co 2 nghiem phan biet :"<<"\n"<<"x1 ="<<x1<<"\n"<<"x2 ="<<x2;
    }
}
