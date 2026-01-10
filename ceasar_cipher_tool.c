#include <stdio.h>
#include <string.h>
#define TEXT_SIZE 1024

int main(){
  int shift_count, len, i, caseType, option;
  char text[TEXT_SIZE];

    // caseType:
    // 0 = uppercase
    // 1 = lowercase
    // 2 = invalid / non-alphabet

  printf("Caesar Cipher\nEnter option:\n1. Cipher\n2. DeCipher\nOption: ");
  scanf("%d",&option);
  if(option!=1 && option!=2){
    printf("invalid option \n");
    return 1;
  }

  printf("Enter shift key: ");
  scanf("%d",&shift_count);
  printf("Enter Text to encrypt\n(%d chars max):\n", TEXT_SIZE);
  i = getchar(); //scanf is jank, flushes \n from stdin. i is initialized later anyways
  fgets(text, TEXT_SIZE, stdin);

  shift_count %= 26;
  len = strlen(text);

  // encryption logic
  if(option==1){
    for(i=0;i<len;i++){

      if (text[i] >= 65 && text[i] <= 90)
        caseType=0;
      else if (text[i] >= 97 && text[i] <= 122)
        caseType=1;
      else 
        caseType=2;

      if(caseType==0 || caseType==1)
        text[i] += shift_count;

      if((caseType == 0 && text[i] > 90) || (caseType == 1 && text[i] > 122))
        text[i] -= 26;
    }

    printf("\n%d-shift String: %s\n",shift_count, text);
  }
  else{
    
    for(i=0;i<len;i++){

      if (text[i] >= 65 && text[i] <= 90)
        caseType=0;
      else if (text[i] >= 97 && text[i] <= 122)
        caseType=1;
      else 
        caseType=2;

      if(caseType==0 || caseType==1)
        text[i] -= shift_count;

      if((caseType == 0 && text[i] < 65) || (caseType == 1 && text[i] < 97))
        text[i] += 26;
    }

    printf("\nRecovered String: %s\n", text);
  }

  return 0;
}
