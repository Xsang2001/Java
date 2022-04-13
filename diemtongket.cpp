#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	int n, k, m;
	cin >> n >> k >> m;
	int a[n];
	int sum = 0;
	for (int i = 0 ; i < n - 1 ; i++){
		cin >> a[i];
		sum += a[i];
		if (a[i] > k) 
		{
			cout << -1;
			exit(0);
		}
	}
	int kq;
	if (m * n - sum > 0)
	{
		if (m * n - sum <= k) cout << m*n - sum;
		else cout << -1;
	}
	else cout << 0;
		

	return 0;
}
	
	
