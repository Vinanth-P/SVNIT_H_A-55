#include <stdio.h>

int main() {
    int votes[5] = {0};
    int spoiltBallots = 0;
    int ballot, totalBallots;

    
    printf("Enter the total number of ballots: ");
    scanf("%d", &totalBallots);

    
    printf("Enter the ballots (candidate numbers between 1 and 5):\n");
    for (int i = 0; i < totalBallots; i++) {
        scanf("%d", &ballot);

        
        if (ballot >= 1 && ballot <= 5) {
            votes[ballot - 1]++;  
        } else {
            spoiltBallots++;  
        }
    }

    
    printf("\nVote count for each candidate:\n");
    for (int i = 0; i < 5; i++) {
        printf("Candidate %d: %d votes\n", i + 1, votes[i]);
    }

    
    printf("\nNumber of spoilt ballots: %d\n", spoiltBallots);

    return 0;
}