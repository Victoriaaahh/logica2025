#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int dividir(char *numero) {
    int tamanho = strlen(numero);
    int vaium = 0, digito, temp;
    char resultado[1010];
    int pos = 0, comecou = 0;

    for (int i = 0; i < tamanho; i++) {
        digito = numero[i] - '0';
        temp = vaium * 10 + digito;
        int digito_res = temp / 2;
        vaium = temp % 2;

        if (digito_res != 0 || comecou) {
            resultado[pos++] = digito_res + '0';
            comecou = 1;
        }
    }

    if (pos == 0) {
        resultado[pos++] = '0';
    }
    resultado[pos] = '\0';

    strcpy(numero, resultado); 
    return vaium; 
}

int contar_uns(char *numero) {
    int contagem = 0;
    char copia[1010];
    strcpy(copia, numero); 

    while (!(strlen(copia) == 1 && copia[0] == '0')) {
        contagem += dividir(copia); 
    }

    return contagem;
}

int main() {
    int testes;
    char numero[1010];
    scanf("%d", &testes);
    for (int i = 0; i < testes; i++) {
        scanf("%s", numero); 
        printf("%d\n", contar_uns(numero));
    }
    return 0;
}
