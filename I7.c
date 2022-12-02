#include <stdio.h>

int main() {

    int arr[6] = {1, 2, 3, 4, 5};

    int *change = arr + 5;
    
    *change = arr[0];
    arr[0] = arr[4];
    arr[4] = *change;

    for(int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }

return 0;    
}