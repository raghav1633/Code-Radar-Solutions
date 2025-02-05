#include <stdio.h>

int main() {
   int a,b;
   char opera;
   scanf("%d %d %c",&a,&b,&opera);
   if(opera=="+"){
    printf("%d",a+b);
   }
   else if(opera=="-"){
        printf("%d",a-b);

   }
   else if(opera=="*"){
        printf("%d",a*b);

   }
   else if(opera=="/"){
        printf("%d",a/b);

   }
    return 0;
}