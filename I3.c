#include<stdio.h>

void change(int *a){
    *a = (*a % 10 * 10) + (*a / 10);  
}

int main() {

    int a = 48;

    change(&a);
    printf("%d\n", a);

return 0;
}