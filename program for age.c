#include<stdio.h>

int main() {
   int age;
   printf("enter age");
   scanf("%d", &age);
   
   if(age >= 18) {
      printf("Adult \n");
   }
   else if (age > 10) {
      printf("Teenager \n");
   }
   else {
       printf("Child \n");
   }
   return 0;
}