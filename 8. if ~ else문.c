#include <stdio.h>

int main(void) {
    int x = 10;
    int y = 20;

    if (x < y) {
        printf("x가 y보다 작습니다.\n");
    }
    else if (x == y)
    {
        printf("x와 y가 같습니다\n");
    }
    else {
        printf("y가 x보다 작습니다.");
    }
    return 0;
}