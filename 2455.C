#include <stdio.h>

int main() {
    int P1, C1, P2, C2;

    scanf("%d %d %d %d", &P1, &C1, &P2, &C2);

    int lado_esquerdo = P1 * C1;
    int lado_direito = P2 * C2;

    if (lado_esquerdo == lado_direito) {
        printf("0\n");
    } else if (lado_esquerdo > lado_direito) {
        printf("-1\n");
    } else {
        printf("1\n");
    }

    return 0;
}
