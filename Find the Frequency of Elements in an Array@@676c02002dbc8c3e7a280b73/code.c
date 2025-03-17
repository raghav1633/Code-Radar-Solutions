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
for(int i=0;i<N;i++){
    rs[i]=0;
}
for(int i=0;i<N;i++){
    if(rs[i]==1)continue;
    int count=1;
    for(int j=i+1;j<N;j++){
        if(arr[i]==arr[j]){count+=1;rs[j]=1;}
    }
    printf("%d %d\n",arr[i],count);
}

return 0;
}