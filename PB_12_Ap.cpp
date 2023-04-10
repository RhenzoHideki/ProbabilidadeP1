

#include "PB_12_Ap.h"


/**
 *
 * @param n - número de rodadas do programa
 */
void PB_12_Ap(int const n) {
    srand(time(NULL)); // semente para gerar numeros aleatorios

    // definicao das frequencias
    int freq[5] = {4, 8, 5, 2, 1};

    // a) probabilidade de ter i criancas
    double prob_a[5] = {0}; // inicializa com zero
    for (int i = 0; i < n; i++) {
        int f = rand() % 20; // escolhe uma familia ao acaso
        if (f < freq[0]) {
            prob_a[0] += 1;
        } else if (f < freq[0] + freq[1]) {
            prob_a[1] += 1;
        } else if (f < freq[0] + freq[1] + freq[2]) {
            prob_a[2] += 1;
        } else if (f < freq[0] + freq[1] + freq[2] + freq[3]) {
            prob_a[3] += 1;
        } else {
            prob_a[4] += 1;
        }
    }
    for (int i = 0; i < 5; i++) {
        prob_a[i] /= n;
        cout << "Probabilidade de ter " << i+1 << " criancas: " << prob_a[i] << endl;
    }

    // b) probabilidade da crianca vir de uma familia com i criancas
    double prob_b[5] = {0}; // inicializa com zero
    int total_criancas = freq[0] + 2*freq[1] + 3*freq[2] + 4*freq[3] + 5*freq[4];
    for (int i = 0; i < n; i++) {
        int f = rand() % 20 +1; // escolhe uma familia ao acaso
        int criancas;
        if (f < freq[0]) {
            prob_b[0] += 1;
        } else if (f < freq[0] + freq[1]) {
            prob_b[1] += 1;
        } else if (f < freq[0] + freq[1] + freq[2]) {
            prob_b[2] += 1;
        } else if (f < freq[0] + freq[1] + freq[2] + freq[3]) {
            prob_b[3] += 1;
        } else {
            prob_b[4] += 1;
        }
    }
    for (int i = 0; i < 5; i++) {
        prob_b[i] /=(total_criancas*n);
        cout << "Probabilidade da crianca vir de uma familia com " << i+1 << " criancas: " << prob_b[i] << endl;
    }

}
