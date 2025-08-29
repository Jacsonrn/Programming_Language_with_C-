#include <iostream>
using namespace std;

int main(){
int num = 0;
int i;
cout<<"Digite um numero inteiro:"<<endl;
cin>>num;
for(i=0; i<num; i++){
if(i==0){
    cout<<"0"<<endl;
}else{
    cout<<2*i<<endl;
}
}

}