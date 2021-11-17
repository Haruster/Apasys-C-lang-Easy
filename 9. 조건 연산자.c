// 조건 연산자

#include <stdio.h>

int main(void) {

    int x = 50, y = 30;

    int result = (x < y) ? x : y; // 조건 연산자는 조건 ex) (x < y)의 값이 참이면 왼쪽(x)를 출력하고 틀리면 오른쪽(y)를 출력한다.

    print(result);

    return 0;

}