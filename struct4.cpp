#include <bits/stdc++.h>

using namespace std;

struct produto {
    int LED;
    string descricao;
    double preco;
};

int main() {
    struct produto p[100];
    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        cin >> p[i].LED;
        cin.ignore();

        getline(cin,  p[i].descricao);

        cin >> p[i].preco;
    }

    int codigo, quantidade;
    double total = 0;
    int totalItens = 0;

    while (cin >> codigo && codigo != 0) {
        cin >> quantidade;

        bool encontrado = false;
        for (int i = 0; i < n && !encontrado; i++) {
            if (p[i].LED == codigo) {
                encontrado = true;
                total += p[i].preco * quantidade;
                totalItens += quantidade;
            }
        }

        if (!encontrado || quantidade <= 0) {
            cout << "Pedido invalido" << endl;
        }
    }

    cout << fixed << setprecision(2) << "Total: R$" << total << endl;
    cout << "Itens: " << totalItens << endl;


    return 0;
}
