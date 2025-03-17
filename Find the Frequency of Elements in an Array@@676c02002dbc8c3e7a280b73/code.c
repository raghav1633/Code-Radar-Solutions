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
int rs[N]={0};
for(int j=0;j<N;j++){
    rs[arr[j]]++;
}
int i=0;
while(rs[i]!=0){
    printf("%d %d\n",arr[i],rs[i]);}
    i++;
return 0;
}