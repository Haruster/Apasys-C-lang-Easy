#include <stdio.h>

int main(void) {
    int one = 1;
    int two = 2;
    int three = 3;
    int four = 4;

    int data_1 = one + two;
    int data_2 = three - two;
    int data_3 = three * four;
    int data_4 = four / two;

    printf("data_1 %d \n", data_1);
    printf("data_2 %d \n", data_2);
    printf("data_3 %d \n", data_3);
    printf("data_4 %d \n", data_4);

    return 0;
}