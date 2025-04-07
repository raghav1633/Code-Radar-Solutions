#include <stdio.h>
void fibonacciSeries(int n){
    int a=0,b=1,int temp;
    for(int i=0;i<=n;i++){
        print("%d ",a);
        temp=b;
        b=a+b;
        a=temp;
    }

}