#include <stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   
   if (1<=n && n<=1000){
    for (int i  = 1; i<=n; i++){
     printf("%d ",i);
     if(i%5 == 0){
       printf("Yes\n");
     }
     else{
       printf("No\n");
     }
   }
   }

}