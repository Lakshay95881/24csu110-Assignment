#include <stdio.h>
int main() {
 int score[] = {78, 78, 53, 10, 99};
 int n = 5;
 for (int i = 0; i < n; i++) {
 if (score[i] % 2 == 0) {
 printf("%d is even\n", score[i]);
 } else {
 printf("%d is odd\n", score[i]);
 }
 }
 return 0;
}

