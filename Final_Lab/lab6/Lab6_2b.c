#include <stdio.h>
#include <stdlib.h>


/*
 * following calculates gcd(a,b) and 
 * returns the result
 */
int euclidGCD(int a, int b) {
    if (a == 0)
      return b;
      
  return euclidGCD(b % a, a);

}

int main() {
  int a,b;
  while (scanf("%d %d",&a, &b) != -1) {
    printf("%d\n", euclidGCD(a,b));
  }

  return 0;
}
