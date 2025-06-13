#include <stdio.h>
#define SIZE 9

int check_sudoku(int sudoku[SIZE][SIZE]) {
    int i, j, k;
    
    for (i = 0; i < SIZE; i++) {
        int freq[10] = {0};
        for (j = 0; j < SIZE; j++) {
            int val = sudoku[i][j];
            if (val < 1 || val > 9 || freq[val]) return 0;
            freq[val] = 1;
        }
    }

    for (j = 0; j < SIZE; j++) {
        int freq[10] = {0};
        for (i = 0; i < SIZE; i++) {
            int val = sudoku[i][j];
            if (val < 1 || val > 9 || freq[val]) return 0;
            freq[val] = 1;
        }
    }

    for (int blockRow = 0; blockRow < SIZE; blockRow += 3) {
        for (int blockCol = 0; blockCol < SIZE; blockCol += 3) {
            int freq[10] = {0};
            for (i = blockRow; i < blockRow + 3; i++) {
                for (j = blockCol; j < blockCol + 3; j++) {
                    int val = sudoku[i][j];
                    if (val < 1 || val > 9 || freq[val]) return 0;
                    freq[val] = 1;
                }
            }
        }
    }

    return 1; 
}

int main() {
    int n, matriz[SIZE][SIZE];
    scanf("%d", &n);

    for (int inst = 1; inst <= n; inst++) {
        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
                scanf("%d", &matriz[i][j]);
            }
        }

        printf("Instancia %d\n", inst);
        if (check_sudoku(matriz)) {
            printf("SIM\n");
        } else {
            printf("NAO\n");
        }
        printf("\n");
    }
    return 0;
}
