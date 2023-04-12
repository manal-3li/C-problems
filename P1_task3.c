#include <stdio.h>

#define MAX 100

int main() {
    int arr[MAX];
    int n, p,v;
    printf("Enter the num of the array: ", MAX);
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position: ", n + 1);
    scanf("%d", &p);

    printf("Enter the new element: ");
    scanf("%d", &v);

    for (int i = n - 1; i >= p - 1; i--) {
        arr[i + 1] = arr[i];
    }

    arr[p - 1] = v;
    n++;

    printf("The the new array : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
