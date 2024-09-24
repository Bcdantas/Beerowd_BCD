#include <bits/stdc++.h>

using namespace std;
void comissao(double, double);
int main(){
    double venda,salario;

    cin >> venda >> salario;

    comissao(venda,salario);

    return 0;
}

void comissao(double v, double s){
    cout << fixed << setprecision(2) << (v*0.15)+s;
}