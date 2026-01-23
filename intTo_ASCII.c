#include <stdio.h>
int main(){
  int charCode;

  printf("Enter number to print its char equivalent: ");
  scanf("%d",&charCode);

  if(charCode<0 || charCode>127){
    printf("You're out of bounds (0-127 allowed, extended ASCII unsupported)\n");
  }
  else{
    printf("ASCII: %c\n", charCode);
  }

  return 0;
}

