#include <stdio.h>
int main() {
 int array[] = {77, 29, 56, 97, 19};
 int n = 5, count = 0;
 for (int i = 0; i < n; i++) {
 if (array[i] == 99) {
 printf("99 found at index %d\n", i);
 count++;
 }
 }
 printf("Total students with 99: %d", count)

 return 0;
}