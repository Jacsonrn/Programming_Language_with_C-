#include <iostream>
using namespace std;

int main(){
    int i;
    for(i = 1; i <= 100; i++){
        cout << i << " "
             << 10*i << " "
             << 101-i << endl;
    }
    return 0;
}