#include <bits/stdc++.h>

using namespace std;

struct pessoa{
    char nome[50];
    int idade;
    double salario;
};

int main(){

    struct pessoa p[5];

    for(int i=0;i<5;i++){
        cin >> p[i].nome >> p[i].idade >> p[i].salario;
    }
    
    for(int i=0;i<5;i++){
        std::cout << std::fixed << std::setprecision(2);
        std::cout << p[i].nome << " " << p[i].idade << " " << p[i].salario << endl;
    }

    return 0;
}