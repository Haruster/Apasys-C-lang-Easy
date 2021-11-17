#include <stdio.h>

struct people //
{
    char name[20]; // 문자 배열형 멤버
    char address[20]; //문자 배열형 멤버
    char tel[15]; //문자 배열형 멤버

    int age; // 정수형 멤버
} st1, st2; //기존에는 struct people st1, st2를 따로 선언했지만 이것을 통합해서 처리하였다. 
