// Your code here...
#include <stdio.h>
int main(){
int N;
scanf("%d",&N);int arr[N];
for(int i=0;i<N;i++)scanf("%d",&arr[i]);
int prod=arr[0]*arr[1];
for(int i=0;i<N;i++){
    for(int j=i+1;j<N;j++){
        int cp=arr[i]*arr[j];
        prod=prod>cp?prod:cp;
    }
}
printf("%d",prod);
return 0;
}