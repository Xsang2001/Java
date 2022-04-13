
#include <iostream>

using namespace std;
int main()
{
	int a[100],n,i,day,tong=0,dem;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	cin>>day;
	    a[i]=day;
	}
	for(i=0;i<n;i++)
	{
	  dem++;
	  tong=tong+a[i];
	 }
	 cout<<"tong la:"<<	tong;
	 return 0;
}
	    

