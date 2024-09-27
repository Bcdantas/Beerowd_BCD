#include <bits/stdc++.h>

using namespace std;

// Função recursiva para contar as sequências possíveis
int contarSequencias(int atual, int N) {
    if (atual == N) {
        return 1;  // Caso base: chegou na última lajota, conta como uma sequência válida
    }

    int sequencias = 0;

    // Tenta avançar para cada lajota maior que a atual
    for (int prox = atual + 1; prox <= N; prox++) {
        sequencias += contarSequencias(prox, N); // Chamada recursiva para a próxima lajota
    }

    return sequencias;
}

int contarTotalSequencias(int N) {
    int totalSequencias = 0;

    // Começa a contagem de sequências a partir de cada possível lajota inicial (de 1 a N-1)
    for (int inicio = 1; inicio <= N; inicio++) {
        totalSequencias += contarSequencias(inicio, N);
    }

    return totalSequencias;
}

int main() {
    int N;

    while (cin >> N && N != 0) {
        // Calcula o número total de sequências
        int resultado = contarTotalSequencias(N);
        cout << resultado << endl;
    }

    return 0;
}
