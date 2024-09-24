#include <bits/stdc++.h>

using namespace std;

struct aluno{
    int matricula;
    char nome[50];
    double nota1;
    double nota2;
    double nota3=0;
};

int main(){

    struct aluno al[4];

    for(int i=0;i<4;i++){
        cin >> al[i].matricula >> al[i].nome >> al[i].nota1 >> al[i].nota2;
        al[i].nota3 = al[i].nota1 + al[i].nota2;
    }

    for(int i=0;i<4;i++){
        cout << al[i].matricula <<" " << al[i].nome <<" " << al[i].nota1 <<" " << al[i].nota2 << " " <<al[i].nota3;
        if(al[i].nota3>=6){
            cout << " " << "Aprovado" << endl;
        }
        else{
            cout << " " << "Reprovado" << endl;
        }
    }

    return 0;
}