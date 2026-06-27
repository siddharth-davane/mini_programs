#include <stdio.h>
int main(){
  int charCode, opt;

	printf("1. ASCII to char\n2. char to ASCII\nOption: ");
	scanf("%d",&opt);

	if(opt == 1){
		printf("Enter ASCII number : ");
		scanf("%d",&charCode);

		if(charCode<0 || charCode>127){
			printf("You're out of bounds (0-127 allowed)\n");
		}
		else{
			printf("ASCII: %c\n", charCode);
		}
	}
	else if(opt ==2 ){
		printf("Enter your character: ");
		scanf("%s",&charCode);
		printf("ASCII Number: %d",charCode);
	}
	else{
		printf("Invalid Option");
	}

  return 0;
}

