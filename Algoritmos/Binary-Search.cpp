#include <iostream>
using namespace std;

int main(){
    int n, alvo, vetor[100], meio, inicio, fim;
    bool encontrou = false;
    
    cout << "Binary Search" << endl;
    cout << "Digite o tamanho do vetor: ";
    cin >> n;
    cout << "Digite os elementos do vetor: ";
    for(int i = 0; i < n; i++){
        cin >> vetor[i];
    }
    cout << "Digite o elemento a ser buscado: ";
    cin >> alvo;

    inicio = 0;
    fim = n - 1;
    
    while (inicio <= fim){
        meio = (inicio + fim) / 2;

        if (vetor[meio] == alvo){
            encontrou = true;

        } else if (vetor[meio] < alvo){
            inicio = meio + 1;

        } else{
            fim = meio - 1;

        }
    
        if (encontrou == true){
            break;
        }
    }

    if (encontrou){
        cout << "O elemento está na posição " << meio + 1 << " (índice " << meio << ")" << endl;
    } else {
        cout << "Elemento não encontrado no vetor." << endl;
    }
}