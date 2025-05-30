#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 1001

void primeira_passada(char *linha) {
    for (int i = 0; linha[i] != '\0'; i++) {
        if (isalpha(linha[i])) {
            linha[i] += 3;
        }
    }
}

void segunda_passada(char *linha) {
    int len = strlen(linha);
    for (int i = 0; i < len / 2; i++) {
        char temp = linha[i];
        linha[i] = linha[len - 1 - i];
        linha[len - 1 - i] = temp;
    }
}

void terceira_passada(char *linha) {
    int len = strlen(linha);
    for (int i = len / 2; i < len; i++) {
        linha[i] -= 1;
    }
}

int main() {
    int N;
    char linha[MAX];

    scanf("%d\n", &N);

    for (int i = 0; i < N; i++) {
        fgets(linha, MAX, stdin);

        linha[strcspn(linha, "\n")] = '\0';

        primeira_passada(linha);
        segunda_passada(linha);
        terceira_passada(linha);

        printf("%s\n", linha);
    }

    return 0;
}
