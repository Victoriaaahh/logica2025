#include <stdio.h>
#include <string.h>
#define MAX 51 

void decodificar(char *texto, int deslocamento) {
    for (int i = 0; texto[i] != '\0'; i++) {
        if (texto[i] >= 'A' && texto[i] <= 'Z') {
            texto[i] = ((texto[i] - 'A' - deslocamento + 26) % 26) + 'A';
        }
    }
}

int main() {
    int N, deslocamento;
    char texto[MAX];

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%s", texto);         
        scanf("%d", &deslocamento); 
        decodificar(texto, deslocamento);
        printf("%s\n", texto);
    }
    return 0;
}
