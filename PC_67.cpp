
#include "PC_67.h"
void PC_67(int const n){
    srand(time(NULL));
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int failures = 0;
        for (int j = 0; j < 3; j++)
        {
            float rando = rand() % 10; // gera numero aleatório
            if (rando >= 9) // caso rando sendo maior igual que 9 há uma falha (0.1)
                failures++;
        }
        if (failures < 1) // se não houver +1 falha por fio incrementa contador
            count++;
    }
    float prob = (float)count / n;
    cout << "A probabilidade do circuito funcionar é de " << prob << endl;
}