#include <stdio.h>

char opcao;

void opcao1 (){
    float media ,x ,y;
scanf ("%f" , &x);

while (x < 0.0 || x > 10.0){
    printf ("nota invalida\n");
scanf ("%f", &x );
}

    scanf ("%f" , &y);

while (y < 0.0 || y > 10.0){
    printf ("nota invalida\n");
scanf ("%f", &y );
}

media = (x + y) / 2;

 printf ("media = %.2f\n",media);

 while (opcao = '1' ){
    return main (scanf ("%c",&opcao));
 }
};

int main (){

   printf ("novo calculo (1-sim 2-nao)\n");
   scanf ("%c",&opcao);
   if (opcao == '1'){
       opcao1 ();
   }
   else if (opcao == '2'){
   }
return 0;
}


/// deu certo 