#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffleArray(int array[], int size) {
    for (int i = size - 1; i > 0; i--) {
        
        int randomIndex = rand() % (i + 1);

        int temp = array[i];
        array[i] = array[randomIndex];
        array[randomIndex] = temp;
    }
}

int main() {
    int deckSize = 52;
    int deck[52];

    for (int i = 0; i < deckSize; i++) {
        deck[i] = i;
    }

    srand(time(NULL));

    shuffleArray(deck, deckSize);
 
    printf("Baralho Embaralhado:\n");
    for (int i = 0; i < deckSize; i++) {
        printf("%d ", deck[i]);
    }
    printf("\n");

    return 0;
}
