#include <stdio.h>

int main() {
    float altitude, bottomside, area;

    printf("Nhap canh day cua tam giac: ");
    scanf("%f", &bottomside);
    printf("Nhap duong cao cua tam giac: ");
    scanf("%f", &altitude);
    area = (altitude*bottomside) / 2;
    printf("Dien tich cua tam giac la: %.2f", area);

    return 0;
}
