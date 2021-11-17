#include <stdio.h>

int main(void) {
    int a;
    int b;

    printf("a와 b의 값을 입력해주세요.\n");

    scanf("%d %d", &a, &b);

    printf("%d %d입니다.", a, b);

    return 0;
}
