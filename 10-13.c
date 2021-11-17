// 문자열의 크기 알아내기

#include <stdio.h>

int strleng(char *ch);

int main(void) {

    int len;

    char str[ ] = "c language and data structure";

    len = strleng(str);

    printf("문자열의 크기는 %d다. \n", len);

    return 0;

}

int strleng(char *ch) {

    int index;

    for(index = 0; *(ch + index) != '\0'; index++) 


    return 0;

}