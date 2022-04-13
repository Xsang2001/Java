#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;

int main()
{
	int n,a,b,r,i;
	int s;
	int tongh=0;
	int tongp=0;
	scanf("%d",&n);
	scanf("\t%d",&a);
	scanf("\t%d",&b);
	while(n!='\0')
	{
	    for(int i=0;i<n;i++)
	  {
		  if(tongh>=a&&tongh<=b)
		 {
			s=n%10;
			tongh+=s;
		 }
		  else if(tongh>=a&&tongh<=b)
		   {
			 r=n/10;
			 tongp+=r;
		   }
	}
	printf("%d",(tongh+tongp));
}
  return 0;
}
		
