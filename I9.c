#include <stdio.h>

void num(int *m, int *n){
    *m / *n;
}

int main() {

    int m, n;
    printf("Ixtiyoriy 2 ta son kiriting>>>"); scanf("%d %d", &m, &n);

    num(&m, &n);
    printf("");

return 0;    
}
