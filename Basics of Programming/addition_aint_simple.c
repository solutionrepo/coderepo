#include<stdio.h>
#include<string.h>
int main() {
  int i, a, t, n;
  char str[100000];
  scanf("%d\n",&t);
  while (t--) {
    scanf("%s\n",str);
    n = strlen(str);
    for (i = 0; i < n; i++) {
      a = (str[i] + str[n-i-1]) - 96;
      if (a>122) {
        a = a - 26;
      }
      printf("%c",a);
    }
    printf("\n");
  }
  return 0;
}
