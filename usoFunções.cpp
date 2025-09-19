#include <iostream>
using namespace std;

bool eh_primo(int p);
int main(){

    int num;
    cout<<"Insira um numero inteiro:\n";
    cin>> num;

    if(eh_primo(num) == true){
        cout<< num <<" eh primo\n";
    
    }
    else{
        cout<< num << "nao eh primo\n";

    }

   
    return 0;

}
 bool eh_primo(int p){
    int i, cont = 0;
    for(i = 1; i <= p; i++){
        if(p%i == 0){
            cont++;
        }

    }
    
    return (cont == 2);

    }
