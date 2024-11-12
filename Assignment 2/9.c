#include <stdio.h>
int main() {
 int marksss[] = {88, 09, 45, 19, 79};
 int n = 5;
 for (int i = 0; i < n; i++) {
 if ((i == 0 || marksss[i] >= marksss[i - 1]) && (i == n - 1 || marksss[i] 
>= marksss[i + 1])) {
 printf("Peak element: %d", marksss[i]);
 break;
 }
 }
 return 0;
}

