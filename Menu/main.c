#include <stdio.h>
#include <stdlib.h>

void ex01(); void ex02(); void ex03(); void ex04();void ex05();void ex06();

int n; float s;

void procEx2(int, float*);
void procEx3();
float procEx4(int);
float procEx5();
float procEx6(int);

int main() {
    int exercicio;
    do {
        printf("\n\
Escolha a atividade:\n\
        Exercicio - 1\n\
        Exercicio - 2\n\
        Exercicio - 3\n\
        Exercicio - 4\n\
        Exercicio - 5\n\
        Exercicio - 6\n\
        Fechar - -1\n");
        printf("Selecione: ");
        scanf("%i", &exercicio);
        switch (exercicio)
        {
        case 1:
            ex01();
            break;
            
        case 2:
            ex02();
            break;
            
        case 3:
            ex03();
            break;
            
        case 4:
            ex04();
            break;
            
        case 5:
            ex05();
            break;

        case 6:
            ex06();
            break;
        
        default:
            break;
        }
    }while(exercicio != -1);
    return 0;
}

void ex01() {
    int n;
    printf("Insira o valor de N (sendo > 2): ");
    scanf("%i", &n);
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
    printf("Resultado: %.2f", resultado);
}

void ex02() {
    int n; float s;
    printf("Insira o valor de N (sendo > 2): ");
    scanf("%i", &n);
    procEx2(n, &s);
    printf("Resultado: %.2f", s);
}

void procEx2(int n, float * s ) {
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

void ex03() {
    printf("Insira o valor de N (sendo > 2): ");
    scanf("%i", &n);
    procEx3();
    printf("Resultado: %.2f", s);
}

void procEx3() {
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
    s = resultado;
}

void ex04() {
    int n;
    printf("Insira o valor de N (sendo > 2): ");
    scanf("%i", &n);
    printf("Resultado: %.2f", procEx4(n));
}

float procEx4(int n) {
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
    return resultado;
}

void ex05() {
    printf("Insira o valor de N (sendo > 2): ");
    scanf("%i", &n);
    printf("Resultado: %.2f", procEx5(n));
}

float procEx5() {
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
    return resultado;
}

void ex06() {
    int n;
    printf("Insira o valor de N (sendo > 2): ");
    scanf("%i", &n);
    float s = procEx6(n);
    printf("Resultado: %.2f", s);
}

float procEx6(int n) {
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
    return resultado;
}