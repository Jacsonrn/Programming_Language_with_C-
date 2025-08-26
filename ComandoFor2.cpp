#include <iostream>
using namespace std;

int main(){
 int alunos;
 int media = 0;
 int i;
 int nota;
 cout <<"Digita quantidade de alunos"<<endl;
 cin >> alunos;
 for(i = 0; i < alunos; i++){
    cout<<"Digite a nota do "<<i+1<<" o aluno"<<endl;
    cin>>nota;
    media +=nota;
 }

 media /=alunos;
 cout<<"a media dos alunos e"<<media<<endl;
 return 0;

}