#include <stdio.h> //StandIO 전처리기 선언

int main(void) {

    int age;
    char name[10];
    
    printf("나이를 입력해주세요 : \n");
    scanf("%d", &age);

    printf("이름을 입력해주세요 : \n");
    scanf("%s", &name);

    printf("나이는 %d이고 이름은 %s입니다.\n");

    return 0;

}