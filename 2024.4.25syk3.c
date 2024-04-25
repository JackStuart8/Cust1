#include <stdio.h>

int main() {
    int n, i, max, max1;
    int a[10];
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    max = a[0];
    max1 = 0;
    for (i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
            max1 = i;
        }
    }

    printf("max=%d,in=%d\n", max, max1);

    return 0;
}
