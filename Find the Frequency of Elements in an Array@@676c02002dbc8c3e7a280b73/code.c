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
int M=0;
for(int i=0;i<N;i++){
    int cou=0;
    M+=1;
    for(int j=0;j<N;j++){
        if(arr[i]==arr[j]){
            cou+=1;
            M-=1;
            printf("%d",M);
        }
        rs[i]=cou;
    }
}
for(int i=0;i<M;i++){
    printf("%d %d\n",arr[i],rs[i]);
}
return 0;
}