#include<stdio.h>
int main(){
	float Toan, Van, Anh, Tong, TBC;
	printf("Nhap diem Toan: ");
	scanf("%f", &Toan);
	printf("Nhap diem Van: ");
	scanf("%f", &Van);
	printf("Nhap diem Anh: ");
	scanf("%f", &Anh);
	Tong = Toan+Van+Anh;
	TBC = Tong/3;
	printf("Tong diem ba mon la: %.2f\n", Tong);
	printf("Trung binh cong ba mon la: %.2f\n", TBC);
	
	return 0;

}
