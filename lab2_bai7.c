#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    // hinh chu nhat
	float canh1, canh2, chuvi, dientich;
	
	printf("Nhap vao lan luot 2 canh hinh chu nhat: ");
	scanf("%f %f", &canh1, &canh2);
	
	chuvi = (canh1 + canh2) * 2 ;
    dientich = canh1 * canh2;
	
	printf("Chu vi Hinh chu nhat: %.2f \nDien tich Hinh chu nhat: %.2f\n", chuvi, dientich);

    // hinh vuong
    float canh3, chuvi1, dientich1;

	printf("Nhap vao canh hinh vuong: ");
    scanf("%f", &canh3);

    chuvi1 = canh3 * 4;
    dientich1 = canh3 * canh3;

	printf("Chu vi Hinh vuong: %.2f \nDien tich Hinh vuong: %.2f\n", chuvi1, dientich1);

    // hinh tron

    float bankinh, chuvi2, dientich2;

	printf("Nhap vao ban kinh hinh tron: ");
    scanf("%f", &bankinh);

    chuvi2 = 2*3.14*bankinh;
    dientich2 = 3.14*bankinh*bankinh;

	printf("Chu vi Hinh tron: %.2f \nDien tich Hinh tron: %.2f\n", chuvi2, dientich2);

    return 0;

}
