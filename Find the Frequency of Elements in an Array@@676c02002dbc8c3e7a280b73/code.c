#include <stdio.h>
int main(){
int N;
scanf("%d",&N);
int arr[N];
for(int i=0;i<N;i++){
    int a;
    arr[i]=scanf("%d",&a);
}
int rs[N];
for(int i=0;i<N;i++){
    int cou=1
    for(int j=0;j<N;j++){
        if(arr[i]==arr[j]){
            cou+=1;
        }
    }
}
for(int i=0;i<N;i++){
    printf("%d %d",arr[i],rs[i]);
}
return 0;
}