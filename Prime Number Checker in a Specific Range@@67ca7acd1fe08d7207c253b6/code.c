// Your code here...
int isPrime(int n){
    if(n<=1)return 0;
    if(n==2)return 1;
    for(int i=2;i<(n/2)+1;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
void printPrimesInRange(int a,int b){
    for(int i=a;i<=b;i++){
        if(isPrime(i))printf("%d ",i);
    }
}