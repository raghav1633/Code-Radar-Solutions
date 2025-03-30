
#include <stdio.h>

int findUnsortedSubarray(int arr[], int n) {
    int l = 0, r = n - 1;

        // Find the first element that is out of order from the left
            while (l < n - 1 && arr[l] <= arr[l + 1]) {
                    l++;
                        }

                            // If the array is already sorted
                                if (l == n - 1) {
                                        return 0;
                                            }

                                                // Find the first element that is out of order from the right
                                                    while (r > 0 && arr[r] >= arr[r - 1]) {
                                                            r--;
                                                                }

                                                                    // Find the minimum and maximum values within the subarray arr[l...r]
                                                                        int minVal = arr[l], maxVal = arr[l];
                                                                            for (int i = l + 1; i <= r; i++) {
                                                                                    if (arr[i] < minVal) {
                                                                                                minVal = arr[i];
                                                                                                        }
                                                                                                                if (arr[i] > maxVal) {
                                                                                                                            maxVal = arr[i];
                                                                                                                                    }
                                                                                                                                        }

                                                                                                                                            // Extend the subarray to the left if necessary
                                                                                                                                                while (l > 0 && arr[l - 1] > minVal) {
                                                                                                                                                        l--;
                                                                                                                                                            }

                                                                                                                                                                // Extend the subarray to the right if necessary
                                                                                                                                                                    while (r < n - 1 && arr[r + 1] < maxVal) {
                                                                                                                                                                            r++;
                                                                                                                                                                                }

                                                                                                                                                                                    return r - l + 1;
                                                                                                                                                                                    }

                                                                                                                                                                                    int main() {
                                                                                                                                                                                        int t;
                                                                                                                                                                                            scanf("%d", &t);
                                                                                                                                                                                                while(t--) {
                                                                                                                                                                                                        int n;
                                                                                                                                                                                                                scanf("%d", &n);
                                                                                                                                                                                                                        int arr[10000];
                                                                                                                                                                                                                                for(int i = 0; i < n; i++) {
                                                                                                                                                                                                                                            scanf("%d", &arr[i]);
                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                            printf("%d\n", findUnsortedSubarray(arr, n));
                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                    return 0;
                                                                                                                                                                                                                                                                    }

                                                                                                                                                                                                                                                                    