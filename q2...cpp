#include <stdio.h>

void shuffleArray(int nums[], int n, int result[]) {
    int i, x = 0, y = n, k = 0;
    while(x < n && y < 2 * n) {
        result[k++] = nums[x++];
        result[k++] = nums[y++];
    }
}

int main() {
    int n, i;
    scanf("%d", &n);
    int nums[2 * n], result[2 * n];
    
    for(i = 0; i < 2 * n; i++)
        scanf("%d", &nums[i]);
    
    shuffleArray(nums, n, result);
    
    for(i = 0; i < 2 * n; i++)
        printf("%d ", result[i]);
    
    return 0;
}
