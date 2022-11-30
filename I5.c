#include <stdio.h>

void array(int A[], int n, int *juft, int *toq){
    for(int i = 0; i < n; i++){
        if(A[i] % 2 == 0){
            *juft = i;
            break;
        }
    }

    for(int j = 0; j < n; j++){
        if (A[j] % 2 == 1){
            *toq = j;
            break;
        }
    }
}   

int main() {

    int A[] = {1, 2, 3, 4};
    int n = 4, juft_index, toq_index;

    array(A, n, &juft_index, &toq_index);

    printf("juft_index = %d\ntoq_index = %d\n", juft_index, toq_index);

return 0;    
}