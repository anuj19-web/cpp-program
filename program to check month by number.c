#include<stdio.h>

int main() {
  int month; //1-Jan; 2-Feb; 3-Mar; 4-Apr; 5-May; 6-Jun; 7-Jul; 8-Aug; 9-Sep; 10-Oct; 11-Nov; 12-Dec;
   printf("Enter month: ");
   scanf("%d", &month);

  switch(month) {
   case 1 : printf("January \n");
            break;
   case 2 : printf("February \n");
            break;
   case 3 : printf("March \n");
            break;
   case 4 : printf("April \n");
            break;
   case 5 : printf("May \n");
            break;
   case 6 : printf("June \n");
            break;
   case 7 : printf("July \n");
            break;
   case 8 : printf("August \n");
            break;
   case 9 : printf("September \n");
            break;
   case 10 : printf("October \n");
             break; 
   case 11 : printf("November \n");
            break;
   case 12 : printf("December \n");
            break;
   default : printf("Invalid month \n");
  }
   return 0; 
}