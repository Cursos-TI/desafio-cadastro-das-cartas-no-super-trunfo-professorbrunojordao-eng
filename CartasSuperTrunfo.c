#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa
int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
 
    // Carta 1 e Carta 2
    char Estado1[50], Estado2[50];
    char Codigo1[50], Codigo2[50];
    char Nome_da_Cidade1[50], Nome_da_Cidade2[50];
    int Populacao1, Populacao2;
    float Area1, Area2;
    float PIB1, PIB2;
    int Numero_de_Pontos_Turisticos1, Numero_de_Pontos_Turisticos2;
   
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Carta 1 \n");
    printf("Digite o Estado: \n");
    scanf("%s", &Estado1);
    printf("Digite o Codigo: \n");
    scanf("%s", &Codigo1);
    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &Nome_da_Cidade1);
    printf("Digite a População: \n");
    scanf("%d", &Populacao1);
    printf("Digite a Área em m2: \n");
    scanf("%f", &Area1);
    printf("Digite o PIB \n");
    scanf("%f", &PIB1);
    printf("Digite número de ponto turístico: \n");
    scanf("%d", &Numero_de_Pontos_Turisticos1);

    printf("Carta 2 \n");
    printf("Digite o Estado: \n");
    scanf("%s", &Estado1);
    printf("Digite o Codigo: \n");
    scanf("%s", &Codigo2);
    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &Nome_da_Cidade2);
    printf("Digite a População: \n");
    scanf("%d", &Populacao2);
    printf("Digite a Área em m2: \n");
    scanf("%f", &Area2);
    printf("Digite o PIB \n");
    scanf("%f", &PIB2);
    printf("Digite número de ponto turístico: \n");
    scanf("%d", &Numero_de_Pontos_Turisticos2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Carta 1: \n");
    printf("Estado: %s \n", Estado1);
    printf("Código: %s \n", Codigo1);
    printf("Nome da Cidade: %s \n", Nome_da_Cidade1);
    printf("População: %d \n", Populacao1);
    printf("Área: %f Km2 \n", Area1);
    printf("PIB: %f bilhões de Reais\n", PIB1);
    printf("Numero de Pontos Turísticos: %d \n", Numero_de_Pontos_Turisticos1);

    printf("Carta 2: \n");
    printf("Estado: %s \n", Estado2);
    printf("Código: %s \n", Codigo2);
    printf("Nome da Cidade: %s \n", Nome_da_Cidade2);
    printf("População: %d \n", Populacao2);
    printf("Área: %f Km2 \n", Area2);
    printf("PIB: %f bilhões de Reais\n", PIB2);
    printf("Numero de Pontos Turísticos: %d \n", Numero_de_Pontos_Turisticos2);

    return 0;
}
