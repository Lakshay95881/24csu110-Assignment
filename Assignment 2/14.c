#include <stdio.h>
int main() {
 int aaaaarr[] = {1, 15, 20, 99, 3, 18, 18, 45, 12, 9};
 int size = 10, i, j, flag = 0;
 for (i = 0; i < size; i++) {
 for (j = i + 1; j < size; j++) {
 if (aaaaarr[i] == aaaaarr[j]) {
 printf("%d ", aaaaarr[i]);
 flag = 1;
 break;
 }
 }
 for (j = 0; j < i; j++) {
 if (aaaaarr[i] == aaaaarr[j]) break;
 }
 }
 if (flag == 0) printf("-1\n");
 return 0;
}
