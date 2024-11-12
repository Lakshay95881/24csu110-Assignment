#include <stdio.h>
int main() {
 int aray[] = {44,55,78,2,1};
 int n = 5;
 for (int i = 0; i < n; i++) {
 aray[i] += 5;
 }
 for (int i = 0; i < n; i++) {
 printf("%d ", aray[i]);
 }
 return 0;
}