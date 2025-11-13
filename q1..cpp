#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int nums[n], runningSum[n];
    
    for(i = 0; i < n; i++)
        scanf("%d", &nums[i]);
    
    runningSum[0] = nums[0];
    for(i = 1; i < n; i++)
        runningSum[i] = runningSum[i - 1] + nums[i];
    
    for(i = 0; i < n; i++)
        printf("%d ", runningSum[i]);
    
    return 0;
}
