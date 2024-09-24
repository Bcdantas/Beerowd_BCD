#include <bits/stdc++.h>

using namespace std;
int PA(int);

int main(){
    int numero;

    cin >> numero;

    cout << PA(numero);
    
    return 0;
}

int PA(int n){
    int sn;
    sn = ((1 +n) *n )/2;

    return sn;
}