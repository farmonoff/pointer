#include <stdio.h>

void num(int *a, int *b, int *c){
    int x = *a; 
    if(*a > *b && *b > *c){
        *a = *c;
        *c = x;
    } else if(*b > *a && *a > *c){
        *a = *c;
        *c = *b;
        *b = x;
    } else if(*b < *a && *a < *c){
        *a = *b;
        *b = x;
    } else if(*a > *c && *c > *b){
        *a = *b;
        *b = *c;
        *c = x;
    } 
}

int main() {

    int a, b, c;
    printf("Ixtiyoriy 3 ta son kiriting>>>"); scanf("%d %d %d", &a, &b, &c);

    num(&a, &b, &c);

    printf("%d %d %d", a, b, c);

return 0;    
}