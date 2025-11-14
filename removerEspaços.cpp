#include <iostream>
using namespace std;
#include <cstring>
const int MAX = 20;
void removerEspacos(char stringUsuario[]);

int main(){
    char stringUsuario[MAX];
    cin.getline(stringUsuario, MAX);
    cout << " A frase com espaços é: "<< stringUsuario <<endl;
    removerEspacos(stringUsuario);
    cout << "A frase sem espaços é: "<< stringUsuario <<endl;


    return 0;
}
void removerEspacos(char stringUsuario[]){
    char temporario[MAX];
    int tamanhoReal = strlen(stringUsuario);
    int j = 0;
    int i;
    for(i = 0; i < tamanhoReal; i++){
        if(stringUsuario[i] != ' '){
            temporario[j] = stringUsuario[i];
            j++;
        }

    }
    temporario[j] = '\0';
    strcpy(stringUsuario, temporario);
}