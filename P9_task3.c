#include <stdio.h>

void swap_value(int n1, int n2) {
    int temp = n1;
    n1 = n2;
    n2 = temp;
    printf("value_num1 = %d, value_num2= %d \n", n1, n2);
}

void swap_reference(int *n1, int *n2) {
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
    printf("reference_num1 = %d, reference_num2 = %d \n", *n1, *n2);
}

int main() {
    int x = 10, y = 20;

    printf("Before swapping: x = %d, y = %d \n", x, y);

    swap_value(x, y);
    printf("After swap by value: x = %d, y = %d \n", x, y);

    swap_reference(&x, &y);
    printf("After swap by reference: x = %d, y = %d \n", x, y);


}
