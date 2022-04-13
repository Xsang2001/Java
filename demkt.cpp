#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int cnt[255];
	string s;
	fstream fi;                   
	fi.open("input.txt", ios::in); 
	
	fstream f;                    
	f.open("luu.txt", ios::out);
	

	getline(fi,s);
	fi.close();
	
	for(int i = 0; i <=255;i++)
	{
		cnt[i] = 0;
	}
	int n = s.length();
	for(int i = 0; i<n;i++)
	{
		cnt[s[i]]++;
	}
	cout<<"Ket qua thong ke :\n";
	f<<"Noi dung cua file :"<<s<<endl;
	f<<"Ket qua thong ke :\n";
	for(int i = 0;i < 255; i++){
        if(cnt[i] > 0){
        	f<<static_cast<char>(i)<<":"<<cnt[i]<<endl;
        	cout<< static_cast<char>(i)<<":"<<cnt[i]<<endl;
        }
    }
    
    //Ghi file
    
    f.close();
	
}
