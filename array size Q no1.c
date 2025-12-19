#include <stdio.h>

void main() {
    int n;
    printf("Enter the size of an array n: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i <= (n - 1); i++) {
        printf("Enter the Ad value in %d: ", (i + 1));
        scanf("%d", &a[i]);
    }

    for (int j = 0; j <= (n - 1); j++) {
        for (int i = 0; i <= (n - 2); i++) {
            if (a[i] > a[i + 1]) {
                int c = a[i];
                a[i] = a[i + 1];
                a[i + 1] = c;
            }
        }
    }

    for (int i = 0; i <= (n - 1); i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }
}