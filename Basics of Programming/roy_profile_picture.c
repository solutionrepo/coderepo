// Author - Shantanu9
// Problem - basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/roy-and-profile-picture/
// C
#include<stdio.h>
int main() {
  int l,w,h,n;
  scanf("%d\n",&l);
  scanf("%d\n",&n);
  while (n--) {
    scanf("%d%d\t",&w,&h);
    if ( w<l || h<l) {
      printf("UPLOAD ANOTHER\n");
    }
    else if( l == w || w == h){
      printf("ACCEPTED\n");
    }
    else{
      printf("CROP IT\n");
    }
  }
  return 0;
}
