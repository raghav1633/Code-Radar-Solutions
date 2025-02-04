
#include <stdio.h>

int main() {
    int n;
        scanf("%d", &n);
            int arr[n];
                for (int i = 0; i < n; i++) {
                        scanf("%d", &arr[i]);
                            }
                                if (n < 2) {
                                        printf("-1\n");
                                                return 0;
                                                    }
                                                        int largest = arr[0];
                                                            int secondLargest = -1;
                                                                for (int i = 1; i < n; i++) {
                                                                        if (arr[i] > largest) {
                                                                                    secondLargest = largest;
                                                                                                largest = arr[i];
                                                                                                        } else if (arr[i] < largest && arr[i] > secondLargest) {
                                                                                                                    secondLargest = arr[i];
                                                                                                                            }
                                                                                                                                }
                                                                                                                                    if (secondLargest == -1) {
                                                                                                                                            printf("-1\n");
                                                                                                                                                } else {
                                                                                                                                                        printf("%d\n", secondLargest);
                                                                                                                                                            }
                                                                                                                                                                return 0;
                                                                                                                                                                }

                                                                                                                                                                