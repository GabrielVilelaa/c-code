#include <stdio.h>



int main (){
   double N1,N2,media;


    media = 0.0;
        scanf ("%lf",&N1);
    while (N1 < 0.0 || N1 > 10.0 )
     { 
            printf ("nota invalida\n");
               scanf ("%lf",&N1);

    } 
       scanf ("%lf",&N2);
    while (N2 < 0.0 || N2 > 10.0){
                    printf ("nota invalida\n");
                               scanf ("%lf",&N2);
    }
             media = (N1 + N2) / 2.0;
    
   printf ("media = %.2lf\n ",media );
   return 0;
}