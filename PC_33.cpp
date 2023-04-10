
#include "PC_33.h"

/**
 *
 * @param n - número de rodadas do programa
 */
void PC_33(int const n){
    srand(time(nullptr));

    int acertos = 0;      // contador de vezes em que o alvo é atingido

    for (int i = 0; i < n; i++)
    {
        bool acerto_a = (rand() % 10) < 9; // atirador A acerta com probabilidade 0.9
        bool acerto_b = (rand() % 10) < 8; // atirador B acerta com probabilidade 0.8
        bool acertos_c = (rand() % 2) == 1; // atirador C acerta com probabilidade 0.5

        // verifica se o alvo é atingido pelo menos uma vez
        if (acerto_a || acerto_b || acertos_c)
        {
            acertos++;
        }
    }

    // calcula a probabilidade condicional
    float p_acerto_dado_a = (float)acertos / n;
    float p_a = 0.9;                                                  // probabilidade de A acertar
    float p_b = 0.8;                                                  // probabilidade de B acertar
    float p_c = 0.5;                                                  // probabilidade de C acertar
    float p_pelo_menos_um_acerto = 1 - (1 - p_a) * (1 - p_b) * (1 - p_c); // probabilidade do alvo ser atingido pelo menos uma vez

    float p_a_given_hit = (p_acerto_dado_a * p_a) / p_pelo_menos_um_acerto;
    cout << "Probabilidade de o alvo ser atingido pelo menos uma vez dado que o atirador A acerta: " << p_a_given_hit << endl;
}
