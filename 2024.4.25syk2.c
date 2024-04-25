/*#include <stdio.h>

int main() {
    int n, m, k, i, temp;
    int a[10];

    printf("Enter n,m,k: ");
    scanf("%d %d %d", &n, &m, &k);

    printf("Enter %d integers:", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < (k - m)/2; i++) {
        temp = a[k];
        a[k] = a[m];
        a[m] = temp;
        k--;
        m++;
    }

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}*/
#include <stdio.h>
int main() {
    int n, m, k, i, temp;
    int a[10];
    printf("Enter n,m,k: ");
    scanf("%d %d %d", &n, &m, &k);
    printf("Enter %d integers:", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }


    for (i = 0; i <=(k - m)/2; i++) {
        temp = a[m + i];
        a[m + i] = a[k  - i];
        a[k - i] = temp;
    }

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
