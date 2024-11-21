#include<stdio.h>
int main(){
	int radius;
	float area, perimeter;
	const float pi = 3.14;
	printf("Nhap ban kinh: ");
	scanf("%d", &radius);
	perimeter = 2*radius*pi;
	area = radius*radius*pi;
	printf("Dien tich hinh tron la: %.2f\n", area);
	printf("Chu vi hinh tron la: %.2f\n", perimeter);
	
	return 0;
}
