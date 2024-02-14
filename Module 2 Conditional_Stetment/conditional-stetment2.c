#include <stdio.h>


int main(){
    int tk;

    scanf("%d", &tk);

    if(tk >= 5000){
      printf("go to Cox's Bazar\n");

      if(tk >= 10000){
         printf("go to Sent Marting");
      }else{
         printf("jabo nha");
      }
    }
    else{
      printf("jabo nha");
    }
    return 0;
}
