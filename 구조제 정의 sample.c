#include <stdio.h>

struct books //books라는 구조체 정의 (books는 변수가 아니라 키워드이다.)
{
    char title[40]; //문자 배열형 멤버
    char people[40]; //문자 배열형 멤버
    char age[40]; //문자 배열형 멤버

    int page; //정수형 멤버
    int price; //정수형 멤버
}; //반드시 뒤에 세미콜론을 붙인다.