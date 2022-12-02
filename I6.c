#include <stdio.h>

int main() {

    int arr[5] = {1, 2, 3, 4, 5};

    int *sum = arr;
    for(int i = 1; i < 5; i++){
        *sum += arr[i];
    }

    printf("%d\n", *sum);

return 0;    
}