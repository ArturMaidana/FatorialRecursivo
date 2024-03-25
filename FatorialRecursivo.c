#include <stdio.h>

int calcularFatorial(int numero) {
    int fat = 1;

    if (numero < 0) {
        printf("O fatorial não está definido para números negativos.\n");
        return -1;  
    }

    for (; numero > 1; numero--) {
        fat *= numero;
    }

    return fat;
}

int main() {
    int n;

    printf("Digite um número não negativo para calcular o fatorial: ");
    scanf("%d", &n);

    int resultado = calcularFatorial(n);

    if (resultado != -1) {
        printf("O fatorial é: %d\n", resultado);
    }

    return 0;
}
