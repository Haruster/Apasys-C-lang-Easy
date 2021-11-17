#include <stdio.h>

struct list {
    char name;
    char gender;
    int age;
};

int main(void) {
    struct list st1 = {'T', 'M', 25};

    printf("st1객체는 이름이 %c, 성별이 %c, 나이가 %d이다.\n", st1.name, st1.gender, st1.age);

    return 0;
}