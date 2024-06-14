#include <stdio.h>


int gremio,inter,opcao;
int wingremio,wininter,draw,cont= 0;

int main (){
    

    
   do {
      scanf ("%d %d",&gremio,&inter );
       printf ("grenal (1-sim 2-nao)\n");
         scanf ("%d",&opcao);
         cont ++;
         if (gremio > inter){
            wingremio++;
         }
         else if (inter > gremio)
         {
           wininter++;
         } 
         else if (gremio = inter)
         {
            draw++;
         }
         
   }while (opcao == 1);

   if (gremio > inter)
   {
         printf("%d grenais \n", cont);
         printf ("inter : %d\n", wininter);
         printf ("gremio : %d\n", wingremio);
         printf ("empate : %d\n", draw);
          printf ("gremio venceu mais ");
   } else if (inter > gremio)
   {
        printf("%d grenais \n", cont);
         printf ("inter : %d\n", wininter);
         printf ("gremio : %d\n", wingremio);
         printf ("empate : %d\n", draw);
          printf ("inter venceu mais ");
   }
   else if (inter = gremio )
   {
        printf("%d grenais \n", cont);
         printf ("inter : %d\n", wininter);
         printf ("gremio : %d\n", wingremio);
         printf ("empate : %d\n", draw);
          printf ("empate ");
   }
   return 0;
}