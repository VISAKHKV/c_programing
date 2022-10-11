#include<stdio.h>

int main() {
   int a, b, i, hcf;

  a = 36;// length of 1st piece
  b = 24;//length of 2nd piece
   for(i = 1; i <= a || i <= b; i++) {
   if( a%i == 0 && b%i == 0 )
      hcf = i;
   }

    printf("\nThe length of first piece is = %d", a);
    printf("\nThe length of second piece is = %d", b);
    printf("\nThe length of each piece will be = %d", hcf);
   
   return 0;
}