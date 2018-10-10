#include <stdio.h>
#include <stdlib.h>
double nuaChuViTamGiac(double a, double b, double c) {
    return (a + b + c)/2;
}

double chuViTamGiac(double a, double b, double c) {
    return a + b + c;
}

int main() {
    double a, b, c;
    printf("Vui lòng nhập chiều dài cạnh thứ nhất:\n ");
    scanf("%lf", &a);
    printf("Vui lòng nhập chiều dài cạnh thứ hai:\n ");
    scanf("%lf", &b);
    printf("Vui lòng nhập chiều dài cạnh thứ ba:\n ");
    scanf("%lf", &c);
    if (a <= 0 ) {
        printf("a phải lớn hơn 0.\n");
        printf("Vui lòng nhập lại.\n");
    } else if (b <= 0) {
        printf("b phải lớn hơn 0.\n");
        printf("Vui lòng nhập lại.\n");
    } else if (c <= 0) {
        printf("c phải lớn hơn 0.\n");
        printf("Vui lòng nhập lại.\n");
    } else if (a >= b + c) {
        printf("Một cạnh phải lớn hơn tổng hai cạnh còn lại\n");
        printf("vui lòng nhập lại.\n");
    } else if (b >= a + c) {
        printf("Một cạnh phải lớn hơn tổng hai cạnh còn lại\n");
        printf("vui lòng nhập lại.\n");
    } else if (c >= a + b) {
        printf("Một cạnh phải lớn hơn tổng hai cạnh còn lại\n");
        printf("vui lòng nhập lại.\n");
    }
    printf("Nửa chu vi tam giác = %.3lf\n", nuaChuViTamGiac(a, b, c));
    printf("Chu vi tam giác = %.3lf\n", chuViTamGiac(a, b, c));
    return 0;
}