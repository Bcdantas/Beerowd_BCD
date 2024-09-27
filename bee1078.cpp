#include <iostream>
using namespace std;

int tabuada(int a, int i){
    if(i <= 10) {
        cout << a << " x " << i << " = " << a * i << endl;
        return tabuada(a, i + 1); // Recursão para a próxima multiplicação
    }
    return 0;
}

int main(){
    int numero;
   
    cin >> numero;
    
    tabuada(numero, 1); // Chamada inicial da tabuada com i = 1

    return 0;
}
