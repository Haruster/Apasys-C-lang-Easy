#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {

    FILE* fp;

    fpos_t pos; // fpos_t : 파일 위치 자료형으로 long을 재정의한 것

    char str[20];

    if((fp = fopen("example.c", "rb")) == NULL) {

        printf("파일이 열리지 않습니다. \n");
        exit(1);

    }

    fgetpos(fp, &pos);

    printf("pos = %ld \n", (long)pos);

    fread(str, sizeof(char), 20, fp);

    fgetpos(fp, &pos);

    printf("pos = %ld, str = %s \n", (long)pos, str);


    pos = 300;

    if(fsetpos(fp, &pos) != 0)
        printf("fsetpos 에러 발생 \n");

    fread(str, sizeof(char), 20, fp);

    fgetpos(fp, &pos);

    printf("pos = %ld, str = %.30s \n", (long)pos, str);

    fclose(fp);

    return 0;

}