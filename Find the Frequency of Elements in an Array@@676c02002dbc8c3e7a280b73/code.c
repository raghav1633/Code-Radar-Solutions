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
for(int j=0;j<N;j++){
    rs[arr[i]]++;
}
int i=0;
while rs[i]!=0:
    printf("%d %d\n",arr[i],rs[i]);
    i++;
return 0;
}