#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE* fp;
    char ch;

    if((fp = fopen("basic.txt", "w")) == NULL) {
        printf("파일이 열리지 않습니다. \n");
        exit(1);
    }

    printf("문자 하나를 입력하세요.\n");

    ch = getchar();

    while(ch != 'q') {
        fputc(ch, fp);
        ch = getchar();
    }

    printf("파일 입력이 종료되었습니다. \n");

    return 0;
}