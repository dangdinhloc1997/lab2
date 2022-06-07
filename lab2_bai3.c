#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1, num2, tong, hieu, tich;
	float thuong;
	printf("Nhap vao lan luot gia tri num1 va num2:  ");
	scanf("%d %d", &num1, &num2);
	
	tong = num1 + num2;
	hieu = num1 - num2;
	tich = num1 * num2;
	thuong = num1 / num2;
	
	printf("Tong: %d\nHieu: %d\nTich: %d\nThuong: %.2f", tong, hieu, tich, thuong);
	return 0;
}
