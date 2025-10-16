#include <stdio.h>


 int main() {
   
    
   struct carta {

     char estado;
     char codigo;
     char nome;
     int populacao;
     float area;
     float pib;
     int pontos_turisticos;
     float densidade;
     float pib_per_capita;

   };

    struct carta carta1, carta2;

    //entrada de dados carta 1
    printf("===cadastro da carta 1 ===\n");
    printf("Estado: ");
    scanf("%[^\n]", carta1.estado);

    printf("codigo da carta: ");
    scanf("%[^\n]", carta1.codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta1.nome);
  
    printf("Populacao: ");
    scanf("%d", &carta1.populacao);

    printf("Area (km2): ");
    scanf("%f", &carta1.area);
   
    printf("PIB (em bilhões): ");
    scanf("%f", &carta1.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);
 
     
    //soma
    carta1.densidade = carta1.populacao / carta1.area;
    carta1.pib_per_capita = carta1.pib / carta1.populacao;

    
   //entrada de dados carta 2
    printf("\n=== cadastro da carta 2 ===\n");
    printf("Estado: ");
    scanf(" %[^\n]", carta2.estado);

    printf("Codigo da carta: ");
    scanf(" %[^\n]", carta2.codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta2.nome);

    printf("Populacao: ");
    scanf("%d", &carta2.populacao);

    printf("Area (km2): ");
    scanf("%f", &carta2.area);

    printf("PIB (em bilhões): ");
    scanf("%f", &carta2.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);


    //soma
    carta2.densidade = carta2.populacao / carta2.area;
    carta2.pib_per_capita = carta2.pib / carta2.populacao;
 
    //apresentação das somas
    printf("\n=== Informações Calculadas ===\n");
    printf("%s - Densidade: %.2f | PIB per capita: %.2f\n", carta1.nome, carta1.densidade, carta1.pib_per_capita);
    printf("%s - Densidade: %.2f | PIB per capita: %.2f\n", carta2.nome, carta2.densidade, carta2.pib_per_capita);
 

    //comparação
    printf("\n=== Comparação de cartas (Atributo: PIB per capita) ===\n");
    printf("Carta 1 - %s (%s): %.2f\n", carta1.nome, carta1.estado, carta1.pib_per_capita);
    printf("Carta 2 - %s (%s): %.2f\n", carta2.nome, carta2.estado, carta2.pib_per_capita);


    if (carta1.pib_per_capita > carta2.pib_per_capita) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", carta1.nome);
    } else if (carta2.pib_per_capita > carta1.pib_per_capita) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", carta2.nome);
    } else {
        printf("\nResultado: Empate!\n");
    }

    
    return 0;
}
