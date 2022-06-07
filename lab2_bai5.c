#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float top, bottom, height, s;
	
	printf("Nhap vao lan luot gia tri day tren, day duoi, chieu cao cua hinh thang: ");
	scanf("%f %f %f", &top, &bottom, &height);
	
	s = ((top + bottom)/2) * height;
	
	printf("Dien tich hinh thang S = %.2f", s);
}
