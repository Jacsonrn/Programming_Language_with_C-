#include <iostream>
using namespace std;

int main(){
   float nota = 0;
    cout << "Digite sua nota:"<< endl;
    cin >> nota;
    if(nota>=5){
        cout <<"Aluno aprovado"<< endl;
    }else if(nota >=3){
        cout<<"Aluno em recuperação"<< endl;
    }else{
        cout<<"Aluno reprovado"<< endl;
    }
return 0;
}