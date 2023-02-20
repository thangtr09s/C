#include <stdio.h>
#include <stdlib.h>

// Function to sort the array in ascending order
void sort_scores(double* scores, int num_scores) {
    for (int i = 0; i < num_scores - 1; i++) {
        for (int j = i + 1; j < num_scores; j++) {
            if (*(scores + j) < *(scores + i)) {
                double temp = *(scores + i);
                *(scores + i) = *(scores + j);
                *(scores + j) = temp;
            }
        }
    }
}

// Function to calculate the average score
double avg_score(double* scores, int num_scores) {
    double sum = 0;
    for (int i = 0; i < num_scores; i++) {
        sum += *(scores + i);
    }
    return sum / num_scores;
}

int main() {
    int num_scores;
    double* scores;

    // Get the number of test scores from the user
    printf("Enter the number of test scores: ");
    scanf("%d", &num_scores);

    // Allocate memory for the scores array
    scores = (double*)malloc(num_scores * sizeof(double));

    // Get the test scores from the user
    for (int i = 0; i < num_scores; i++) {
        double score;
        do {
            printf("Enter test score #%d: ", i+1);
            scanf("%lf", &score);
        } while (score < 0);  // Input validation: negative scores not allowed
        *(scores + i) = score;
    }

    // Sort the scores in ascending order
    sort_scores(scores, num_scores);

    // Calculate the average score
    double average = avg_score(scores, num_scores);

    // Print the sorted scores and average
    printf("\nSorted test scores:\n");
    for (int i = 0; i < num_scores; i++) {
        printf("%.2lf\n", *(scores + i));
    }
    printf("\nAverage test score: %.2lf\n", average);

    // Free the memory allocated for the scores array
    free(scores);

    return 0;
}
