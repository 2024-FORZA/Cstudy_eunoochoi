#include <stdio.h>

int main() {
    long long A, B, C; 

    if (scanf_s("%lld %lld %lld", &A, &B, &C) != 3) {
        return 1;
    }

    long long sum = A + B + C;

    printf("%lld\n", sum);
   
    return 0;
}
