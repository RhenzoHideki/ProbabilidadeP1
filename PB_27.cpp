#include "PB_27.h"
/**
 *
 * @param n // número de repetições do experimento
 */
void PB_27( int const n ){
    int bolas, num_urnas    , cont;
    cout << "Digite o número de bolas e o número de urnas: ";
    cin >> bolas >> num_urnas;

    srand(time(NULL));
    int count = 0;

    for (int i = 0; i < n; i++) {
        int urnas[num_urnas] = {0}; // inicializa todas as urnas com 0 bolas
        for (int j = 0; j < bolas; j++) {
            int urna = rand() % num_urnas; // escolhe uma urna aleatoriamente
            urnas[urna]++; // adiciona a bola na urna escolhida
        }
        cont = 0;
        for (int j = 0; j < num_urnas; j++) {
            if (urnas[j] == 0) cont++; // conta o número de urnas sem bolas
        }
        if (cont == 1) count++; // conta o número de experimentos com exatamente uma urna desocupada
    }

    float prob = (float) count / n; // calcula a probabilidade
    cout << "A probabilidade de que exatamente uma urna seja deixada desocupada é: " << prob << endl;

}
