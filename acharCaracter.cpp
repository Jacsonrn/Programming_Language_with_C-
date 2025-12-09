#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int acharCaracter(char palavra[], int tamanho, char k);

int main(){
int tamanho;
char k;
cin >> tamanho;
cin >> k;
char palavra[tamanho];
for(int i = 0; i < tamanho; i++){
    cin >> palavra[i];
}
cout << "Posicao da ultima ocorroncia: "<<acharCaracter(palavra, tamanho, k)<<endl;
return 0;   
}
int acharCaracter(char palavra[], int tamanho, char k){
int posicao = 0;
    for(int i = 0; i < tamanho; i++){
        if(palavra[i] == k){
            posicao = i+1;
        }
    }
    if(posicao == 0){
        return -1;
    }
return posicao;
}