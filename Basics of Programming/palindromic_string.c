// Author - Shantanu9
// Problem - basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/palindrome-check-2/description/
// C

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
  int i, n, j, flag;
  char str[100];
  scanf("%s\n",str);

  n = strlen(str);

  for (i = 0; i < n/2; i++) {
      // printf("%c\n", str[i] );
      // printf("%c\n", str[(n-1)-i]);
      if (str[i] == str[(n-1)-i]) {
        flag = 1;
      }
      else{
        printf("NO");
        exit(0);
      }

  }

  if (flag == 1) {
    printf("YES");
  }

  return 0;
}
