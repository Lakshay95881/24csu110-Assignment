#include <stdio.h>
int main() {
 int n = 5, cf = 1;
 for (int i = 0; i < n; i++) {
 for (int space = 1; space <= n - i; space++)
 printf(" ");
 for (int j = 0; j <= i; j++) {
 if (j == 0 || i == 0)
 cf = 1;
 else
 cf = cf * (i - j + 1) / j;
 printf("%4d", cf);
 }
 printf("\n");
 }
 return 0;
}