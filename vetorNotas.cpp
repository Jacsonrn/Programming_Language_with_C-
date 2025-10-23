#include <iostream>
using namespace std;


int main(){
    int n, i;
    cout << "Insira a quantidade de notas:\n";
    cin >> n;
    float notas[n], maior;

    //Leitura das notas
    for(i = 0; i < n; i++){
        cin >> notas[i];
    }

    //Processamento da maior nota
    for(i = 0; i < n; i++){
        if(i == 0){
            maior = notas[i];
        }
        else{
            if(notas[i] > maior){
                maior = notas[i];
            }
        }
    }
    cout << "Maior nota: " << maior << endl;
    return 0;
}