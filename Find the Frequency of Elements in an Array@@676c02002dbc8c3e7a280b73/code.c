#include <stdio.h>
int main(){
int N;
scanf("%d",&N);
int arr[N];
for(int i=0;i<N;i++){
   int a=scanf("%d ",&a);
   arr[i]=a;

}
for(int i=0;i<N;i++){
    printf("%d",arr[i]);
}

return 0;
}