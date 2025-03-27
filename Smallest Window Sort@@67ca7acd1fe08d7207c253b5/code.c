// Your code here...
#include <stdio.h>
int findUnsortedSubarray(int arr[],int n){
    int mx=0;int cn=0;int i=0;
    while(i<n-1){
        cn=0;
        while(arr[i]>arr[i+1]){
            cn++;i++
        }
        mx=mx>cn?mx:cn;
        i++;
    }
    return mx;
}