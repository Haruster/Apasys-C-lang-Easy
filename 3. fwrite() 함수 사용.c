#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    FILE* fp;

    int n = 4000;

    if((fp = fopen("basic.txt", "wb")) == NULL) {
        printf("파일을 열 수 없습니다. \n");
        exit(1);
    }

    fwrite(&n, sizeof(int), 1, fp);

    fclose(fp);

    return 0;

}