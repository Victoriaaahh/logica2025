#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    int T;
    scanf("%d\n", &T);  
    for (int t = 0; t < T; t++) {
        char linha[201];
        int freq[26] = {0};
        int i, max = 0;
        fgets(linha, sizeof(linha), stdin);
        for (i = 0; linha[i] != '\0'; i++) {
            if (isalpha(linha[i])) {
                char ch = tolower(linha[i]);
                freq[ch - 'a']++;
                if (freq[ch - 'a'] > max) {
                    max = freq[ch - 'a'];
                }
            }
        }
        for (i = 0; i < 26; i++) {
            if (freq[i] == max) {
                printf("%c", i + 'a');
            }
        }
        printf("\n");
    }
    return 0;
}
