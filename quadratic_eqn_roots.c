#include<stdio.h>
#include<math.h>

void positiveDetRoots(int a, int b, int c, float *root1, float *root2){
  *root1 = (-b + sqrt(b*b - 4*a*c))/(2*a);
  *root2 = (-b - sqrt(b*b - 4*a*c))/(2*a);
}
void zeroDetRoots(int a, int b, int c, float *root1){
  *root1 = (-b)/(2*a);
}
void negativeDetRoot(int a, int b, int c, float *root1){
  *root1 = (-b)/(2*a);
}
int main(){
  int a=5,b=10,c=5;
  float root1, root2, det;
  printf("Enter the variables a, b, and c:\n");
  scanf("%d%d%d", &a, &b, &c);

  det = b*b - 4*a*c;

  // using %g instead of %f because it removes trailing zeros
  if(det>0 ){
    positiveDetRoots(a,b,c,&root1,&root2);
    printf("2 Real roots found:\n");
    printf("x =  %g OR %g\n", root1, root2);
  }
  else if(det<0){
    negativeDetRoot(a,b,c,&root1);
    printf("No real roots, 2 Complex roots exist:\n");
    printf("x= %g +i sqrt(%g)/%d \nOR %g -i sqrt(%g)/%d\n ", root1, det, a*2, root1, det, a*2);

  }
  else{
    printf("Only 1 real root found:\n");
    zeroDetRoots(a,b,c,&root1);
    printf("x = %g\n",root1);
  }

  return 0;
}
