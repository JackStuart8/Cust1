#include <stdio.h>

int main() {
    int n, m, k, i, j, temp;
    printf("Enter n,m,k: ");
    scanf("%d %d %d", &n, &m, &k);

    int arr[10];
    printf("Enter 10 integers:");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = m - 1; i < k; i++) {
        for (j = i + 1; j < k; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
