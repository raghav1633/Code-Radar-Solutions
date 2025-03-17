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
    rs[arr[i]]++;
}
for(int i=0;i<N;i++){
    if(rs[i]!=0)printf("%d %d\n",arr[i],rs[i]);
}


return 0;
}