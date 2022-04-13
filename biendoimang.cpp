#include <bits/stdc++.h>
using namespace std;
int chiadaychan(int a[],int n)
{
	int i, bientam=0, dem=0;
	for(i=0;i<n;i++)
		if(a[i]%2==0)
			bientam++;
	if(bientam == n)
		dem = 1;
	return dem;
}
int main()
{
	int a[200], n, count = 0;
	int tamp = 0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i]\t\t;
	}
	tamp = chiadaychan(a,n);
	count = tamp;
	while(tamp != 0)
	{
		for(int i=0;i<n;i++)
			a[i] = a[i] / 2;
		tamp = chiadaychan(a,n);
		count += tamp;
	}
	cout<<count<<'\n';
}
