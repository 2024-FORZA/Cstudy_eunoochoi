#include <stdio.h>

int main() {
    int num_div;
    scanf("%d", &num_div);

    int div[num_div];

    for (int i=0; i<num_div; i++) {
        scanf("%d", &div[i]);
    }

    int min_div=div[0];
    int max_div=div[0];

    for (int i=1; i<num_div; i++) {
        if (div[i]<min_div) {
            min_div=div[i];
        }
        if (div[i]>max_div) {
            max_div=div[i];
        }
    }

    int N = min_div*max_div;
    printf("%d\n", N);

    return 0;
}
