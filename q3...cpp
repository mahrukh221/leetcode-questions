#include <stdio.h>

void transformArray(int nums[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        if(nums[i] % 2 == 0)
            nums[i] = 0;
        else
            nums[i] = 1;
    }
}

void sortArray(int nums[], int n) {
    int i, j, temp;
    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(nums[i] > nums[j]) {
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
}

int main() {
    int n, i;
    scanf("%d", &n);
    int nums[n];
    
    for(i = 0; i < n; i++)
        scanf("%d", &nums[i]);
    
    transformArray(nums, n);
    sortArray(nums, n);
    
    for(i = 0; i < n; i++)
        printf("%d ", nums[i]);
    
    return 0;
}
