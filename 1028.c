#include <stdio.h>

int mdc(int a, int b) {
    if (b == 0)
        return a;
    return mdc(b, a % b);
}

int main() {
    int N; 
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int F1, F2;
        scanf("%d %d", &F1, &F2);

        int resultado = mdc(F1, F2);
        printf("%d\n", resultado);
    }

    return 0;
}
