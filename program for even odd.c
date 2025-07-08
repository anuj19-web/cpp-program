#include<stdio.h>
#include<math.h>
// for even -> 1
// for odd -> 0s
int main() {
  int a;
  printf("enter a");
  scanf("%d", &a);
   
  printf("%d", a % 2 == 0 );
   return 0;
}