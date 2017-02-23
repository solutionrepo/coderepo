// Author - Shantanu9
// Problem - basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/life-the-universe-and-everything
// C
#include <stdio.h>
#include <stdlib.h>
int main (){
  int t;
  while(1)
  {
    scanf("%d",&t);
    if(t==42)
    {
      exit(0);
    }
    else{
        printf("%d\n",t);
      }    
  }
return (0);
}
