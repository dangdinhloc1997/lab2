#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float math, physics, chemistry, sum, avg;
	
	printf("Nhap vao lan luot diem so Toan hoc, Vat ly, Hoa hoc: ");
	scanf("%f %f %f", &math, &physics, &chemistry);
	
	sum = math + physics + chemistry;
    avg = sum / 3;
	
	printf("Tong diem = %.2f \nDiem trung binh: %.2f", sum, avg);
}
