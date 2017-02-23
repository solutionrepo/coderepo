// Author - Shantanu9
// Problem - basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/count-digits-1/
// C
#include<stdio.h>
#include<string.h>
int main() {
  int a = 0, b = 0 ,c = 0 ,d = 0, e = 0, f = 0,g = 0,h = 0,i = 0,j = 0,k;
  char str[100];
  scanf("%s\n",str);
  for ( k = 0; k < strlen(str); k++ ) {
    if (str[k] == '1') {
      a++;
    } else if (str[k] == '2') {
      b++;
    } else if (str[k] == '3') {
      c++;
    } else if (str[k] == '4') {
      d++;
    } else if (str[k] == '5') {
      e++;
    } else if (str[k] == '6') {
      f++;
    } else if (str[k] == '7') {
      g++;
    } else if (str[k] == '8') {
      h++;
    } else if (str[k] == '9') {
      i++;
    } else if (str[k] == '0') {
      j++;
    }
  }
  printf("0 %d\n",j );
  printf("1 %d\n",a );
  printf("2 %d\n",b );
  printf("3 %d\n",c );
  printf("4 %d\n",d );
  printf("5 %d\n",e );
  printf("6 %d\n",f );
  printf("7 %d\n",g );
  printf("8 %d\n",h );
  printf("9 %d\n",i );
  return 0;
}
