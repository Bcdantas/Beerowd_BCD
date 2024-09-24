#include <iostream>
#include <string>

using namespace std;

struct ContaAgua {
    int id;
    string endereco; 
    string email;   
    int agua; 
    double conta = 0;
};

int main() {
    ContaAgua ca[5];

    for (int i = 0; i < 5; i++) {

        cin >> ca[i].id;
        cin.ignore(); // limpar o buffer de entrada pra nao dar merda
        getline(cin, ca[i].endereco);  // getline le string com espaços
        getline(cin, ca[i].email); 
        cin >> ca[i].agua;
    }

    for (int i = 0; i < 5; i++) {
        if (ca[i].agua <= 5) {
            ca[i].conta = 15.78 + (1.34 * ca[i].agua);
        } else if (ca[i].agua > 5 && ca[i].agua <= 10) {
            ca[i].conta = 15.78 + (3.40 * ca[i].agua);
        } else if (ca[i].agua > 10 && ca[i].agua <= 15) {
            ca[i].conta = 15.78 + (6.94 * ca[i].agua);
        } else if (ca[i].agua > 15) {
            ca[i].conta = 15.78 + (10.50 * ca[i].agua);
        }
        cout << ca[i].id << " " << ca[i].conta << endl;
    }

    return 0;
}
