#include<stdio.h>
using namespace std;
int ngay[2][12] = { {31,28,31,30,31,30,31,31,30,31,30,31},
{31,29,31,30,31,30,31,31,30,31,30,31} };
struct Date
{
	int D,M,Y;
};
int nhuan(int k)
{ return (k % 4 == 0 && k % 100 != 0) || k % 400 == 0;}
int isdate(date p)
{ int n,t,k;
n = p.D;
t = p.M;
k = p.Y;
if (t==1 || t==3 ||t==5 || t==7 || t==8 ||t==10 || t==12)
return ((n<=31) && (n>0));
else if (t==4 || t==6 ||t==9 || t==11)
return ((n<=30) && (n>0));
else if ((t==2) && nhuan(k) != 0)
return ((n<=29) && (n>0));
else
return ((n<=28) && (n>0));
}
int ngaynam(date p) 
{
	int i,j,k,s,a,z,x;
s = p.D;
k = p.Y;
a=p.M;
j = nhuan(k); 

{
	
	


   	
	




	
	
