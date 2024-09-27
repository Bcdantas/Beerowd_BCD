#include <bits/stdc++.h>

using namespace std;

// Função recursiva para calcular o maior divisor comum (MDC)
int mdc(int a, int b) {
    if (b == 0)
        return a;
    return mdc(b, a % b);
}

int main() {
    int N;
    cin >> N; // Lê o número de casos de teste
    
    // Para cada caso de teste
    for (int i = 0; i < N; i++) {
        int F1, F2;
        cin >> F1 >> F2; // Lê as quantidades de figurinhas de Ricardo e Vicente
        
        // Calcula e imprime o MDC entre F1 e F2
        cout << mdc(F1, F2) << endl;
    }

    return 0;
}
