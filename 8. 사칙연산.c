#include <stdio.h>

int main(void) {

    int num1 = 1;
    int num2 = 3;
    int num3 = 6;
    int num4 = 10;

    int one = num1 + num2; // 덧셈
    int two = num4 - num1; // 뺄셈
    int three = num3 * num4; // 곱셈
    int four = num4 / num1; // 나눗셈
    int five = num4 % num2; // 나머지

    printf("num1 + num2 = %d입니다.\n", one);
    printf("num4 - num1 = %d입니다.\n", two);
    printf("num3 * num4 = %d입니다.\n", three);
    printf("num4 / num1 = %d입니다.\n", four);
    printf("num4 % num2 = %d입니다\n", five);

    return 0;

}