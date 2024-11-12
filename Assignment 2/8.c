#include <stdio.h>
int main() {
 int score earn[] = {77, 55, 95, 99, 99};
 int n = 5;
 int max = score earn[0], min = score earn[0];
 for (int i = 1; i < n; i++) {
 if (score earn[i] > max) {
 max = score earn[i];
 }
 if (score earn[i] < min) {
 min = score earn[i];
 }
 }
 printf("Maximum score: %d\n", max);
 printf("Minimum score: %d", min);
 return 0;
}

