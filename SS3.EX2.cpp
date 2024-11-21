#include<stdio.h>
int main(){
	float Celsius, Fahrenheit;
	printf("Nhap do Celsius: ");
	scanf("%f", &Celsius);
	Fahrenheit = (Celsius*9)/5+32;
	printf("Do C chuyen sang do F la: %.1f", Fahrenheit);
	return 0;
}
