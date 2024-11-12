#include <stdio.h>
#include <math.h>
int main() {
 int n = 162, sum = 0, tmp, digits = 0, rem;
 tmp = n;
 while (tmp > 0) {
 digits++;
 tmp /= 10;
 }
 tmp = n;
 while (tmp > 0) {
 rem = tmp % 10;
 sum += pow(rem, digits);
 tmp /= 10;
 }
 if (sum == n) 
 printf("Armstrong\n");
 else 
 printf("Not Armstrong\n");
 return 0:
}