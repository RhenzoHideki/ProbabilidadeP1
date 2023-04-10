
#include "PC_65.h"
/**
 *
 * @param n - número de rodadas do programa
 */
void PC_65(int const n){
    srand(time(NULL)); // inicializa gerador de números aleatórios

    int chaves;                       // número de chaves
    int tentativas;                       // tentativa em que a chave correta deve ser encontrada
    int count = 0;               // contador de experimentos bem sucedidos

    cout << "Insira o numero de chaves: ";
    cin >> chaves;
    cout << "Insira o numero de tentivas: ";
    cin >> tentativas;

    for (int i = 0; i < n; i++)
    {
        int key = rand() % chaves; // chave correta
        int j;
        for (j = 0; j < tentativas; j++)
        {
            int guess = rand() % (chaves - j); // escolhe uma chave aleatória que ainda não foi testada
            if (guess == key)
            {
                break; // acertou a chave
            }
        }
        if (j == tentativas)
        {
            count++; // a chave correta foi encontrada na tentativas-ésima tentativa
        }
    }

    cout << "Probabilidade de encontrar a chave na " << tentativas << "-ésima tentativa: "
         << (double)count / n << endl;

}
