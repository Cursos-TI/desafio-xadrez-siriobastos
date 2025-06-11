#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() {
    // --- Simulação do Movimento da Torre (usando for) ---
    printf("--- Movimento da Torre ---\n");
    // Define o número de casas que a torre irá se mover
    int casasTorre = 5;
    // Loop 'for' para simular o movimento da torre cinco casas para a direita
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n"); // Imprime a direção do movimento a cada casa percorrida
    }
    printf("\n"); // Adiciona uma linha em branco para melhor legibilidade

    // --- Simulação do Movimento do Bispo (usando while) ---
    printf("--- Movimento do Bispo ---\n");
    // Define o número de casas que o bispo irá se mover
    int casasBispo = 5;
    // Variável de controle para o loop 'while'
    int contadorBispo = 0;
    // Loop 'while' para simular o movimento do bispo cinco casas na diagonal para cima e à direita
    while (contadorBispo < casasBispo) {
        printf("Cima, Direita\n"); // Imprime a combinação de direções para a diagonal
        contadorBispo++; // Incrementa o contador a cada iteração
    }
    printf("\n"); // Adiciona uma linha em branco para melhor legibilidade

    // --- Simulação do Movimento da Rainha (usando do-while) ---
    printf("--- Movimento da Rainha ---\n");
    // Define o número de casas que a rainha irá se mover
    int casasRainha = 8;
    // Variável de controle para o loop 'do-while'
    int contadorRainha = 0;
    // Loop 'do-while' para simular o movimento da rainha oito casas para a esquerda
    do {
        printf("Esquerda\n"); // Imprime a direção do movimento
        contadorRainha++; // Incrementa o contador a cada iteração
    } while (contadorRainha < casasRainha);
    printf("\n"); // Adiciona uma linha em branco para melhor legibilidade

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso

    // --- Simulação do Movimento da Torre (usando for) ---
    printf("--- Movimento da Torre ---\n");
    // Define o número de casas que a torre irá se mover
    int casasTorre = 5;
    // Loop 'for' para simular o movimento da torre cinco casas para a direita
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n"); // Imprime a direção do movimento a cada casa percorrida
    }
    printf("\n"); // Adiciona uma linha em branco para melhor legibilidade

    // --- Simulação do Movimento do Bispo (usando while) ---
    printf("--- Movimento do Bispo ---\n");
    // Define o número de casas que o bispo irá se mover
    int casasBispo = 5;
    // Variável de controle para o loop 'while'
    int contadorBispo = 0;
    // Loop 'while' para simular o movimento do bispo cinco casas na diagonal para cima e à direita
    while (contadorBispo < casasBispo) {
        printf("Cima, Direita\n"); // Imprime a combinação de direções para a diagonal
        contadorBispo++; // Incrementa o contador a cada iteração
    }
    printf("\n"); // Adiciona uma linha em branco para melhor legibilidade

    // --- Simulação do Movimento da Rainha (usando do-while) ---
    printf("--- Movimento da Rainha ---\n");
    // Define o número de casas que a rainha irá se mover
    int casasRainha = 8;
    // Variável de controle para o loop 'do-while'
    int contadorRainha = 0;
    // Loop 'do-while' para simular o movimento da rainha oito casas para a esquerda
    do {
        printf("Esquerda\n"); // Imprime a direção do movimento
        contadorRainha++; // Incrementa o contador a cada iteração
    } while (contadorRainha < casasRainha);
    printf("\n"); // Adiciona uma linha em branco para melhor legibilidade

    // --- Simulação do Movimento do Cavalo (usando loops aninhados: for e while) ---
    printf("--- Movimento do Cavalo ---\n");

    // Define o número de casas para cada etapa do movimento do Cavalo
    int casasParaBaixo = 2;
    int casasParaEsquerda = 1;

    // Loop externo 'for' para as duas casas para baixo
    // Este loop controla a primeira parte do movimento em "L" do Cavalo.
    for (int i = 0; i < casasParaBaixo; i++) {
        printf("Baixo\n"); // Imprime a direção "Baixo" a cada passo
    }

    // Loop interno 'while' para a uma casa para a esquerda
    // Este loop controla a segunda parte (perpendicular) do movimento em "L".
    int contadorEsquerda = 0;
    while (contadorEsquerda < casasParaEsquerda) {
        printf("Esquerda\n"); // Imprime a direção "Esquerda"
        contadorEsquerda++; // Incrementa o contador
    }
    printf("\n"); // Adiciona uma linha em branco para melhor legibilidade

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
