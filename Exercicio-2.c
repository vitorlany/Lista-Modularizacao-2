#include <stdio.h>
#include <stdlib.h>

void procedimento(int, float*);

int main()
{   
    int n; float s;
    printf("Insira o valor de N (sendo > 2): ");
    scanf("%i", &n);
    procedimento(n, &s);
    printf("Resultado: %.2f", s);
    return 0;
}

void procedimento(int n, float * s ) {
    float denominador = 2;
    float ultimo = 0; float penultimo = 0; float novo = 1;
    int sinal = 0; int soma = 1;
    float resultado = 0;
    for (int i = 0; i < n; i++) {
        // Calculo
        float calculo = novo/denominador;
        printf("%.0f/%.0f = %.2f\n", novo, denominador, calculo);

        // Soma
        if (i > 0) {
            if (soma == 1) {
                resultado += calculo;
                soma--;
            } else {
                resultado -= calculo;
                soma++;
            }
        } else {
            resultado = calculo;
        }

        // Proximo Numero
        penultimo = ultimo;
        ultimo = novo;
        novo = ultimo + penultimo;
        denominador += 2;
    }
    *s = resultado;
}