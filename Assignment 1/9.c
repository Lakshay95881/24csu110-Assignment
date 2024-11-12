#include <stdio.h>
int main() {
 int n = 5;
 for (int l = 1; l <= n; l++) {
 for (int k = 1; k <= l; k++) {
 printf("%d", k % 2);
 }
 for (int k = 1; k <= 2 * (n - l); k++) {
 printf(" ");
 }
 for (int k = 1; k <= l; k++) {
 printf("%d", k % 2);
 }
 printf("\n");
 }
 return 0;
}