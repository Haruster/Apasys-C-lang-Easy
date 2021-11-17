#include <stdio.h>

int main(void) {

    int i = 1; 

    int sum = 0;
    
    while (i <= 1000)
    {
        sum = sum + i;
        print("현재 i값 = %d \n", i);
        i++;

    }

    printf("1부터 1000까지의 합은 %d입니다.\n", sum);

    return 0;
    

}

// while문은 조건식이 loop안에 있다.