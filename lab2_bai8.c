#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int so_nguyen;
    float so_thuc;  
    char ki_tu;

    // so nguyen
    printf("Nhap vao 1 so nguyen: ");
    scanf("%d", &so_nguyen);
    int int_size = sizeof(int);
    int long_int_size = sizeof(long int);

    printf("Kieu int: %d Byte\nKieu long int: %d Byte\nSo nguyen: %d\n", int_size, long_int_size, so_nguyen);

    // kieu so thuc
    printf("Nhap vao 1 so thuc: ");
    scanf("%f", &so_thuc);

    int float_size = sizeof(float);
    int double_float_size = sizeof(double);
    int long_double_float_size = sizeof(long double);


    printf("Kieu float: %d Byte\nKieu double float: %d Byte\nKieu long double: %d Byte\nSo thuc: %f\n", float_size, double_float_size, long_double_float_size,so_thuc);

    // ki tu
    printf("Nhap vao 1 ky tu: ");
    scanf("%d", &ki_tu);

    int char_size = sizeof(char);

    printf("Kieu char: %d Byte\nKy tu: %c\n", char_size, ki_tu);


}
