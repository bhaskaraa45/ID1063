#include <stdio.h>
#include <stdlib.h>


/*
 * following calculates gcd(a,b) and 
 * returns the result
 */
int euclidGCD(int a, int b) {
  while(a!=0){
    int temp =a;
    a = b%a;
    b=temp;
  }

  return b;
}

int main() {
  int a,b;
  while (scanf("%d %d",&a, &b) != -1) {
    printf("%d\n", euclidGCD(a,b));
  }

  return 0;
}
