#include <stdio.h>
int main() {
    printf("Cac so Armstrong co 3 chu so la:\n");
    for (int i = 100;i < 1000;i++) {
        int num_1 = i / 100;
        int num_2 = (i / 10) % 10;
        int num_3 = i % 10;
        int sum = num_1 * num_1 * num_1 + num_2 * num_2 * num_2 + num_3 * num_3 * num_3;
        if (sum == i) {
            printf("%d\n", i);
        }
    }

    return 0;
}

