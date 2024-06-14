#include <stdio.h>



int main (){
   
   int x = 0;

      scanf ("%d", &x);// entrada do valor
       
      while (x != 0)
      {
        if (x % 2 != 0 ){
         x = x ++;
        } 
        
        int soma = x + x + 2 + x + 4 + x + 6 + x + 8;
        printf("%d\n",soma);
              scanf ("%d", &x);// entrada do valor
      }
      
    return 0;

}
   
