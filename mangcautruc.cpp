#include<stdio.h>
#include<string.h>
struct Sinhvien
{
	char hoten[20];
	float dtb;
};
int main()
{
	Sinhvien SV1={"Nguyen Hung",7.5},SV2,SV3;
	printf("chi tiet sinh vien1\n\n");
	printf("Ho ten:%s\n",SV1.hoten);
	printf("Diem trung binh:%.2f\n",SV1.dtb);
	printf("\n");
	printf("Nhap ho ten cua sinh vien 2:");
	gets(SV2.hoten);
	printf("Nhap diem trung binh cua sinh vien 2: ");
	scanf("%f",&SV2.dtb);
    printf("Chi tiet sinh vien 2\n\n");
	printf("Ho ten:%s\n",SV2.hoten)	;
	printf("Diem trung binh:%.2f\n",SV2.dtb);
	strcpy(SV3.hoten,"Tran Minh");
	SV3.dtb=SV2.dtb+1;
	
	printf("Chi tiet sinh vien 3\n\n");
	printf("Ho ten:%s\n",SV3.hoten);
	printf("Diem trung binh:%.2f\n",SV3.dtb);
	return 0;
	
}
	

