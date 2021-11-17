#include <stdio.h>
#include <stdlib.h>

struct students{

    char name[40];
    char address[40];
    int age;

};

typedef struct students student;

int main(void) {

    FILE* fp1;

    student st1 = {"홍길동", "서울", 30}, st2;

    if((fp1 = fopen("basic.txt", "w")) == NULL) {
        
        printf("파일을 열 수 없습니다. \n");
        exit(1);

    }

    fprintf(fp1, "%s %s %d \n", st1.name, st1.address, st1.age);

    fclose(fp1);

    if((fp1 = fopen("basic.txt", "r")) == NULL) {

        printf("파일을 열 수 없습니다. \n");
        exit(1);

    }

    fscanf(fp1, "%s %s %d \n", st2.name, st2.address, &st2.age);

    printf("이름 : %s, 거주지 : %s, 나이 : %d\n\n", st2.name, st2.address, st2.age);

    fclose(fp1);

    return 0;

}