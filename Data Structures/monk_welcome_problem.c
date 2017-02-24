// Author - Shantanu9
// Problem - data-structures/arrays/1-d/practice-problems/algorithm/monk-and-welcome-problem/
// C

#include <stdio.h>
int main() {
  int n, i, arr[100000], arr1[100000];
  scanf("%d\n",&n);

  for (i = 0; i < n; i++) {
    scanf("%d\t",&arr[i] );
  }

  for (i = 0; i < n; i++) {
    scanf("%d\t",&arr1[i] );
  }
  for (i = 0; i < n; i++) {
    arr[i] = arr[i] + arr1[i];
    printf("%d ",arr[i]);

  }

  return 0;
}
