#include<stdio.h>
struct Sinhvien
{
  char *hoten;
  int namsinh;
  char *chuyennganh;
  char *mahocphan[5];
};
int main()
{ Sinhvien sv = {
"Tran Luc", 2000, "Khoa hoc may tinh",
{"CS-01", "CS-02", "CS-03", "CS-04", "CS-05" }
};
Sinhvien *p_sv = &sv;
int i;
printf("Truy cap cac truong bang cach dung bien cau truc: \n\n");
printf("Ho ten: %s\n", sv.hoten);
printf("Nam sinh: %d\n", sv.namsinh);
printf("Chuyen nganh da dang ky: %s\n", sv.chuyennganh);
for(i = 0; i < 5; i++)
printf("Ma hoc phan: %s \n", sv.mahocphan[i]);

printf("\n\nTruy cap cac truong bang cach dung bien con tro: \n\n");
printf("Ho ten: %s\n", p_sv->hoten);
printf("Nam sinh: %d\n", p_sv->namsinh);
printf("Chuyen nganh da dang ky: %s\n", p_sv->chuyennganh);
for(i = 0; i < 5; i++)
printf("Ma hoc phan: %s \n", p_sv->mahocphan[i]);
return 0;
}
