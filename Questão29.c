#include <stdio.h>
#include <string.h>

void limparBuffer() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    char nome[100], endereco[100], telefone[100];
    int idade;

    printf("Digite o nome da pessoa: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0'; 

    printf("Digite o endereço da pessoa: ");
    fgets(endereco, sizeof(endereco), stdin);
    endereco[strcspn(endereco, "\n")] = '\0'; 

    printf("Digite o telefone da pessoa: ");
    fgets(telefone, sizeof(telefone), stdin);
    telefone[strcspn(telefone, "\n")] = '\0';

    printf("Digite a idade da pessoa: ");
    scanf("%d", &idade);
    limparBuffer(); 

    char frase[500];
    sprintf(frase, "Seu nome é %s, você tem %d anos, mora na rua %s e seu telefone é %s.", nome, idade, endereco, telefone);

    printf("%s\n", frase);

    return 0;
}
