#include <stdio.h>

int main() {
    int opcao;
    int alcool = 0;
    int Gasolina = 0;
    int diesel = 0;

    printf("MUITO OBRIGADO\n");
    scanf("%d", &opcao);

    while (opcao >= 0 && opcao <= 4) {
        if (opcao == 1) {
            alcool++;
            printf("Alcool: %d\n", alcool);
        } else if (opcao == 2) {
            Gasolina++;
            printf("Gasolina: %d\n", Gasolina);
        } else if (opcao == 3) {
            diesel++;
            printf("Diesel: %d\n", diesel);
        } else {
            printf("Opção inválida. Fim.\n");
            break; // Encerra o loop
        }

        scanf("%d", &opcao); // Lê a próxima opção
    }

    return 0;
}
