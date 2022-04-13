#include<stdio.h>
int main()
{
	
	int a[99];
	int n,i,x,c=0,dem=0,tam,j;
	float S=0;
	scanf("%d",&n);
    scanf("%d",&x);
	for(i=0;i<n;i++)
	{   
		scanf("\b%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		c++;
	}
	if(c>=1)
	printf("YES");
	else
	printf("NO");
   for(i=0;i<n;i++)
   	{
   		if(a[i]%2!=0)
   		 { dem++;
   		  S=S+a[i];}
   	} 
   	printf("\n%.2f",S/dem);
    for(i=0;i<n-1;i++)
    for(j=i+1;j<n;j++)
	{
    	if(a[i]>a[j]){
    	 tam=a[i];
    	 a[i]=a[j];
    	 a[j]=tam;}
    }
     printf("\n");
	 for(i=0;i<n;i++)
     printf("%5d ", a[i]);
     return 0;
}
