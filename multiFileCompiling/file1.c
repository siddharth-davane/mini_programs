#include <stdio.h>

void callFunctionFromAnotherFile(char message[10]); //declare prototype to use

int main(){
  callFunctionFromAnotherFile("Hello!");

  return 0;
}
