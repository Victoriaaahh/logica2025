#include <stdio.h>
#include <string.h>

int vogal(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
    char entrada[51];
    char vogais[51];
    int i, j = 0;
    scanf("%s", entrada);
    
    for (i = 0; entrada[i] != '\0'; i++) {
        if (vogal(entrada[i])) {
            vogais[j++] = entrada[i];
        }
    }
    vogais[j] = '\0';

    int palindromo = 1;
    for (i = 0; i < j / 2; i++) {
        if (vogais[i] != vogais[j - i - 1]) {
            palindromo = 0;
            break;
        }
    }

    printf("%c\n", palindromo ? 'S' : 'N');
    return 0;
}
