#include <stdio.h>

int main(void) {

    int age;
    char nickname[15];
    char name[10];

    print("나이, 닉네임, 이름을 입력해주세요. \n");
    scanf("%d %s %s", &age, &nickname, &name);

    printf("나이는 %d, 닉네임은%s, 이름은 %s입니다. \n", age, nickname, name);

    return 0;


}