#include <stdio.h>

int main(void) {

    int number;

    printf("1에서 5까지의 값을 하나 입력해주세요 : \n");

    scanf("%d", &number);

    switch (number) {
        case 1: // number가 1일 때
            printf("number는 1입니다.\n");
            break;
        
        case 2: // number가 2일 때
            printf("number는 2입니다.\n");
            break;

        case 3:
            printf("number는 3입니다.\n");
            break;

        case 4:
            printf("number는 4입니다.\n");
            break;

        case 5:
            printf("number는 5입니다.\n");

        default:
            printf("올바르지 않은 값입니다.\n");
            break;
    }

}

