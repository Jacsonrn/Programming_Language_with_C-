#include <iostream>
using namespace std;

int main(){
    int num1, num2, maior;
    cin >> num1 >> num2;
    num1 > num2 ? maior = num1 : maior = num2;
    cout <<"O maior eh:"<<maior<<endl;
    return 0;
}