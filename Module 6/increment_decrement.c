#include <stdio.h>

int main()
{
   for (int i = 1; i <= 5; i++)
   {
      // increment
      // i++ == i = i + 1;
      printf("%d\n", i); // 1 to 5
   }
   for (int i = 5; i > 0; i--)
   {
      // decrement
      // i-- == i = i - 1;
      printf("%d\n", i); // 5 to 1
   }

   // post increment == i++
   // pre increment == ++i
   //&&
   // post decrement == i--
   // pre decrement == --i

   // {
   //    //int i = 10;
   //   //int x = i++; // x = 10, i = 11;

         //int x = ++i; // x = 11; i = 11;

         //as seme in decrement i-- && --i;
   //   }

   return 0;
}
