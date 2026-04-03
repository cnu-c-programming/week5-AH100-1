#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int size = 5;
    int index;

    scanf("%d\n", &index);

    if (index < 0 || index >= size) {
        printf("Error!\n");
        return 1;
    }

    printf("%d\n", *(arr + index));
    return 0;

}