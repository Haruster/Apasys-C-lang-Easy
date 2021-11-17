#include <stdio.h>

// 전역 변수(main함수 밖에서 선언하며 어떤 변수 영역에서도 접근할 수 있는 변수) 

int hour;
int minute;
int minuteAdd;

// 사용자 정의 함수 선언

int counter() {

    minute += minuteAdd;
    hour += minute / 60;
    minute %= 60;
    hour %= 24;

}

int main(void) {

    printf("시를 입력해주세요 : ");
    scanf("%d", &hour);

    printf("분을 입력해주세요 : ");
    scanf("%d", &minute);

    printf("더할 분을 입력해주세요 : ");
    scanf("%d", &minuteAdd);
    
    counter(); // 사용자 정의 함수 실행

    printf("더해진 시간은 %d시 %d분입니다.", hour, minute);

    return 0;


}