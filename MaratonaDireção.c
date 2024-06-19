#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int Angulo(char* direcao) {
    if (strcmp(direcao, "norte") == 0) {
        return 0;
    } else if (strcmp(direcao, "leste") == 0) {
        return 90;
    } else if (strcmp(direcao, "sul") == 0) {
        return 180;
    } else if (strcmp(direcao, "oeste") == 0) {
        return 270;
    }
    return -1;
}


int CalcularAngulo(int angulo1, int angulo2) {
    int diferenca = abs(angulo1 - angulo2);
    if (diferenca > 180) {
        return 360 - diferenca;
    } else {
        return diferenca;
    }
}

int main() {
    char direcaoAmigo[10], direcaoOasis[10];
    printf("Digite a direção que o amigo está virado: ");
    scanf("%s", direcaoAmigo);
    printf("\nDigite a direção do Oásis: ");
    scanf("%s", direcaoOasis);

    int anguloAmigo = Angulo(direcaoAmigo);
    int anguloOasis = Angulo(direcaoOasis);

    if (anguloAmigo == -1 || anguloOasis == -1) {
        printf("\nDireção inválida\n");
        return 1;
    }

    int minangulo = CalcularAngulo(anguloAmigo, anguloOasis);
    printf("\n%d\n", minangulo);

    return 0;
}