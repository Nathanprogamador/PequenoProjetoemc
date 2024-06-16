#include <stdio.h>
#include <string.h>

int main() {
    char inputString[101];
    char targetChar;
    int charCount = 0;

    printf("Digite uma frase (até 100 caracteres): ");
    fgets(inputString, sizeof(inputString), stdin);

    inputString[strcspn(inputString, "\n")] = '\0';

    printf("Digite uma letra: ");
    scanf(" %c", &targetChar); 

    for (size_t i = 0; i < strlen(inputString); i++) {
        if (inputString[i] == targetChar) {
            charCount++;
        }
    }

    printf("A letra '%c' aparece %d vez(es) na frase.\n", targetChar, charCount);

    return 0;
}
