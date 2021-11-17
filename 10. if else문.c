#include <stdio.h>

int main(void) {

    int x = 50, y = 30;

    if (x < y) {

        printf("x가 y보다 작습니다.");

    }

    else if (x == y) {

        printf("x와 y가 같습니다.");

    }

    else if (x > y) {

        printf("x가 y보다 큽니다.");

    }

    else {

        printf("값이 이상합니다.");

    }

    return 0;

}