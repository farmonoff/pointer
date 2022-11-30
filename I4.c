#include <stdio.h>

void change(int *a, int *b){
    int c = *a;
    *a = *b;
    *b = c;

}

int main() {

int a = 1, b = 2;    

change(&a, &b);
printf("a = %d\nb = %d\n", a, b);

return 0;    
}
