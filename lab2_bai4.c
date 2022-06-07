#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float c,f;
	printf("Nhap vao nhiet do C:  ");
	scanf("%f", &c);
	
    f = 1.8*c + 32;
	
	printf("F: %.2f\n", f);
	return 0;
}
