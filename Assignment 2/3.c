#include <stdio.h>
int main() {
 int aray[] = {77, 49, 55, 99, 39};
 int n = 5;
 for (int i = 0; i < n; i++) {
 if (aray[i] == 99) {
 printf("First 99 found at index %d", i);
 break;
 }
 }
 return 0;
}