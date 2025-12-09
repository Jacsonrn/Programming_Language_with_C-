#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int normaVetor(int numeros[], int tamanho);

int main(){
int tamanho;
cin >> tamanho;
int numeros[tamanho];
    for(int i = 0; i < tamanho; i++){
        cin >> numeros[i];

    }
cout << "Norma de L1: "<<normaVetor(numeros, tamanho)<<endl;
return 0;    
}
int normaVetor(int numeros[], int tamanho){
int soma = 0;
 for(int i = 0; i < tamanho; i++){
    soma += numeros[i];

 }
return soma;
}