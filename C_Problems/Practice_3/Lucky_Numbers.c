#include <stdio.h>
int main()
{
  int N;
  scanf("%d",&N);

  int first_digit=N%10;
  int last_digit=N/10;

  
  if(first_digit%last_digit==0 || last_digit%first_digit==0){
    printf("YES\n");
  }
  else{
    printf("NO\n");
  }
}