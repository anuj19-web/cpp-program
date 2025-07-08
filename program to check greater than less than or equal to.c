#include<stdio.h>
#include<math.h>
// program to check greater than equal to less than less than equal to greater than equal to
/*
operator are 
> if it is true than output is 1 or if it is false than output is 0
== if it is true than output is 1 or if it is false than output is 0
< if it is true than output is 1 or if it is false than output is 0
<= if it is true than output is 1 or if it is false than output is 0
>= if it is true than output is 1 or if it is false than output is 0
!= if a and b is equal than output is 0 or if a and b is not equal than output is 1
*/
int main() {
   int a, b;
   printf("enter a");
   scanf("%d", &a);

   printf("enter b");
   scanf("%d", &b);

   printf("%d \n", a > b);
   printf("%d \n", a == b);
   printf("%d \n", a < b);
   printf("%d \n", a <= b);
   printf("%d \n", a >= b);
   printf("%d \n", a != b);
   return 0;
}