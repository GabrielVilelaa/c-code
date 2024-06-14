#include <stdio.h>

double media = 0; // Inicializa media com zero
int idade, cont = 1; // Inicializa cont com 1 para evitar divisão por zero

int main(void) {
    scanf("%d", &idade); // Ler a primeira idade

    while (idade >= 0) { // Loop enquanto a idade for maior ou igual a zero
        media = (media * (cont - 1) + idade) / cont; // Atualiza a média com a nova idade
        cont++; // Incrementa o contador

        scanf("%d", &idade); // Lê a próxima idade
    }

    printf("%.2lf\n", media); // Imprime a média
    return 0;
}
