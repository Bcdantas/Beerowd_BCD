#include <bits/stdc++.h>

using namespace std;

// Função recursiva para calcular o perímetro 
double calcularPerimetro(int N, double L) {
    if (N == 0)
        return 0.0; // Caso base
    return L + calcularPerimetro(N - 1, L); // Soma recursiva
}

int main() {
    int N;
    double L;
    cin >> N >> L;  // Lê o número de lados e o comprimento de cada lado

    // Calcula o perímetro usando a função recursiva
    double perimetro = calcularPerimetro(N, L);

    // Imprime o resultado
    cout << perimetro << endl;

    return 0;
}
