#include <bits/stdc++.h>

using namespace std;

int fatorial(int n){
    if(n == 0 || n == 1) {
        return 1; // Fatorial de 0 e 1 é 1
    } else {
        return n * fatorial(n - 1); // Chamada recursiva
    }
}
int main(){
    int x;

    cin >> x;

    cout << fatorial(x) << endl;

    return 0;
}