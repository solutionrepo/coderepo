// Author - Shantanu9
// Problem - basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/modify-the-string/
// C
#include<stdio.h>
#include<string.h>
int main(){
  char str[100];
  int i;
  scanf("%s\n", str);
  for ( i = 0; i < strlen(str); i++) {
    if (str[i]>=65&&str[i]<=90) {
      str[i]=str[i]+32;
    }
    else if ( str[i]>=97&&str[i]<=122) {
      str[i]=str[i]-32;
    }
  }
    printf("%s\n",str );
}
