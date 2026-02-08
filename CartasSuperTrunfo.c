    #include <stdio.h>
    #include <stdlib.h>
    int main()
    {
        char estado1;
        char codigoEstado[5], nomeCidade[20];
        int populacao1, numPontosTuristicos1;
        float areaKm1;
        float pib1;

        char estado2;
        char codigoEstado2[5], nomeCidade2[20];
        int populacao2, numPontosTuristicos2;
        float areaKm2;
        float pib2;

        printf("INSIRA OS DADOS DA PRIMEIRA CARTA\n");
        printf("Digite a letra do estado: (de A a H) \n");
        scanf(" %c", &estado1);

        printf("Digite o código da carta: \n");
        scanf("%s", codigoEstado);

        printf("Digite o nome da cidade: \n");
        scanf("%s", nomeCidade);

        printf("Digite a quantidade da população: \n");
        scanf("%d", &populacao1);

        printf("Digite a quantidade de pontos turísticos da cidade: \n");
        scanf("%d", &numPontosTuristicos1);

        printf("Digite a área em quilômetros quadrados da cidade: \n");
        scanf("%f", &areaKm1);

        printf("Digite o PIB da cidade: \n");
        scanf("%f", &pib1);

        printf("INSIRA OS DADOS DA SEGUNDA CARTA\n");
        printf("Digite a letra do estado: (de A a H) \n");
        scanf(" %c", &estado2);

        printf("Digite o código da carta: \n");
        scanf("%s", codigoEstado2);

        printf("Digite o nome da cidade: \n");
        scanf("%s", nomeCidade2);

        printf("Digite a quantidade da população: \n");
        scanf("%d", &populacao2);

        printf("Digite a quantidade de pontos turísticos da cidade: \n");
        scanf("%d", &numPontosTuristicos2);

        printf("Digite a área em quilômetros quadrados da cidade: \n");
        scanf("%f", &areaKm2);

        printf("Digite o PIB da cidade: \n");
        scanf("%f", &pib2);

        printf("DADOS DA PRIMEIRA CARTA\nCarta 1\n");
        printf("Estado: %c\n", estado1);
        printf("Codigo: %s\n", codigoEstado);
        printf("Nome da cidade: %s\n", nomeCidade);
        printf("Populacao: %d\n", populacao1);
        printf("Area: %.2f\n", areaKm1);
        printf("PIB: %.2f\n", pib1);
        printf("Quantidade de pontos turisticos: %d\n", numPontosTuristicos1);

        printf("DADOS DA SEGUNDA CARTA\nCarta 2\n");
        printf("Estado: %c\n", estado2);
        printf("Codigo: %s\n", codigoEstado2);
        printf("Nome da cidade: %s\n", nomeCidade2);
        printf("Populacao: %d\n", populacao2);
        printf("Area: %.2f\n", areaKm2);
        printf("PIB: %.2f\n", pib2);
        printf("Quantidade de pontos turisticos: %d\n", numPontosTuristicos2);

        return 0;
    }