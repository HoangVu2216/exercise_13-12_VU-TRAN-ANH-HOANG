#include <stdio.h>
#include <math.h>

int check(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n, count = 0, SelectedNumber = 2;

    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    printf("%d so nguyen to dau tien la:\n", n);
    while (count < n) {
        if (check(SelectedNumber)) {
            printf("%d ", SelectedNumber);
            count++;
        }
        SelectedNumber++;
    }

    printf("\n");
    return 0;
}

