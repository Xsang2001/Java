#include <iostream>
#include<string.h>
using namespace std;

void Tan_Suat_Xuat_Hien(char s[])
{
	int n = strlen(s);
	for (int i = 0; i < n; i++)
	{
		bool KT = true; 
		for (int j = i - 1; j >= 0; j--)
		{
			if (s[i] == s[j])
			{
				KT = false;
				break;
			}
		}
		if (KT == true)
		{
			int dem = 0;
			for (int k = 0; k < n; k++)
			{
				if (s[i] == s[k])
				{
					dem++;
				}
			}
			cout << "\nKy tu " << s[i] << " xuat hien " << dem << " lan" ;
		}
	}
}
int main()
{
	char s[50] = "";
	cout << "\nNhap chuoi: ";
	cin>>s;
	Tan_Suat_Xuat_Hien(s);
	system("pause");
	return 0;
}
