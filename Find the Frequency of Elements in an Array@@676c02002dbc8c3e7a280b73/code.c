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
    int cou=1;
    for(int j=1;j<N;j++){
        printf("%d %d %d\n",arr[i],arr[j],cou);
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