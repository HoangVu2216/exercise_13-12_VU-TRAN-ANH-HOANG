#include <stdio.h>
#include <math.h>

int main() {
    int number;
    int check = 1;
        printf("Nhap mot so nguyen duong: ");
        scanf("%d", &number);

    if (number == 1) {
        check = 0;
    } 
	else {
        for (int i = 2; i <= sqrt(number); i++) {
            if (number % i == 0) {
                check = 0;
                break;
            }
        }
    }

    if (check == 1) {
        printf("%d la so nguyen to.\n", number);
    } else {
        printf("%d khong phai la so nguyen to.\n", number);
    }

    return 0;
}

