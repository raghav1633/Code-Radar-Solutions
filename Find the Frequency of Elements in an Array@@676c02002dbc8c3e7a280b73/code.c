
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
        scanf("%d", &n);
            int *arr = (int *)malloc(n * sizeof(int));
                int *freq = (int *)calloc(n, sizeof(int));
                    int *visited = (int *)calloc(n, sizeof(int));
                        int count = 0;
                            for (int i = 0; i < n; i++) {
                                    scanf("%d", &arr[i]);
                                            visited[i] = 0;
                                                }
                                                    for (int i = 0; i < n; i++) {
                                                            if (visited[i])
                                                                        continue;
                                                                                int cnt = 1;
                                                                                        for (int j = i + 1; j < n; j++) {
                                                                                                    if (arr[i] == arr[j]) {
                                                                                                                    cnt++;
                                                                                                                                    visited[j] = 1;
                                                                                                                                                }
                                                                                                                                                        }
                                                                                                                                                                freq[count] = cnt;
                                                                                                                                                                        arr[count] = arr[i];
                                                                                                                                                                                count++;
                                                                                                                                                                                    }
                                                                                                                                                                                        for (int i = 0; i < count; i++) {
                                                                                                                                                                                                printf("%d %d\n", arr[i], freq[i]);
                                                                                                                                                                                                    }
                                                                                                                                                                                                        free(arr);
                                                                                                                                                                                                            free(freq);
                                                                                                                                                                                                                free(visited);
                                                                                                                                                                                                                    return 0;
                                                                                                                                                                                                                    }

                                                                                                                                                                                                                    