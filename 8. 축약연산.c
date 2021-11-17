#include <stdio.h>

int main(void) {

    int x = 100;

    printf("현재의 x 값은 %d입니다.\n", x);

    x += 50; // x = x + 50; 

    printf("현재의 x 값은 %d입니다.\n", x);

    x -= 80; // x = x - 80;

    printf("현재의 x 값은 %d입니다.\n", x);

    x *= 100; // x = x * 100;

    printf("현재의 x 값은 %d입니다.\n", x);

    x /= 10; // x = x / 10;

    printf("현재의 x 값은 %d입니다.\n", x);

    x %= 5; // x = x % 5;

    printf("현재의 x 값은 %d입니다.\n", x);

    return 0;

}