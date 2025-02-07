
    #include <stdio.h>
        
            int main() {
                    int n;
                            scanf("%d", &n);
                                    int pos = 0;
                                            while ((n & 1) == 0) {
                                                        n = n >> 1;
                                                                    pos++;
                                                                            }
                                                                                    printf("%d\n", pos);
                                                                                            return 0;
                                                                                                }

                                                                                                