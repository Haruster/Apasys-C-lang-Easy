#include <stdio.h>
#include <string.h>

int main(void) {

    char cmp1[40] = "C programming";
    char cmp2[ ] = "Java programming";
    char cmp3[ ] = "C programming";
    char str[ ] = "is easy";

    int length, i;

    length = strlen(cmp1);

    for(i = 0; i < length; i++) 

        printf("%c", cmp1[i]);

    printf("\n");

    printf("cmp1과 cmp2는 서로 %s\n", strcmp(cmp1, cmp2) ? "같지 않다." : "깉디");
    printf("cmp1과 cmp3은 서로 %s \n", strcmp(cmp1, cmp3) ? "같지 않다." : "같다");

    printf("cmp1에 cmp2를 복사하면\"%s\"이 출력된다.", strcpy(cmp1, cmp2));
    printf("cmp1에 str을 연결하면\"%s\" 가 출력된다.\n", strcat(cmp1, str));

    return 0;

}