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

// --- Funções Recursivas para Movimento das Peças ---

/**
 * @brief Simula o movimento da Torre recursivamente.
 * A Torre se move 'casas' vezes para a direita.
 * @param casas O número de casas restantes para mover.
 */
    void moverTorreRecursivo(int casas) {
    // Caso base: se não houver mais casas para mover, a recursão para.
    if (casas <= 0) {
        return;
    }
    printf("Direita\n"); // Imprime a direção do movimento
    // Chamada recursiva para mover a próxima casa
    moverTorreRecursivo(casas - 1);
}

/**
 * @brief Simula o movimento do Bispo recursivamente com loops aninhados.
 * O Bispo se move 'casas' vezes na diagonal para cima e à direita.
 * O loop externo controla o movimento vertical e o interno o horizontal.
 * @param casas O número de movimentos diagonais restantes.
 */
void moverBispoRecursivoComLoops(int casas) {
    // Caso base: se não houver mais movimentos diagonais, a recursão para.
    if (casas <= 0) {
        return;
    }

    // Loop externo para o movimento vertical (para cima)
    for (int i = 0; i < 1; i++) { // Este loop executa uma vez para cada "passo" diagonal
        printf("Cima"); // Imprime a primeira parte da diagonal
        // Loop interno para o movimento horizontal (para a direita)
        for (int j = 0; j < 1; j++) { // Este loop também executa uma vez para cada "passo" diagonal
            printf(", Direita\n"); // Imprime a segunda parte da diagonal e uma nova linha
        }
    }
    // Chamada recursiva para o próximo movimento diagonal
    moverBispoRecursivoComLoops(casas - 1);
}

/**
 * @brief Simula o movimento da Rainha recursivamente.
 * A Rainha se move 'casas' vezes para a esquerda.
 * @param casas O número de casas restantes para mover.
 */
void moverRainhaRecursivo(int casas) {
    // Caso base: se não houver mais casas para mover, a recursão para.
    if (casas <= 0) {
        return;
    }
    printf("Esquerda\n"); // Imprime a direção do movimento
    // Chamada recursiva para mover a próxima casa
    moverRainhaRecursivo(casas - 1);
}

int main() {
    // --- Simulação do Movimento da Torre (usando recursividade) ---
    printf("--- Movimento da Torre ---\n");
    // Define o número de casas que a torre irá se mover
    int casasTorre = 5;
    moverTorreRecursivo(casasTorre); // Chama a função recursiva para mover a torre
    printf("\n"); // Adiciona uma linha em branco para melhor legibilidade

    // --- Simulação do Movimento do Bispo (usando recursividade e loops aninhados) ---
    printf("--- Movimento do Bispo ---\n");
    // Define o número de casas que o bispo irá se mover na diagonal
    int casasBispo = 5;
    moverBispoRecursivoComLoops(casasBispo); // Chama a função recursiva com loops aninhados para mover o bispo
    printf("\n"); // Adiciona uma linha em branco para melhor legibilidade

    // --- Simulação do Movimento da Rainha (usando recursividade) ---
    printf("--- Movimento da Rainha ---\n");
    // Define o número de casas que a rainha irá se mover
    int casasRainha = 8;
    moverRainhaRecursivo(casasRainha); // Chama a função recursiva para mover a rainha
    printf("\n"); // Adiciona uma linha em branco para melhor legibilidade

    // --- Simulação do Movimento do Cavalo (usando loops aninhados complexos) ---
    printf("--- Movimento do Cavalo ---\n");

    // Define as etapas do movimento do Cavalo
    int passosVerticais = 2;   // Duas casas para cima
    int passosHorizontais = 1; // Uma casa para a direita

    // Variáveis de controle para os loops aninhados
    int i, j;
    int movimentoConcluido = 0; // Flag para controlar a conclusão do movimento

    // Loop externo para a movimentação vertical (para cima)
    for (i = 0; i < passosVerticais; i++) {
        printf("Cima\n"); // Imprime a direção "Cima"
        // Se o movimento vertical for concluído, não precisamos continuar o loop externo
        // mas precisamos ainda fazer o movimento horizontal.
        if (i == passosVerticais - 1) {
            break; // Sai do loop externo após as duas casas para cima
        }
    }

    // Loop interno para a movimentação horizontal (para a direita)
    // Este loop usa uma condição combinada e 'continue' para demonstrar complexidade.
    for (j = 0; j < passosHorizontais + 5 && !movimentoConcluido; j++) { // Adiciona +5 para tornar a condição mais "complexa" e usar 'break'
        if (j < passosHorizontais) { // Garante que a impressão ocorra apenas para os passos necessários
            printf("Direita\n"); // Imprime a direção "Direita"
        } else {
            // Usa 'continue' para pular iterações desnecessárias após o movimento horizontal ser feito,
            // mas mantendo o loop ativo para a condição 'break'
            continue;
        }

        // Condição para finalizar o movimento do Cavalo.
        // Garante que ambos os passos (vertical e horizontal) foram impressos.
        if (i == passosVerticais - 1 && j == passosHorizontais - 1) {
            movimentoConcluido = 1; // Define a flag como verdadeira
            break; // Sai do loop interno quando o movimento completo do cavalo é feito
        }
    }
    printf("\n"); // Adiciona uma linha em branco para melhor legibilidade

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}


