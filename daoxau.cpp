#include<bits/stdc++.h>
using namespace std;

int main ()
{
    string s1,s2;
    cin>>s1>>s2;
    int t = s2.size();
    for (int i = 0; i < t;i++)
    {
        s2 = s2[t-1] + s2;
        s2.resize(t);
        if (s1 == s2)
            {
                cout<<"Yes";
            }
        else
        {
        	cout<<"NO";
        }

    }
}
	
