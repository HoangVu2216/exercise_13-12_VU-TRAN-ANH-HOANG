#include <stdio.h>

int main() {
    int number;
        printf("Nhap mot so nguyen duong: ");
        scanf("%d", &number);
    printf("Cac uoc cua %d la:\n", number);
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}

