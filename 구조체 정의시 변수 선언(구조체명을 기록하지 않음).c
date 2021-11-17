#include <stdio.h>

struct //구조체 키워드를 정의하지 않음
{
    char name[20]; //문자 배열형 멤버
    char address[30]; //문자 배열형 멤버
    char tel[15]; //문자 배열형 멤버

    int age; //정수형 멤버
} st1; //st1이라는 구조체 변수를 지정

struct 
{
    char name[30]; //문자 배열형 멤버
    char address[40]; //문자 배열형 멤버
    char tel[20]; //문자 배열형 멤버

    int age; //문자 배열형 멤버
} st2;

// 새로운 구조체 변수를 선언힐 때마다 구조체 정의 부분을 다시 작성해야 한다.