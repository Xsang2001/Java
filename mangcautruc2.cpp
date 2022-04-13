#include<stdio.h>
#include<string.h>
#define MAX 2
#define HOCPHAN 2
struct Sinhvien {
char hoten[30];
float diem[5];
};
int main() {
Sinhvien sv[MAX];
int i,j; float sum = 0;
int diem;
for(i=0;i<MAX;i++)
{
   printf("Nhap ho ten: ");
   gets(sv[i].hoten);
   for(j = 0; j < HOCPHAN; j++) 
  {
      printf("Nhap diem thi: ");
      scanf("%f", &sv[i].diem[j]);
      
    }

   fflush(stdin);  
}
printf("\n");
printf("Ho ten\t\t Diem trung binh\n\n");
for(i=0;i<MAX;i++)
{
	sum=0;
	for(j = 0; j < HOCPHAN; j++) 
	{
		sum += sv[i].diem[j];
	}
	printf("%s\t%.2f\n",sv[i].hoten, sum/HOCPHAN);
	}
	return 0;
}


	


