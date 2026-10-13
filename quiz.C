#include <stdio.h>
#include <stdbool.h>

struct Answer {
    int A;
    int B;
    float C;
    int D;
    //This is a Mathematical Test

};
int main () {
    struct Answer answer;
    answer.A = 22;
    answer.B = 4;
    answer.C = 2.2;
    answer.D = 0;

    printf("What is 2+2?\n");
    printf("(A): %d\n", answer.A);
    printf("(B): %d\n", answer.B);
    printf("(C): %.1f\n", answer.C);
    printf("(D): %d\n", answer.D);

    printf("Enter your answer (A, B, C, or D): ");
    char userAnswer;
    scanf(" %c", &userAnswer);
    
    if (userAnswer == 'B') {
        printf("Your answer is correct!\n");
    } else {
        printf("That is incorrect. The correct answer is (B): 4.\n");
    }
    return 0;
}
