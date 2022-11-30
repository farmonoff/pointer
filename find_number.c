#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_rand_nums(int arr[], int n){
    for(int i = 0; i < n; i++){
        arr[i] = 0 + rand() % n;
        printf("%d ", arr[i]);
    }
}

void buble_sort(int nums[],int n){
    int temp;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(nums[i] > nums[j]){
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
}

int binary_search(int nums[], int n, int x){
    int high = n - 1, low = 0;

    for(int low; low <= high;){

        int mid = (high + low) / 2;
        if(nums[mid] == x){
            return 1;
        } else if (nums[mid] > x){
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return 0;
}

void output(int nums[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", nums[i]);
    }
    puts("");
}

int main() {
    srand(time(NULL));

    int n, x;
    printf("n = "); scanf("%d", &n);

    int nums[n];
    fill_rand_nums(nums, n);

    printf("\nIzlash kerak bo'lgan sonni kiriting>>>"); scanf("%d ", &x);
    buble_sort(nums, n);
    output(nums, n);

    if(binary_search(nums, n, x)){
        printf("Siz izlagan son mavjud");
    } else {
        printf("Siz izlagan son mavjud emas");
    }
    puts("");

return 0;    
}