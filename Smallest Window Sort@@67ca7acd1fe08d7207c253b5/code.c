// Your code here...
#include <stdio.h>
int findUnsortedSubarray(int arr[],int n){
    int min=n;int cn=0;int i=0;
    while(i<n-1){
        while(i<n-1 && arr[i]>arr[i+1]){
            if(cn==0){cn++;}
            cn++;i++;
        }
        min=min>cn?cn:min;
        cn=0;
        i++;
    }
    return min;
}