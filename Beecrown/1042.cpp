#include <iostream>
using namespace std;


int main() {
    
    int vetor[3];
    int vetorOriginal[3];
    
    for (int i = 0; i < 3; i++) {
        cin >> vetor[i];
        vetorOriginal[i] = vetor[i];
    }
    
    for (int i = 0; i < 3; i++) {
        bool trocado = false;

        for (int j = 0; j < 3 - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]){
                int temp = vetor[j];
                vetor[j] =  vetor[j + 1];
                vetor[j + 1] = temp;
                trocado = true;
            }
        }
        if (!trocado){
            break;
        }
    }
    
    cout << vetor[0] << endl << vetor[1] << endl << vetor[2] << endl;
    cout << endl;
    cout << vetorOriginal[0] << endl << vetorOriginal[1] << endl << vetorOriginal[2] << endl;

    
    
    return 0;
}
