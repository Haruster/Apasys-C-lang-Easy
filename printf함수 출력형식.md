# printf함수 출력형식

- %d : 부호 있는 10진수 정수(int, long, char)
- %ld 부호 있는 10진수 정수(long)
- %lld 부호 있는 10진수 정수(long long)
- %u : 부호 없는 10진수 정수(unsigned int)
- %o : 부호 없는 8진수 정수(unsigned int)
- %x, %X : 부호 없는 16진수 정수(unsigned int)

## 실수형 출력형식
- %f : 10진수 부동 소수점 실수(float, double)
- %lf : 10진수 부동 소수점 실수(long double)
- %e, %E : e 혹은 E방식의 부동소수점 실수(float, double)
- %g, %G : 출력 값에 따라 %f와 %e중 선택(float, double)

## 문자형 출력형식
%c : 문자 출력 (char, short, int)
%s : 문자열 출력(char, char *)

## 주소 출력형식
%p : 포인터 주소 값    // ex) void *