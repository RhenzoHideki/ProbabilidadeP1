
#include "PC_10.h"
/**
 *
 * @param n - número de rodadas do programa
 */
void PC_10(int const n) {

    // Definindo as variáveis para os cálculos
    int A = 0; // número de alunos aprovados
    int Mc = 0; // número de alunos do sexo masculino
    int Amc = 0; // número de alunos aprovados e do sexo masculino
    int AmcC = 0; // número de alunos aprovados e do sexo masculino e do sexo feminino

    // Gerando números aleatórios
    srand(time(NULL)); // semente para os números aleatórios
    for (int i = 0; i < n; i++) {
        int sexo = rand() % 2; // 0 para masculino e 1 para feminino
        int nota = rand() % 2; // 0 para reprovado e 1 para aprovado

        if (sexo == 0) Mc++; // se for do sexo masculino
        if (nota == 1) A++; // se foi aprovado
        if (sexo == 0 && nota == 1) Amc++; // se for do sexo masculino e aprovado
        if (sexo == 0 && nota == 1) AmcC++; // se for do sexo masculino e aprovado e do sexo feminino
    }

    // Calculando as probabilidades
    double pA = (double)A/n;
    double pMc = (double)Mc/n;
    double pAmc = (double)Amc/n;
    double pAmcC = (double)AmcC/n;

    double pAUmc = pA + pMc - pAmc;
    double pAcIeMc = (1 - pA) * pMc;
    double pAIeM = pAmc / pMc;
    double pMcIA = pAmcC / pA;
    double pMIeA = pAmc / pA;

    // Imprimindo as probabilidades calculadas
    cout << "a) P(A ∪ Mc) = " << pAUmc << endl;
    cout << "b) P(Ac ∩ Mc) = " << pAcIeMc << endl;
    cout << "c) P(A ∩ M) = " << pAIeM << endl;
    cout << "d) P(Mc|A) = " << pMcIA << endl;
    cout << "e) P(M|A) = " << pMIeA << endl;

}