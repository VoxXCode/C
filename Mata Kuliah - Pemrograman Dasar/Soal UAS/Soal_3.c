

#include <stdio.h>
int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int *ptr;

    ptr = numbers;
    printf("First element: %d\n", *ptr);
    printf("Second element: %d\n", *(ptr + 1)); 
    printf("Array elements using pointers:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    return 0;
}