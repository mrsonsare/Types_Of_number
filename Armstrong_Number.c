//Armstrong Number
//A Number whose individuals cube sum is equal to the number
#include <stdio.h>
int main(void) {
  int n,s=0,r,m;
  printf("Enter the Number :");
 scanf("%d",&n);
  m = n ;
  while(n!=0){
    r = n%10;
    s = s + (r*r*r) ;
    n = n/10;
  }
  if(m==s){
    printf("Number is Armstrong");
  }
  else{
    printf("Number is not Armstrong");
    
  }
  return 0;
}
