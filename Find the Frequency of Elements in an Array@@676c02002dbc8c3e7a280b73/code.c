#include <stdio.h>
int main(){
int N;
scanf("%d",&N);
int arr[N];
for(int i=0;i<N;i++){
    int a;
    arr[i]=scanf("%d ",&a);
}
for(int i=0;i<N;i++){
    printf("%d",arr[i]);
}
int rs[N];
for(int i=0;i<N;i++){
    int cou=1;
    for(int j=0;j<N;j++){
        if(arr[i]==arr[j]){
            cou+=1;
        }
        rs[i]=cou;
    }
}
for(int i=0;i<N;i++){
    printf("%d %d\n",arr[i],rs[i]);
}
return 0;
}