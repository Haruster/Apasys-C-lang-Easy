#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {

    FILE* fp;

    char str[10];

    if((fp = fopen("data.txt", "wb")) == NULL) {

        printf("파일을 열 수 없습니다. \n");
        exit(1);

    }

    fprintf(fp, "abcdefghij");
    fclose(fp);

    if((fp = fopen("data.txt", "rb")) == NULL) {
        
        printf("파일을 열 수 없습니다.\n");
        exit(1);
    
    }

    fgets(str, 11, fp);

    printf("str 문장 출력 : %s\n\n", str);

    fseek(fp, 4L, SEEK_SET);
    fgets(str, 3, fp);
    printf("4번째부터 2글자 출력 : %s\n", str);

    fseek(fp, -3L, SEEK_CUR);
    fgets(str, 3, fp);
    printf("현 위치의 3글자 앞에서부터 2글자 출력 : %s\n", str);

    fseek(fp, -9L, SEEK_END);
    fgets(str, 5, fp);
    printf("맨 뒤에서 9글자 앞에서부터 4글자 출력 : %s\n", str);

    fclose(fp);

    return 0;

}