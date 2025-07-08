#include<stdio.h>
#include<math.h>
// if divisible -> 0
// if not divisible -> 1
int main() {
  int a;
  printf("enter a");
  scanf("%d", &a);
   
  printf("%d", a % 2);
   return 0;
}