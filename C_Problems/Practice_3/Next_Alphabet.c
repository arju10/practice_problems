#include <stdio.h>
int main()
{
  char C;
  scanf("%c",&C);
  char next_char = C+1;
  if(C == 'z'){
    printf("a");
  }
  else{
    printf("%c",next_char);
  }
}