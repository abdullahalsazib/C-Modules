#include <stdio.h>

int main()
{
   
   char x;
   scanf("%c", &x);
   if (x >= '0' && x <= '9')
   {
      printf("Is DIGIT\n");
   }
   else
   {
      printf("ALPHA\n");
      if (x >= 'a' && x <= 'z')
      {
         printf("IS SMAlL\n");
      }
      else
      {
         printf("IS CAPTAL\n");
      }
   }

   return 0;
}
