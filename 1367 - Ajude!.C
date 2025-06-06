#include <stdio.h>
#include <string.h>

#define MAX_PROBLEMS 26

typedef struct {
    int penalty;
    int solved;
} Problem;

int main() {
    int submissionCount;

    while (scanf("%d", &submissionCount) && submissionCount != 0) {
        Problem problems[MAX_PROBLEMS];
        for (int i = 0; i < MAX_PROBLEMS; i++) {
            problems[i].penalty = 0;
            problems[i].solved = 0;
        }

        int totalTime = 0;
        int totalSolved = 0;

        for (int i = 0; i < submissionCount; i++) {
            char id;
            int time;
            char result[10];

            scanf(" %c %d %s", &id, &time, result); 

            int index = id - 'A';  

            if (problems[index].solved)
                continue;  

            if (strcmp(result, "correct") == 0) {
                totalSolved++;
                totalTime += time + problems[index].penalty;
                problems[index].solved = 1;
            } else if (strcmp(result, "incorrect") == 0) {
                problems[index].penalty += 20;
            }
        }

        printf("%d %d\n", totalSolved, totalTime);
    }

    return 0;
}
