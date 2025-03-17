#include <stdio.h>
int main(){
int N;
scanf("%d",&N);
int arr[N];
for(int i=0;i<N;i++){
    int a;
    scanf("%d ",&a);
    arr[i]=a;
}

int rs[N];
int M=N
for(int i=0;i<N;i++){
    int cou=1;
    for(int j=i+1;j<N;j++){
        if(arr[i]==arr[j]){
            cou+=1;
            M-=1;
        }     
        rs[i]=cou;
    }
}
for(int i=0;i<M;i++){
    printf("%d %d\n",arr[i],rs[i]);
}
return 0;
}