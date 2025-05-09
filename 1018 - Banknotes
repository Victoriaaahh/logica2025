#include <stdio.h>
 
int main() {
    int N, restante;
    scanf("%d", &N);

    int notas[] = {100, 50, 20, 10, 5, 2, 1};
    int quantidade;
    int i;

    printf("%d\n", N);

    restante = N;

    for (i = 0; i < 7; i++) {
        quantidade = restante / notas[i];
        printf("%d nota(s) de R$ %d,00\n", quantidade, notas[i]);
        restante = restante % notas[i];
    }

    return 0;
}
