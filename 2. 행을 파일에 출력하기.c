//해당 예제를 실행하기 전에 프로젝트 디렉터리에 lineInput.txt 파일이 존재해야 에러 메시지가 출력되지 않는다.

#include <stdio.h>
#include <stdlib.h>

#define LINE 30

int main(void) {
    FILE* fp1, *fp2;
    char line[LINE];

    fp1 = fopen("lineInput.txt", "r");

    if(fp1 == NULL) {
        printf("파일을 열 수 없습니다.\n");
        exit(1);
    }

    fp2 = fopen("linetarget.txt", "w");

    while(fgets(line, LINE, fp1) != NULL) 
        fputs(line, fp2);

    fclose(fp1);
    fclose(fp2);

    return 0;
    
}