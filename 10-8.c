#include <stdio.h>

int SumArray(int* pA, int Size);

int main(void) {

    int a[] = {10, 5, 15, 25, 7};

    int Sum;

    Sum = SumArray(a, 5);

    printf("배열의 합 : %d \n", Sum);

    return 0;

}

int SumArray(int* pA, int Size) {

    int result = 0, i;

    for (i = 0; i < Size; i++) 

        result += pA[i];
        // result += *(pA + i);
        // result += *pA++;

    return result;

}