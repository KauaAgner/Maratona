#include <stdio.h>
#include <stdlib.h>

int main() {
    int QuantidadeNumeros;
    printf("Digite a quantidade de números que seu chefe vai falar: ");
    scanf("%d", &QuantidadeNumeros);  

    int pilha[QuantidadeNumeros]; 
    int topo = -1;


    printf("\nDigite os números: ");
    for (int i = 0; i < QuantidadeNumeros; i++) {
        int Numero;
        scanf("%d", &Numero);

        if (Numero == 0 && topo >= 0) {
            topo--;
        } else if (Numero != 0) {
            topo++;
            pilha[topo] = Numero;
        }
    }

    int soma = 0;
    for (int i = 0; i <= topo; i++) {
        soma += pilha[i];
    }

    printf("\nResultado: %d\n", soma);

    return 0;
}