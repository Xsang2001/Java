
#include<iostream>
#include<string.h>
using namespace std;

char *Xoa_trong(char *st)
{
	while (st[0] == ' ')
	{
		st.erase(st.begin() + 0); 
	}
	while (st[st.length() - 1] == ' ')
	{
		st.erase(st.begin() + st.length() - 1);
	}
}
char *Xoa_trong(char *st)

{
	for (int i = 0; i < st.length(); i++)
	{
		if (st[i] == ' ' && st[i + 1] == ' ')
		{
			st.erase(st.begin() + i);
			i--;
		}
	}
}
char *Xoa_trong(char *st)
{
	strlwr((char *)str.c_st()); 
	if (st[0] != ' ')
	{
		if (st[0] >= 97 && st[0] <= 122)
		{
			st[0] -= 32;
		}
		
	}
	for (int i = 0; i < st.length() - 1; i++)
	{
		if (st[i] == ' ' && st[i + 1] != ' ')
		{
			if (st[i + 1] >= 97 && st[i + 1] <= 122)
			{
				st[i + 1] -= 32; 
			}
		}
	}
}
int main()
{
	string st;
	printf  ("\nNhap chuoi: ");
	getline(cin, str);
	printf ( "\nChuoi nhan duoc: " );
	printf("\nDo dai cua chuoi",&st.length);

	Xoa_Khoang_Trang_Thua_Dau_Va_Cuoi(st);
	Xoa_Khoang_Trang_Giua_Cac_Tu(st);
	In_Hoa_Ki_Tu_Dau_Moi_Tu(st);
	printf << "\nChuoi sau khi xu li: " << st;


	system("pause");
	return 0;
}
}
