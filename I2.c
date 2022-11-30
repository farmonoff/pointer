#include<stdio.h>

void square(int *num){
    *num = (*num * *num);
}

int main() {

    int n;
    printf("n = "); scanf("%d", &n);

    square(&n);
    printf("%d\n", n);

return 0;    
}